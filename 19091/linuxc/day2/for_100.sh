#！/bin/bash
SUM=0
for I in `seq 1 1 100`
do 
	SUM=`expr $SUM + $I`
done
echo $SUM
