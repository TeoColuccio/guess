CFLAGS=-Wall --ansi

guess: main.o guess.o random.o
	gcc main.o guess.o random.o -o guess

main.o: main.c guess.h
guess.o: guess.c guess.h random.h
random.o: random.h

clean:
	rm -f *.o
