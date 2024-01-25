#include "fibonacci.h"
#include <stdio.h>
#include <stdlib.h>

void write(const char *file_output, const int N) {
    FILE *output = NULL;
    unsigned long long number;
    output = fopen(file_output, "wb");
    if (output == NULL) {
        printf("Error opening file");
        exit(1);
    }
    for(int i = 1; i <= N; i++) {
        number  = fibonacci(i);
        fwrite(&number, sizeof(long long), 1, output);
    }
    fclose(output);
}

