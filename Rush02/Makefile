NAME 	= rush-02
SRCS	= main.c base.c error.c to_strnum.c read_dict.c
OBJS	= $(SRCS:%.c=%.o)
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror -I./includes
INCLUDE = -I./includes

all: $(NAME)

$(NAME): $(OBJS)
		$(CC) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all