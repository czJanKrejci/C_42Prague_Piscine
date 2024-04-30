NAME = rush_02
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRC = free.c help_functions.c main.c reading1.c reading2.c write_numbers.c

all: $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $^

$(NAME): $(SRC:.c=.o)
	@echo "$(BOLD)[ 🙊 Compiling shit together... ]$(NC)"
	@$(CC) $(CFLAGS) -o $@ $^
	@echo "$(BOLD)[ 🪄 Program ready! ]$(NC)"


clean:
	rm -f $(SRC:.c=.o)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)