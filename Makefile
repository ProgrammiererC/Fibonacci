GCC=i686-w64-mingw32-gcc  #32-bit
all: exe

exe:	fibonacci.h input_data.h write_file.h thread_func.h threads.h print_work.h main.c lib
	$(GCC) -c -o input.o input_data.c
	$(GCC) -c -o write.o write_file.c
	$(GCC) -c -o thread.o thread_func.c       
	$(GCC) -c -o threads.o threads.c  
	$(GCC) -c -o print.o print_work.c
	$(GCC) input.o write.o thread.o threads.o print.o main.c -L. -I. libFibonacci.dll -pthread -fPIC -o fibonacci.exe
	wine fibonacci.exe

lib:	fibonacci.h fibonacci.c
	$(GCC) -o libFibonacci.dll -shared -fPIC fibonacci.c

clean:
	-rm fibonacci.exe libFibonacci.dll 2>/dev/null

