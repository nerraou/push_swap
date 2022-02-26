NAME = push_swap
CFLAGS = -Wall -Wextra -Werror
HEADERS = ./includes/list.h ./includes/get_next_line.h ./includes/checker.h
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
	  ./src/list/list_pop.c \
	  ./src/list/list_shift.c \
	  ./src/gnl/get_next_line.c \
	  ./src/gnl/get_next_line_utils.c \
	  ./src/checker/ft_atoi.c \
	  ./src/checker/ft_isdigit.c \
	  ./src/checker/is_int.c \
	  ./src/checker/is_sorted.c \
	  ./src/checker/is_empty.c \
	  ./src/checker/is_action.c \
	  ./src/checker/ft_strcmp.c \
	  main.c

OBJ = $(SRC:.c=.o)
INCLUDES_PATH = -I./includes/

all: $(NAME)

%.o: %.c $(HEADERS)
	gcc $(CFLAGS) $(INCLUDES_PATH) -o $@ -c $<

$(NAME): $(OBJ)
	gcc  -o $(NAME) $^ $(INCLUDES_PATH)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
