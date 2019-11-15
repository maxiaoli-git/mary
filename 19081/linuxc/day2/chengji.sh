echo -n "please input score:"
read s
if [ $s -lt 0 -o $s -gt 100 ]
then
	echo "not in [0-100]"
	exit
fi
G=`expr $s / 10`
case $G in 
	9|10)
		echo "A"
		;;
	8)
		echo "B"
		;;
	7)
		echo "C"
		;;
	6)
		echo "D"
		;;
	*)
		echo "不及格"
esac
