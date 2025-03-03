#include<stdio.h>
void main(){
    int n, sum=0,i;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i=2;i<=n*2;i=i+2){
        sum=sum+i;
    }
    printf("The sum of even numbers upto %d is %d", n, sum);
}

//Github : AbhijithX0