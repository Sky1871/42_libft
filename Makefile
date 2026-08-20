NAME		= libft.a
SRCS		= ${wildcard *.c}
OBJS		= ${SRCS:.c=.o}
CC		= cc
AR		= ar
ARFLAGS		= rcs
CFLAGS		= -Wall -Wextra -Werror
CPPFLAGS	= -MMD -MP
RM		= rm -f

all: ${NAME}

%.o: %.c
	${CC} ${CFLAGS} ${CPPFLAGS} -c $< -o $@

${NAME}: ${OBJS}
	${AR} ${ARFLAGS} $@ ${OBJS}

clean:
	${RM} ${OBJS} ${OBJS:.o=.d}

fclean : clean
	${RM} ${NAME}

re: fclean all

-include ${OBJS:.o=.d}

.PHONY: all clean fclean re
