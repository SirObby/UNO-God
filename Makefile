CC=  gcc  # gcc or g++

CFLAGS=-g -Wall 
LDFLAGS=
LIBS=-lm

# subdirectory for objects
O=obj

# not too sophisticated dependency
OBJS=				\
		$(O)/main.o	\
		$(O)/game.o	

all:	 $(O)/uno

clean:
	rm -f *.o *~ *.flc
	rm -f ${O}/*

$(O)/uno:	$(OBJS)
	$(CC) $(CFLAGS) $(LDFLAGS) $(OBJS) \
	-o $(O)/uno $(LIBS)

$(O)/%.o:	src/%.c
	$(CC) $(CFLAGS) -c $< -o $@
