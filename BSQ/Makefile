# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shusakai <shusakai@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/25 16:54:43 by knagase           #+#    #+#              #
#    Updated: 2022/08/31 10:35:02 by shusakai         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PROGRAM = bsq
OBJS = main.o read_map.o put_map_square.o search.o read_file.o
SRCDIR = ./
HEDDIR = ./

CC = gcc
CFLAGS = -Wall -Wextra -Werror

.PHONY: all
all: $(PROGRAM)

$(PROGRAM): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(PROGRAM)

main.o: main.c
	$(CC) $(CFLAGS) -c $(SRCDIR)$< -o $(SRCDIR)/$@

read_map.o: read_map.c
	$(CC) $(CFLAGS) -c $(SRCDIR)$< -o $(SRCDIR)/$@
	
put_map_square.o: put_map_square.c
	$(CC) $(CFLAGS) -c $(SRCDIR)$< -o $(SRCDIR)/$@
	
search.o: search.c
	$(CC) $(CFLAGS) -c $(SRCDIR)$< -o $(SRCDIR)/$@

read_file.o: read_file.c
	$(CC) $(CFLAGS) -c $(SRCDIR)$< -o $(SRCDIR)/$@	

.PHONY: clean
clean:
	$(RM) $(OBJS)

.PHONY: fclean
fclean:
	$(RM) $(PROGRAM) $(OBJS)

.PHONY: re
re:
	make fclean
	make all

$(PROGRAM): $(HEDDIR)/map.h
