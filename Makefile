# -*- Makefile -*-

NAME	=	quadratic_equation

SRCS	=	src/quadratic_equation.c\
			tests/tests.c

HEADER	=	include

CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror -I$(HEADER) -lm
OBJS	=	$(SRCS:.c=.o)

all		:	$(NAME)

%.o		:	%.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME)	:	$(OBJS)	
	$(CC) -o $@ $^ $(CFLAGS) 

check	:	$(NAME)
	./$(NAME)

clean	:
	rm $(OBJS) $(NAME)

re	:	clean all
