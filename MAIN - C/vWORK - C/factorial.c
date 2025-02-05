#include<stdio.h>
void main(){
    int fact=1,n,i;
    printf("Enter the number :"); //aksing to enter the number
    scanf("%d",&n); //taking the input and storing it in n
    for(i=1;i<=n;i++){ //in the loop we are calculating the factorial of the number
    //the loop with start with i=1 and will run till i<=n and in each iteration we are multiplying the value of fact with i
        fact=fact*i;

    }
    printf("The factorial of %d is : %d",n,fact);
}

//GitHub:AbhijithX0