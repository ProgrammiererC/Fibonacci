#ifndef _THREAD_FUNC_
#define _THREAD_FUNC_

struct thread_args{ // Declaring the structure to be passed to the thread
    int id; // Thread number
    int index_start; // Starting data index
    int index_end; // End data index
    unsigned long long res; // Summation result
};

// Thread function. Performs data reading from a file and calculations
// (sums the elements of the Fibonacci sequence)

void *thread_func(void *args);

#endif	
