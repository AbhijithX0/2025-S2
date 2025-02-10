#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter three numbers: ");//asking user to enter three numbers
    scanf("%d %d %d", &a, &b, &c);//storing the entered numbers in the variables a, b and c
//in if it is checking whether a is greater than b and c
    if((a>b)&&(a>c)){
        printf("%d is greater than %d and %d", a, b, c);
    }
//in if it is checking whether b is greater than a and c
    if((b>a)&&(b>c)){
        printf("%d is greater than %d and %d", b, a, c);
    }
//in if it is checking whether c is greater than a and b
    if((c>a)&&(c>b)){
        printf("%d is greater than %d and %d", c, a, b);
    }
}
//Github:AbhijithX0