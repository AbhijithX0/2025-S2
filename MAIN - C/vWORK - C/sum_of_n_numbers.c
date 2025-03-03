#include<stdio.h>
void main(){
    int n, sum=0,i;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("The sum of %d numbers is %d", n, sum);
}

//Github : AbhijithX0