NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

SRC = sort_five_nums.c pa_pb.c push_swap.c ra_rb_rr.c sa_sb_ss.c rra_rrb_rrr.c midpoint.c sort_three_nums.c sort_ten_nums_orless.c sort_two_nums.c hundred.c useful_functions.c\

OBJ = ${SRC:.c=.o}

all: ${NAME}

${NAME}: ${OBJ}
	ar r ${NAME} ${OBJ}
	make -C libft bonus
	
clean:
	rm -rf ${OBJ}
	make -C libft clean

fclean:
	rm -rf ${NAME} ${OBJ}
	make -C libft fclean

re: fclean all

.PHONY: fclean all  clean re