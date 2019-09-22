NAME = Power
NAME2 = Crible

SRC = srcsPower/main.c srcsPower/ft_iterative_power.c
SRC2 = srcsCrible/main.c srcsCrible/crible.c
all: $(NAME) | $(NAME2)

$(NAME):
	gcc -Wall -Wextra -Werror  -o $(NAME) $(SRC)
$(NAME2):
	gcc -Wall -Wextra -Werror  -o $(NAME2) $(SRC2)
clean:
	/bin/rm -f
fclean: clean
	/bin/rm -f $(NAME) $(NAME2)
re: fclean all