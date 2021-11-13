HEADER		= ft_printf.h

NAME		= libftprintf.a

SRCS 		= ft_printf.c\
	ft_putchar_fd_modified.c\
	ft_putnbr_fd_modified.c\
    ft_putstr_fd_modified.c\
    print_in_hexadecimal.c\
    print_this_specifier.c\
	print_p_specifier.c\
	ft_strlen.c\
	print_in_hexadecimal_long.c\
	len_num.c\

OBJS 		= $(SRCS:.c=.o)

CC 			= gcc

RM 			= rm -rf

CFLAGS 		= -Wall -Wextra -Werror

%.o : %.c	$(HEADER) 
			$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME): 	$(OBJS) $(HEADER)
			ar rc $(NAME) $(OBJS)

all:		$(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

bonus:		$(OBJS) $(HEADER)
			ar rc $(NAME) $(OBJS)

re:			fclean all

.PHONY:		all clean fclean re
