stack.o: stack.c
	gcc stack.c -c
main.o: main.c
	gcc main.c -c
a.out: main.o stack.o
	gcc main.o stack.o
run: a.out
	./a.out
clean:
	rm -f a.out main.o stack.o
