 echo "Enter a number:"
 read number
 factorial=1
 if [ $number -lt 0 ]; then
    echo "Factorial is not defined for negative numbers."
 else
    for (( i=1; i<=number; i++ ))
    do
        factorial=$((factorial * i))
    done
     echo "The factorial of $number is $factorial."
 fi