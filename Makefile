# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yyuskiv <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/25 14:46:01 by yyuskiv           #+#    #+#              #
#    Updated: 2025/11/25 15:27:28 by yyuskiv          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

LIST = ft_atoi.c ft_isprint.c ft_putchar_fd.c ft_striteri.c ft_strnstr.c \
       ft_bzero.c ft_itoa.c ft_putendl_fd.c ft_strjoin.c ft_strrchr.c \
       ft_calloc.c ft_memchr.c ft_putnbr_fd.c ft_strlcat.c ft_strtrim.c \
       ft_isalnum.c ft_memcmp.c ft_putstr_fd.c ft_strlcpy.c ft_substr.c \
       ft_isalpha.c ft_memcpy.c ft_split.c ft_strlen.c ft_tolower.c \
       ft_isascii.c ft_memmove.c ft_strchr.c ft_strmap.c ft_toupper.c \
       ft_isdigit.c ft_memset.c ft_strdup.c ft_strncmp.c

OBJ = $(patsubst %.c, %.o, $(LIST))

D_FILES = $(patsubst %.c, %.d, $(LIST))

OPTFLAGS = -O2

FLAGS = -Wall -Wextra -Werror

# Default target
all: $(NAME)

# Rule to create the static library
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

# Rule to compile .c files to .o files and generate .d dependency files
%.o: %.c
	gcc $(FLAGS) $(OPTFLAGS) -c $< -o $@ -MD

# Include dependency files
-include $(D_FILES)

# Clean object files and dependency files
clean:
	rm -f $(OBJ) $(D_FILES)

# Full clean (remove the static library too)
fclean: clean
	rm -f $(NAME)

# Rebuild everything from scratch
re: fclean all

.PHONY: all clean fclean re
