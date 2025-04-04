#include <stdio.h>

int main() {
    char str[100], temp;
    int i, j;

    // Input the string
    printf("Enter a string: ");
    gets(str);  // unsafe in real-world, use fgets() instead

    // Sorting characters using Bubble Sort
    for (i = 0; str[i] != '\0'; i++) {
        for (j = i + 1; str[j] != '\0'; j++) {
            if (str[i] > str[j]) {
                // Swap characters
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }

    // Output the sorted string
    printf("Sorted string: %s\n", str);

    return 0;
}
