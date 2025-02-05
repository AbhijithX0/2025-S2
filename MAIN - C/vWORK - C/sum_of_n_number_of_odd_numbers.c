#include<stdio.h>
void main(){
    int n,sum=0,i;
    printf("Enter the number of odd numbers you want to add:"); //asking to enter the number of odd numbers to add 
    scanf("%d",&n); //taking input from user and storing it in n
    for(i=1;i<=n;i++){ //loop to add the odd numbers starts from 1
        sum=sum+(2*i-1); //adding the odd numbers
    //  0=0+2*1-1 //i starts from 1 and it changes in every iteration
    }
    printf("The sum of first %d odd numbers is :%d",n,sum);
}

//Github:AbhijithX0