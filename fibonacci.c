#include "fibonacci.h"

unsigned long long fibonacci(int N)
{
    if(N == 1 || N == 2)
        return 1;
    return (fibonacci(N - 1) + fibonacci(N - 2));
}

