#include <stdlib.h>
#include <stdio.h>

int problemThree(long int n) {
    int fact = 2;
    while (fact * fact <= n) {
        if (n % fact) fact+= 1;
        else n /= fact;
    }
    return n;
}