#! /bin/bash 
for I
do
if [ `expr $I % 2` -ne 0 ]
then
echo $I
fi
done 				
