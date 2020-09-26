CC = gcc
CFLAGS = -lpthread
diningp: diningp.c 
	$(CC) -o diningp diningp.c $(CFLAGS)
