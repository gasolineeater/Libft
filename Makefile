NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_atoi.c \
        ft_strlen.c ft_tolower.c ft_toupper.c ft_strrchr.c ft_strchr.c ft_memset.c \
        ft_strlcat.c ft_strnstr.c ft_memcpy.c ft_memcmp.c ft_memmove.c ft_bzero.c \
        ft_strncmp.c ft_memchr.c ft_strlcpy.c ft_calloc.c ft_strdup.c ft_substr.c \
        ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
        ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
        printf/ft_printf.c printf/printf_utilites.c \
        gnl/get_next_line.c gnl/get_next_line_utils.c
OBJS = ${SRC:.c=.o}

all: ${NAME}

${NAME}: ${OBJS}
	ar rcs $(NAME) ${OBJS}

clean:
	rm -f ${OBJS}
fclean: clean
	rm -f ${NAME}
re : fclean all

.PHONY: all clean fclean re
