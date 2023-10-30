#include <stdlib.h>
#include <stdio.h>

int problemThree(int n) {
    int fact = 1;
    while (fact < n) {
        if (n % fact == 0) {
            printf("%d \n", fact);
        }
        fact += 1;
    }
    return 0;
}