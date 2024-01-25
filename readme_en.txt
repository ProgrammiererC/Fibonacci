The task for the project is in the file "Задание.doc ".

The Fibonacci application is written in the C programming language and demonstrates the use of the following language features:
1. Modularity (functions are implemented in separate files).
2. Working with files.
3. Multithreading.
4. Creating and using a dynamically linked library.
5. Using a Makefile to build a project.
6. Build the project for Windows and Linux.

The Fibonacci application does the following work:
1. Calculation of the N elements of the Fibonacci numerical sequence (hereinafter referred to as the Fibonacci numbers).
2. Writing Fibonacci numbers to a binary file.
3. Reading Fibonacci numbers from a file in several streams.
4. Output to the standard output stream of Fibonacci numbers indicating the number of the stream.
5. Calculation of the sum of Fibonacci numbers and output to the standard output stream.
6. Conducting a dialogue with the user.

There are the following restrictions:
1. The number of Fibonacci sequence numbers is limited to the number 40, since already at N = 45 there
is an overflow in the sum, although the maximum possible number is selected (type unsigned long long).
2. The number of threads cannot be greater than the number of specified elements of the Fibonacci sequence.

There are the following possibilities:
1.The ability to manually enter the number of elements of the sequence F. and the number of threads (input control of input data).
2.The ability to execute the program repeatedly or terminate it at the user's request.

Attention!
Before building and launching the application, it is recommended to familiarize yourself with the file "building_ru.txt" ("building_en.txt").