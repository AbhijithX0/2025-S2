#include<stdio.h>
void main(){
    int size,elements[100],i,j,temp;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    printf("Enter the elements of the array:");
    for(i=0;i<size;i++){
        scanf("%d",&elements[i]);
    }
    for(i=0;i<(size-1);i++){
        for(j=0;j<(size-i-1);j++){
            if(elements[j]>elements[j+1]){
                temp=elements[j];
                elements[j]=elements[j+1];
                elements[j+1]=temp;
            }
        }
    }
    printf("Array Succussfully sorted using Bubble sort method \n");
    printf("The sorted array is:");
    for(i=0;i<size;i++){
        printf("%d ",elements[i]);
    }
}

//Github :AbhijithX0