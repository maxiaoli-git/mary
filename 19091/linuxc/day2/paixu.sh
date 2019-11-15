read a b c
t=0
if [ $a -gt $b ]
then
	t=$b
	b=$a
	a=$t #此时a比b小了  
fi

if [ $a -gt $c ] 
then 
	t=$c
	c=$a
	a=$t #此时a比c小了
fi

if [ $b -gt $c ]
then 
	t=$b
	b=$c
	c=$t #此时b比c小了

fi
echo $a $b $c
