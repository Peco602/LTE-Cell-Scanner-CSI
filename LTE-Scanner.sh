#!/bin/bash

clear 

echo
echo "#########################################################"
echo "#							#"
echo "#							#"
echo "#		Italian LTE Cell Scanner		#"
echo "#							#"
echo "#							#"
echo "#########################################################"
echo
echo
echo "Scanning all Italian LTE frequencies..."
echo 

filename="ScanningResults"

echo "DPX	CID	A	fc		RXPWR		nRB"
echo "DPX	CID	A	fc		RXPWR		nRB" > $filename

LTE_freq[0]=796000000
LTE_freq[1]=806000000
LTE_freq[2]=816000000
LTE_freq[3]=927600000
LTE_freq[4]=935050000
LTE_freq[5]=945050000
LTE_freq[6]=954950000
LTE_freq[7]=1462000000
LTE_freq[8]=1482000000
LTE_freq[9]=1807500000
LTE_freq[10]=1817500000
LTE_freq[11]=1835000000
LTE_freq[12]=1850000000
LTE_freq[13]=1857500000
LTE_freq[14]=1870000000
LTE_freq[15]=2117500000
LTE_freq[16]=2132500000
LTE_freq[17]=2142500000
LTE_freq[18]=2150000000
LTE_freq[19]=2162500000
LTE_freq[20]=2625000000
LTE_freq[21]=2635000000
LTE_freq[22]=2647500000
LTE_freq[23]=2662500000
LTE_freq[24]=2680000000


function progress()
{
    PARAM_PROGRESS=$1;
    PARAM_PHASE=$2;
    PROGRESS_BAR=""

    if [ $PARAM_PROGRESS -eq 100 ]; then
	echo -ne "Done! \n"; delay;
    else
    	for (( i=0;i<$PARAM_PROGRESS;i++ ))
    	do
		if [ $(($i % 2)) -eq 0 ]; then
			PROGRESS_BAR=$PROGRESS_BAR"#"; fi
    	done

    	for (( i=0;i<100-$PARAM_PROGRESS;i++ ))
    	do
		if [ $(($i % 2)) -eq 0 ]; then
			PROGRESS_BAR=$PROGRESS_BAR" "; fi
    	done

    	echo -ne "[$PROGRESS_BAR] ($PARAM_PROGRESS%) $PARAM_PHASE \r"; delay;
    fi
}

function delay()
{
    sleep 0.2;
}


MAX=${#LTE_freq[@]}
K=0
PARAM_PROGRESS=$(echo "scale=1;$K*100/(2*$MAX)" | bc -l | awk '{printf "%.0f\n", $1}')
PARAM_PHASE="[scanning]"
progress $PARAM_PROGRESS $PARAM_PHASE

for f in ${LTE_freq[@]}
do
	let "f_min=f-200000"
	let "f_max=f+200000"
	cell=($(./CellSearch --freq-start $f_min --freq-end $f_max | grep '^FDD [0-9]*'))
	#cell=(FDD 100 2 796.1M 12k -21.8 N 50 N one 1.0000150238430718375 FDD 49 2 796.1M 11.9k -25 N 50 N 1/6 1.0000149860034825977)	
	sleep 2
	if [[ $cell != "" ]]
	then
		echo -ne "                                                                     \r"
		let "N=${#cell[@]}/11"
		for (( j=0;j<$N;j++ ))
		do
			let "offset=11*j"
			dpx=${cell[$offset]}
			cid=${cell[$offset+1]}
			a=${cell[$offset+2]}
			fc=${cell[$offset+3]}
			pwr=${cell[$offset+5]}
			nrb=${cell[$offset+7]}

			echo "$dpx	$cid	$a	$fc		$pwr		$nrb"
			echo "$dpx	$cid	$a	$fc		$pwr		$nrb" >> $filename
			
		done
	fi

	let "K+=1"
	PARAM_PROGRESS=$(echo "scale=1;$K*100/(2*$MAX)" | bc -l | awk '{printf "%.0f\n", $1}')
	PARAM_PHASE="[scanning]"
	progress $PARAM_PROGRESS $PARAM_PHASE

done



