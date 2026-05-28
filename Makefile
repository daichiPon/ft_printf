CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = libft/ft_putchar.c libft/ft_puthex_big.c libft/ft_puthex_lit.c libft/ft_putnbr_u.c libft/ft_putnbr.c libft/ft_putstr.c libft/ft_strchr.c\
		ft_printf_utils.c ft_printf.c

OBJS = $(SRCS:.c=.o)

NAME = libftprintf.a
 
all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS) 

%.o: %.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@ 

clean:
	rm -f $(OBJS) 

fclean: clean
	rm -f $(NAME) 

re:
	$(MAKE) fclean
	$(MAKE) all

.PHONY: all clean fclean re
