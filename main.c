#include <stdio.h>
#include "problemOne.h"
#include "problemTwo.h"
#include "problemThree.h"

int main() {
    Result *answer = problemOne(1000);
    int answerTwo = problemTwo(4E6);
    int answerThree = problemThree(600851475143);
    printf("Result: %d \n", answer->value);
    printf("Result: %d \n", answerTwo);
    printf("Result: %d \n", answerThree);
    return 0;
}