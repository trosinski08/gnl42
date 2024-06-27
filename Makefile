= gnl
CC = cc
CFLAGS = -Wall -Wextra -Werror
BUFFER_SIZE = 32
LIBFT = ./libft
HEADERS = -I ./libft -I ./include
LIBS = -L $(LIBFT) -lft
SRC = ./mandatory/get_next_line.c
# main.c
BNS = ./bonus/get_next_line_bonus.c
OBJS = $(SRC:.c=.o)
BNO = $(BNS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(MAKE) -sC $(LIBFT)
	$(CC) $(CFLAGS) $(HEADERS) $(OBJS) $(LIBS) -o $(NAME)

bonus: $(BNO)
	$(MAKE) -sC $(LIBFT)
	$(CC) $(CFLAGS) $(HEADERS) $(BNO) $(LIBS) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) $(HEADERS) -c $< -o $@

clean:
	$(MAKE) -sC $(LIBFT) clean
	rm -f $(OBJS) $(BNO)

fclean: clean
	$(MAKE) -sC $(LIBFT) fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
