Tail.o: Tail.c
	gcc Tail.c -c

main.o: main.c
	gcc main.c -c

a.out: main.o Tail.o
	gcc main.o Tail.o

run: a.out
	./a.out

clean: 
	rm -f a.out main.o Tail.o
