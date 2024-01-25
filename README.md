# Fibonacci

Задание на проект находится в файле "Задание.doc".

Приложение "Fibonacci" написано на языке программирования Си и демонстрирует использование следующих возможностей языка:
1. Модульность (функции реализованы в отдельных файлах).
2. Работу с файлами.
3. Многопоточность.
4. Создание и использование динамически подключаемой библиотеки.
5. Использование Makefile для сборки проекта.
6. Сборка проекта под ОС Windows и Linux.

Приложение "Fibonacci" выполняет следующую работу:
1. Вычисление N элементов числовой последовательности Фибоначчи (далее - числа Фибоначчи).
2. Запись чисел Фибоначчи в бинарный файл.
3. Чтение из файла чисел Фиббоначи несколькими потоками.
4. Вывод в стандартный поток вывода чисел Фибоначчи с указанием номера потока.
5. Вычисление суммы чисел Фибоначчи и вывод в стандартный поток вывода.
6. Ведение диалога с пользователем.

Существуют следующие ограничения:
1. Количество чисел последовательности Фибоначчи ограничено числом 40, так как уже при N = 45 возникает 
переполнение по сумме, хотя выбрано максимально возможное число (тип unsigned long long).
2. Количество потоков не может быть больше количества заданных элементов последовательности Фибоначчи.

Существуют следующие возможности:
1.Возможность ввода вручную количества элементов последовательности Ф. и количества потоков (контроль ввода вводимых данных).
2.Возможность выполнять программу повторно или завершить выполнение по желанию пользователя.

ВНИМАНИЕ!
Перед сборкой и запуском приложения рекомендуется ознакомиться с файлом "building_ru.txt" ("building_en.txt").
----------------------------------------------------------------------------------------------------------------------------------
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
