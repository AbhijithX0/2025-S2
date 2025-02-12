#include<stdio.h>
void main(){
    int limit,i;
    printf("Enter the limit: ");
    scanf("%d", &limit);
    for(i=0;i<=limit;i++){
        int num = i;
        int sum = 0;
        while(num>0){
            int rem = num%10;
            sum += rem*rem*rem;
            num = num/10;
        }
        if(sum == i){
            printf("%d is an armstrong number\n", i);
        }
    }
}

//Github:AbhijithX0