# Compiler
CC = cc

#Directories
SRC_DIR = src
OBJ_DIR = obj
LIBFT_DIR = libft
VPATH = src:libft:includes

# Compiler flags
CFLAGS = -Wall -Wextra -Werror -g #-fsanitize=address
INCFLAGS = -Iincludes -Ilibft/includes

# Main project files
SRC_FILES = push_swap.c main.c parsing.c utils.c radix.c\
			ss.c rr.c rrr.c pp.c sorting.c utils2.c\

# Object files
OBJ_FILES = $(SRC_FILES:.c=.o)

# Executable
NAME = push_swap

# Libft
LIBFT_MAKEFILE = $(LIBFT_DIR)/Makefile
LIBFT = $(LIBFT_DIR)/libft.a
LIBFT_INC = -I$(LIBFT_DIR)/includes
LIBFT_LINK = -L$(LIBFT_DIR) -lft

all: $(NAME)
	@echo "\033[1;32m[✔] GOOD HEAVENS! LOOK AT THE EXECUTABLE!\033[0m"

%.o: %.c #this part has been changed
	$(CC) $(CFLAGS) $(INCFLAGS) $(LIBFT_INC) -g -c $< -o $@

$(NAME): $(OBJ_FILES) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJ_FILES) $(LIBFT_LINK) -o $(NAME)
	@echo "\033[1;33m[✔] Compiling push_swap...\033[0m"

$(LIBFT): $(LIBFT_MAKEFILE)
	$(MAKE) -C $(LIBFT_DIR)
	@echo "\033[1;33m[✔] Linking to libft Makefile...\033[0m"

$(LIBFT_MAKEFILE):
	@echo "Creating symbolic link for libft Makefile..."
	ln -s $(CURDIR)/$(LIBFT_MAKEFILE) $(LIBFT_MAKEFILE)

clean:
	$(MAKE) -C $(LIBFT_DIR) clean
	@echo "\033[1;33m[X] Cleaning...\033[0m"
	rm -f $(OBJ_FILES)

fclean: clean
	$(MAKE) -C $(LIBFT_DIR) fclean
	@echo "\033[1;31m[XXX] Cleaning it GOOOOOOD...\033[0m"
	rm -f $(NAME)

re: fclean all

# Phony targets
.PHONY: all clean fclean