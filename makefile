main:main.o doit.o
	gcc -o main main.o doit.o -lpthread
doit.o:doit.c
	gcc -c doit.c -o doit.o
main.o:main.c http.h
	gcc -c main.c -o main.o -lpthread
.PHONY:clean
clean:
	rm *.o main