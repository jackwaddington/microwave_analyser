NAME		=	microwave_analyser

CC			=	cc
CFLAGS		=	-Wall -Wextra -Werror
RM			=	rm -rf

SRCS 		=	main.c \
				init.c \
				printers.c \
				waddington_report.c


HEADER = ./inc/header.h

MANPATH = $(addprefix ./src/, $(SRCS))

OBJS		=	$(MANPATH:%.c=%.o)

all:			$(NAME)

$(NAME):		$(OBJS)
			$(CC) $(CFLAGS) $(OBJS) -lm -o $(NAME)

%.o:%.c
			@$(CC) $(CFLAGS) -c $< -o $@

clean:
			$(RM) $(OBJS)

fclean:			clean
			$(RM) $(NAME)

re:			fclean all

debug:		CFLAGS += -g
debug:		re

.PHONY:		all clean fclean re debug
