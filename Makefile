NAME = push_swap
B_NAME = checker
CFLAGS = -Wall -Wextra -Werror
HEADERS = ./includes/list.h \
		./includes/get_next_line.h \
		./includes/checker.h \
		./includes/common.h \
		./includes/lis.h \
		./includes/lib.h \

COMMON_SRC = ./src/common/ft_atoi.c \
	  ./src/common/ft_isdigit.c \
	  ./src/common/is_int.c \
	  ./src/common/ft_exit.c \
	  ./src/common/fill_list.c \
	  ./src/common/ft_strcmp.c \
	  ./src/common/is_sorted.c \
	  ./src/common/ft_split.c \
	  ./src/common/ft_substr.c \
	  ./src/common/free_2d.c \
	  ./src/common/sa.c \
	  ./src/common/sb.c \
	  ./src/common/ss.c \
	  ./src/common/ra.c \
	  ./src/common/rb.c \
	  ./src/common/rr.c \
	  ./src/common/rra.c \
	  ./src/common/rrb.c \
	  ./src/common/rrr.c \
	  ./src/common/pa.c \
	  ./src/common/pb.c \
	  ./src/common/is_dup.c 

LIS_SRC = ./src/lis/max_index.c \
	  ./src/lis/min_index.c \
	  ./src/lis/set_array_value.c \
	  ./src/lis/lis_array.c \
	  ./src/lis/list_to_array.c \
	  ./src/lis/set_tmp.c \
	  ./src/lis/ft_lis.c \
	  ./src/lis/free_all.c \
	  ./src/lis/check_and_set.c 

LIST_SRC = ./src/list/add_front.c \
	  ./src/list/node_new.c \
	  ./src/list/add_back.c \
	  ./src/list/list_new.c \
	  ./src/list/list_pop.c \
	  ./src/list/list_shift.c \
	  ./src/list/set_list_b.c \
	  ./src/list/is_exist.c \
	  ./src/list/set_positions.c \
	  ./src/list/inst_to_top.c \
	  ./src/list/inst_to_pos.c \
	  ./src/list/max_list_pos.c \
	  ./src/list/min_list_pos.c \
	  ./src/list/element.c \
	  ./src/list/best_element.c \
	  ./src/list/move_be.c \
	  ./src/list/sort_three.c \
	  ./src/list/sort_five.c \
	  ./src/list/free_exit.c \
	  ./src/list/list_del.c \
	  ./src/list/map_values.c \
	  ./src/list/ft_set_list_b.c \
	  ./src/list/ft_push_swap.c \
	  ./src/list/set_map.c \
	  ./src/list/move_best_element.c \
	  ./src/list/min_to_top.c \
	  ./src/lib/ft_abs.c \
	  ./src/lib/ft_min.c \
	  ./src/lib/ft_putstr.c \
	  ./src/lib/ft_i_indexof.c \
	  ./src/lib/ft_bubbelsort.c \
	  ./src/lib/ft_swap.c
	  

SRC =  push_swap.c


B_SRC = ./src/gnl/get_next_line.c \
	  ./src/gnl/get_next_line_utils.c \
	  ./src/checker/is_empty.c \
	  ./src/checker/is_action.c \
	  ./src/checker/apply.c \
	  checker.c 


OBJ = $(LIST_SRC:.c=.o) $(COMMON_SRC:.c=.o)  $(LIS_SRC:.c=.o)  $(SRC:.c=.o)

B_OBJ = $(B_SRC:.c=.o) $(COMMON_SRC:.c=.o) $(LIST_SRC:.c=.o) $(LIS_SRC:.c=.o)

INCLUDES_PATH = -I./includes/

all:  $(NAME)

bonus: $(B_NAME)

%.o: %.c $(HEADERS)
	gcc $(CFLAGS) $(INCLUDES_PATH) -o $@ -c $<

$(NAME): $(OBJ)
	gcc  -o $(NAME)  $^ $(INCLUDES_PATH)

$(B_NAME): $(B_OBJ)
	gcc -o $(B_NAME) $^ $(INCLUDES_PATH)

clean:
	rm -f $(OBJ) push_swap.o
	rm -f $(B_OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f $(B_NAME)
re: fclean all
