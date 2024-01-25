#include "thread_func.h"
#include <stdio.h>
#include <stdlib.h>

void *thread_func(void *args)
{
    // Convert the function argument to a pointer to a structure
    struct thread_args *st_args = (struct thread_args *)args;
    // Total result of summing the sequence elements from all threads
    unsigned long long res = 0;
    FILE *input = NULL;
    unsigned long long number;
    input = fopen("fib.bin", "rb");
    if (input == NULL) {
        printf("Error opening file");
        exit(1);
    }
    int begin = st_args -> index_start;
    int end = st_args -> index_end;
    fseek(input, begin * sizeof(long long), SEEK_SET);
    for(begin; begin < end; begin++){
        fread(&number, sizeof(long long), 1, input);
        printf("Thread %d: %lld\n",st_args -> id, number);
        res += number;
    }
    st_args -> res = res;
    fclose(input);
    return NULL;
}
