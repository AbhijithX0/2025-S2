echo "Enter the first number:"
 read num1
 echo "Enter the second number:"
 read num2
 if [ $num1 -gt $num2 ]; then
    echo "$num1 is the largest."
 elif [ $num1 -lt $num2 ]; then
    echo "$num2 is the largest."
 else
    echo "Both numbers are equal."
 fi