#include <stdlib.h>
#include <stdio.h>

typedef struct {
    int value;
} Result;

Result* problemOne(int lim)                          {
    Result *sum                                      ;
    sum = (Result*)malloc(sizeof(Result))            ;
    sum->value = 0                                   ;
    Result *new_sum                                  ; 
    for (int i = lim - 1; i > 0; --i)                {
        if (i % 3 == 0 || i % 5 == 0)                {
            new_sum = realloc(sum, sizeof(Result)*i) ;
            new_sum->value = sum->value              ;
            sum = new_sum                            ;
            sum->value += i                          ;
                                                     }
                                                     }
    return sum                                       ;
                                                     }