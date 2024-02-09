CC = gcc
CFLAGS = -o solvequad
LDFLAGS = -lm

OBJS = main.o linear.o quad.o real.o complex.o

a.out: $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) $(LDFLAGS)

clean:
		rm $(OBJS) solvequad