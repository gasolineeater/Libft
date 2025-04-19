NAME = libftprintf.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

PRINTF_PATH = $(PRINTF_PATH)printf.a

SRC = ft_printf.c printf_utilites.c
OBJS = ${SRC:.c=.o}
all: ${LIBFT} ${PRINTF} ${NAME} ${EXEC}

${PRINTF}:
	make -C ${PRINTF_PATH}

${NAME}: ${OBJS}
	ar rcs $(NAME) ${OBJS}

clean:
	make -C ${PRINTF_PATH} clean
	rm -f ${OBJS}

fclean: clean
	make -C ${PRINTF_PATH} fclean
	rm -f ${NAME}
	rm -f ${EXEC}

re: fclean all

.PHONY: all clean fclean re