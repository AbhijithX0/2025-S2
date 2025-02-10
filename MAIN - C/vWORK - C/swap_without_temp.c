#include<stdio.h>
void main(){
    int a, b;
    // Prompt the user to enter two numbers
    printf("Enter two numbers: ");

    // Read the two numbers from the user
    scanf("%d %d", &a, &b);

    // Print the values of a and b before swapping
    printf("Before swapping a=%d \t b=%d\n", a, b);

    // Swap the values of a and b without using a temporary variable
    a = a + b;
    b = a - b;
    a = a - b;

    // Print the values of a and b after swapping
    printf("After swapping a=%d \t b=%d", a, b);
}
//Github:AbhijithX0