NAME = push_swap
B_NAME = checker
CFLAGS = -Wall -Wextra -Werror
HEADERS = ./includes/list.h \
		./includes/get_next_line.h \
		./includes/checker.h \
		./includes/common.h \
		./includes/lis.h 

SRC = ./src/list/add_front.c \
	  ./src/list/node_new.c \
	  ./src/list/add_back.c \
	  ./src/list/list_new.c \
	  ./src/list/ft_swap.c \
	  ./src/list/sa.c \
	  ./src/list/sb.c \
	  ./src/list/ss.c \
	  ./src/list/ra.c \
	  ./src/list/rb.c \
	  ./src/list/rr.c \
	  ./src/list/rra.c \
	  ./src/list/rrb.c \
	  ./src/list/rrr.c \
	  ./src/list/pa.c \
	  ./src/list/pb.c \
	  ./src/lis/max_index.c \
	  ./src/lis/set_array_value.c \
	  ./src/lis/lis_array.c \
	  ./src/lis/ft_lis.c \
	  ./src/lis/check_and_set.c \
	  ./src/lis/free_all.c \
	  ./src/list/list_pop.c \
	  ./src/list/list_shift.c \
	  ./src/common/ft_atoi.c \
	  ./src/common/ft_isdigit.c \
	  ./src/common/is_int.c \
	  ./src/common/ft_putstr.c \
	  ./src/common/ft_exit.c \
	  ./src/common/fill_list.c \
	  ./src/common/ft_strcmp.c \
	  ./src/common/is_dup.c 


B_SRC = ./src/gnl/get_next_line.c \
	  ./src/gnl/get_next_line_utils.c \
	  ./src/checker/is_sorted.c \
	  ./src/checker/is_empty.c \
	  ./src/checker/is_action.c \
	  ./src/checker/apply.c

OBJ = $(SRC:.c=.o)

B_OBJ = $(B_SRC:.c=.o) $(OBJ) 

INCLUDES_PATH = -I./includes/

all: push_swap.o $(NAME)

bonus: checker.o $(B_NAME)

%.o: %.c $(HEADERS)
	gcc $(CFLAGS) $(INCLUDES_PATH) -o $@ -c $<

$(NAME): $(OBJ)
	gcc  -o $(NAME) push_swap.c $^ $(INCLUDES_PATH)

$(B_NAME): $(B_OBJ)
	gcc  -o $(B_NAME) checker.c $^ $(INCLUDES_PATH)

clean:
	rm -f $(OBJ) push_swap.o
	rm -f $(B_OBJ)	checker.o

fclean: clean
	rm -f $(NAME)
	rm -f $(B_NAME)
re: fclean all
