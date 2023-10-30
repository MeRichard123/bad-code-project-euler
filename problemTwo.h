#include <stdio.h>

int fibbonacci(int n)        {
   int point1 = 1            ;
   int point2 = 2            ;
   int next                  ;
   int sum = point2          ;

   while (point2 < n)        {
     next = point1 + point2;
     if (next % 2 == 0)      {
        sum += next          ;
                             }
    point1 = point2          ;
    point2 = next            ;
                             }
   return sum                ;
                             }

int problemTwo(int n)        {
    fibbonacci(n)            ; 
                             }
