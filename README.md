# OSMU
 1. Написать программу нахождения массива K последовательных значений
функции y[i]=sin(2*PI*i/N) ( i=0,1,2...K-1 ) с использованием ряда
Тейлора. Пользователь задаёт значения K, N и количество n членов ряда
Тейлора. Для расчета
каждого члена ряда Тейлора запускается
отдельный поток. Каждый поток выводит на экран свой id и рассчитанное
значение ряда. Головной процесс суммирует все члены ряда Тейлора, и
полученное значение y[i] записывает в файл.
2. Написать программу синхронизации двух каталогов, например, Dir1 и
Dir2. Пользователь задаёт имена Dir1 и Dir2. В результате работы
программы файлы, имеющиеся в Dir1, но отсутствующие в Dir2, должны
скопироваться в Dir2 вместе с правами доступа. Процедуры копирования 
должны запускаться в отдельном процессе для каждого копируемого
файла. Каждый процесс выводит на экран свой pid, имя копируемого
файла и число скопированных байт. Число одновременно работающих
процессов не должно превышать N (вводится пользователем).
3. Написать программу поиска одинаковых по их содержимому файлов в
двух каталогов, например, Dir1 и Dir2. Пользователь задаёт имена Dir1 и
Dir2. В результате работы программы файлы, имеющиеся в Dir1,
сравниваются с файлами в Dir2 по их содержимому. Процедуры
сравнения должны запускаться в отдельном процессе для каждой пары
сравниваемых файлов. Каждый процесс выводит на экран свой pid, имя
файла, общее число просмотренных байт и результаты сравнения. Число
одновременно работающих процессов не должно превышать N (вводится
пользователем).
4. Написать программу поиска заданной пользователем комбинации из m
байт (m < 255) во всех файлах текущего каталога. Пользователь задаёт
имя каталога. Главный процесс открывает каталог и запускает для
каждого файла каталога отдельный процесс поиска заданной комбинации
из m байт. Каждый процесс выводит на экран свой pid, имя файла, общее
число просмотренных байт и результаты поиска. Число одновременно
работающих процессов не должно превышать N (вводится
пользователем).
5. Разработать
программу
«интерпретатор
команд»,
которая
воспринимает команды, вводимые с клавиатуры, (например, ls -l
/bin/bash) и осуществляет их корректное выполнение. Для этого каждая
вводимая команда должна выполняться в отдельном
процессе с
использованием вызова exec(). Предусмотреть контроль ошибок.
6. Создать дерево процессов по индивидуальному заданию. Каждый
процесс постоянно, через время t , выводит на экран следующую
информацию:
номер процесса/потока pid ppid текущее время (мсек).
Время t =((номер процесса/потока по дереву)*200 (мсек).
