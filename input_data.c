#include "input_data.h"
#include <stdlib.h>
#include <stdbool.h>

int threads_number = 0; // Number of threads
int elements_number = 0; // Number of elements for calculation

// Entering the number of elements of the Fibonacci sequence
void input_number_elements()
{ 
    //Is the correct number of elements entered?
    bool isgood_number_elements = true;   
    do {
        isgood_number_elements = true;
        printf("\nEnter the number of elements of the Fibonacci sequence (no more than 40): ");
        scanf("%d", &elements_number);
        if(elements_number > 40) {
            printf("You entered the wrong number.\n\
Enter a number less than 40 again\n");
            isgood_number_elements = false;
         }
    } while (!isgood_number_elements);
}

// Entering the number of threads
void input_number_threads()
{
    // Is the correct number of threads entered?
    bool isgood_number_threads = true;
    do {
        isgood_number_threads = true;
        printf("Enter the number of threads (no more than %d): ", elements_number);
        scanf("%d", &threads_number);
        if(threads_number > elements_number) {
            printf("You entered the wrong number of threads.\n\
    Enter a number less than %d again\n", elements_number);
            isgood_number_threads = false;
        }
    } while (!isgood_number_threads);
}
