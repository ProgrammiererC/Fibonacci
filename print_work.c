#include "print_work.h"
#include <stdio.h>
#include <stdbool.h>

bool print_work(unsigned long long result)
{
    char symbol; 
    printf("Total summ = %lld \n\n", result);
    printf("Run the program again?:\n\
If 'Yes', then enter: 'Y' or 'y'\n\
If 'No', then enter any other character: ");
    scanf("%c", &symbol);
    scanf("%c", &symbol);
    printf("%c\n", symbol);
    if(symbol == 'Y' || symbol == 'y')
        return true;
    else
        return false;
}
