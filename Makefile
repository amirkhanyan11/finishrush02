CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = main.c __strstr__.h checking.h print_2.h print.h
OBJS = $(SRCS:.c=.o)
EXEC = rush-02

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm $(OBJS)
fclean:
	rm -f $(EXEC)