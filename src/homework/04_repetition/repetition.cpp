//add include statements
#include "repetition.h"

//add function(s) code here

int get_factorial(int num)
{
    int result = 1;

    for(int i = 1; i <= num; i++)
    {
        result *= i;
    }

    return result;
}

int sum_odd_numbers(int num)
{
    int sum = 0;
    int i = 1;

    while(i <= num)
    {
        if(i % 2 != 0)
        {
            sum += i;
        }
        i++;
    }

    return sum;
}
