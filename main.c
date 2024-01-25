#include "fibonacci.h"
#include "write_file.h"
#include "thread_func.h"
#include "threads.h"
#include "print_work.h"
#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <stdbool.h>
     
extern int threads_number; // Number of threads
extern int elements_number; // Number of elements for calculation
extern struct thread_args;

int main()
{
    bool iswork; // Run the program again?
    do {
        input_number_elements();
        input_number_threads();

        write("fib.bin", elements_number);
        printf("The first %d numbers of the Fibonacci sequence\ 
 and their sum\n", elements_number);
	int result = threads();
	iswork = print_work(result);
    } while(iswork);
}
