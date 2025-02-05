#include<stdio.h>
#include<conio.h>
void main(){
    float r,area;
    printf("Enter the radius of the circle :");
    scanf("%f",&r);
    area=3.14*r*r;
    printf("The area of the circle having radius of %f is : %f",r,area);
}