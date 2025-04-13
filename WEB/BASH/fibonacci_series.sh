echo "Enter the number of terms for Fibonacci series:"
read terms
a=0
b=1
echo "Fibonacci series up to $terms terms:"
for (( i=1; i<=terms; i++ ))
do
    echo -n "$a "
    fib=$((a + b))
    a=$b
    b=$fib
done
echo
