#! /bin/bash 
I=0
while [ $I -lt 10 ]
do
	I=`expr $I + 1`
	touch $I.sh
done
