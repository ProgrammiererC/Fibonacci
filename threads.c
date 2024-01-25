#include "input_data.h"
#include "threads.h"
#include "thread_func.h"
#include <pthread.h>

extern int threads_number; // Number of threads
extern int elements_number; // Number of elements for calculation
extern struct thread_args;

int threads()
{
       pthread_t thread[threads_number];   // Thread IDs
        // Array of argument structures to pass to threads
        struct thread_args arguments[threads_number];
        //Size of data processed by thread
        int data_size = elements_number / threads_number;
        //The remainder of the integer division
        //of the number of elements by the number of threads
        //To determine the number of elements for the last stream
        int rest = elements_number % threads_number;
       if(!rest) {
            for(int i = 0; i < threads_number; i++) { //We iterate and create threads
                arguments[i].index_start = data_size * i; // Starting data index
                arguments[i].index_end = data_size * (i + 1); // End data index
                arguments[i].id = i + 1;
                // Starting a thread
                pthread_create(&thread[i], NULL, thread_func, &arguments[i]);
            }
        }
        else {
            for(int i = 0; i < threads_number; i++){ //We iterate and create threads
                arguments[i].index_start = data_size * i; // Starting data index
                if(i == threads_number - 1)
                    // End data index
                    arguments[i].index_end = data_size * (i + 1) + rest;
                else
                    arguments[i].index_end = data_size * (i + 1);
                arguments[i].id = i + 1;
                // Starting a thread
                pthread_create(&thread[i], NULL, thread_func, &arguments[i]);
            }
        }
        unsigned long long result = 0; // Final result
        for(int i = 0; i < threads_number; i++){
            pthread_join(thread[i], NULL); // Waiting for the thread to complete
            // We process the results from the execution of the thread
            // (summarize the data from each thread)
            result += arguments[i].res;
        }
	return result;
}
