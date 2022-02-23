NAME = push_swap
CFLAGS = -Wall -Wextra -Werror
HEADERS = ./includes/list.h
SRC = ./src/list/add_front.c \
	  ./src/list/node_new.c \
	  ./src/list/add_after.c \
	  ./src/list/add_back.c \
	  ./src/list/list_new.c \
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
