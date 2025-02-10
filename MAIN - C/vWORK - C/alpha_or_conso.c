#include<stdio.h>
void main(){
    char letter;
    printf("Enter a character: "); //asking user to enter a character
    scanf("%c", &letter); //storing the entered character in the variable letter
    //in if it is checking whether the entered character is a vowel or not
    if(letter=='a'||letter=='e'||letter=='i'||letter=='o'||letter=='u'||letter=='A'||letter=='E'||letter=='I'||letter=='O'||letter=='U'){
        //if vowel print it is a vowel
        printf("The Entered letter is a Vowel");
    }
    else{
        //if consonant print it is a consonant
        printf("The Entered letter is a Consonant");
    }
}
//Github:AbhijithX0