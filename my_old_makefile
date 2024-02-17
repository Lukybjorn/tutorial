CC = gcc
CFLAGS = -g

objects := main.o

program: $(objects)
	gcc main.o -o program

$(objects): %.o: %.c


clean:
	rm -f *.o program
