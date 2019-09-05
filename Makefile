CC		= gcc
CFLAGS		= -g -Wall
LFLAGS		= -Lauthenticate-printer-library -lauthenticateprinter
#LFLAGS		= -lauthenticateprinter
SRC		= authenticate-printer.c
OBJ		= $(SRC:.c=.o)
PROGNAME	= authenticate-printer


$(PROGNAME): $(OBJ)
	$(CC) $(LFLAGS) -o $@ $^


%.o: %.c
	$(CC) $(CFLAGS) -c $<

clean: 
	rm -f $(PROGNAME) *.o

