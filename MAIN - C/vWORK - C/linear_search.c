#include<stdio.h>
void main(){
    int size,elements[100],key,i,j,flag=0;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    printf("Enter the elements of the array:");
    for(i=0;i<size;i++){
        scanf("%d",&elements[i]);
    }
    printf("Enter the element to be searched :");
    scanf("%d",&key);
    for(j=0;j<size;j++){
        if(elements[j]==key){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("The element %d is found at position %d",key,j+1);
    }
    else{
        printf("The element %d is not found in the array",key);
    }
}

//Github :AbhijithX0