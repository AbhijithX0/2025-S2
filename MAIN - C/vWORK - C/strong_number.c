#include <stdio.h>

int main() {
    int limit, j, temp, last_digit, sum, fact, i;
    
    // Input limit
    // printf("Enter the limit: ");
    // scanf("%d", &limit);
    limit = 5;

    printf("Strong numbers up to %d are: ", limit);

    // Loop through numbers from 1 to limit
    for (i = 1; i <= limit; i++) {
        temp = i;
        sum = 0;

        // Calculate sum of factorials of digits
        while (temp > 0) {
            last_digit = temp % 10;
            fact = 1;

            // Calculate factorial of last_digit
            for (j = 1; j <= last_digit; j++) {
                fact *= j;
            }

            sum += fact;
            temp /= 10;
        }

        // Check if sum of factorials equals the original number
        if (sum == i) {
            
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}

//Github:AbhijithX0
