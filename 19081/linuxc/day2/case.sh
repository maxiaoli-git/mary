#! /bin/bash 
read R
case $R in
	yes|y|Y)
		echo "yes"
		;;
	no)
		echo "no"
		;;
	*)
		echo "other"
		;;
esac
