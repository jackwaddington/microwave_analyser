NAME		=	microwave_analyser

CC			=	cc
CFLAGS		=	-Wall -Wextra -Werror
RM			=	rm -rf

SRCS 		=	main.c \
				init.c \
				printers.c


HEADER = ./inc/ray_tracer.h

MANPATH = $(addprefix ./srcs/, $(SRCS))

OBJS		=	$(MANPATH:%.c=%.o)

all:			$(NAME)

$(NAME):		$(MLXLIB) $(OBJS)
			$(CC) $(CFLAGS) $(OBJS) -lm $(MLXLIB) $(MLXFLAGS) $(MLXHEADERS) -o $(NAME)
# $(NAME):		$(OBJS)
#			$(CC) $(CFLAGS) $(OBJS) -lm -o $(NAME)

%.o:%.c
			@$(CC) $(CFLAGS) -c $< -o $@		

$(MLXLIB):
			cmake $(MLXDIR) -B $(MLXDIR)build && make -C $(MLXDIR)build -j4

clean:
			$(RM) $(OBJS)

fclean:			clean
			$(RM) $(NAME)

re:			fclean all

debug:		CFLAGS += -g
debug:		re

.PHONY:		all clean fclean re debug
