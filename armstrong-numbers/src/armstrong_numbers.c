#include "armstrong_numbers.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define FALSE (1==0)
#define TRUE  (1==1)

int is_armstrong_number(int n)
{
    int sum;
    int length = snprintf(NULL, 0, "%d", n);
    int nbytes = length +1;
    char* number = malloc(nbytes);
    snprintf(number, nbytes, "%d", n);
    for (int i = 0; i < length; i++)
    {
        int digit = (int)number[i] - 48;
        sum += pow(digit, length);
    }
    free(number);
    return (sum == n) ? TRUE : FALSE;
}
