#include<stdio.h>
void main(){
    int rows,cols,i,j;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d",&rows,&cols);
    int matrix1[rows][cols];
    int matrix2[rows][cols];
    int sum[rows][cols];

    printf("Enter the elements of the first matrix: \n");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            printf("Enter the element at position %d %d: ",i+1,j+1);
            scanf("%d",&matrix1[i][j]);
        }
    }

    printf("Enter the elements of the second matrix: \n");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            printf("Enter the element at position %d %d: ",i+1,j+1);
            scanf("%d",&matrix2[i][j]);
        }
    }

    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            sum[i][j]=matrix1[i][j]+matrix2[i][j];
        }
    }

    printf("The sum of the two matrices is: \n");
    for(i=0;i<rows;i++){
        for(j=0;j<cols;j++){
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }
}

//Github :AbhijithX0