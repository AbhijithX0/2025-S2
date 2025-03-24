#include<stdio.h>
void main(){
    int size,elements[100],i,max;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    printf("Enter the elements of the array:");
    for(i=0;i<size;i++){
        scanf("%d",&elements[i]);
    }
    max=elements[0];
    for(i=1;i<size;i++){
        if(elements[i]>max){
            max=elements[i];
        }
    }
    printf("The largest element in the array is %d",max);
}
//Github :AbhijithX0