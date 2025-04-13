#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    int i,j,n,flag=0;
    printf("\nEnter a string:");
    scanf("%s",str);
    n=strlen(str);
    for(i=0,j=n-1;i<n/2;i++,j--){
        if(str[i]!=str[j]){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("\n%s is a not a palindrome",str);
}else{
    printf("\n%s is a palindrome",str);
}
return 0;
}