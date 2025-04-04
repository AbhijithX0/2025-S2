#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i = 0, j = 0;

    // Input first string
    printf("Enter the first string: ");
    gets(str1);  // Note: unsafe, use fgets() for safety in real-world use

    // Input second string
    printf("Enter the second string: ");
    gets(str2);

    // Move to the end of the first string
    while (str1[i] != '\0') {
        i++;
    }

    // Copy second string to the end of first string
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }

    // Null terminate the final string
    str1[i] = '\0';

    // Output the concatenated string
    printf("Concatenated string: %s\n", str1);

    return 0;
}
