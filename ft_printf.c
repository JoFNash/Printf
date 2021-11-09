/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsybassi <hsybassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:53:40 by hsybassi          #+#    #+#             */
/*   Updated: 2021/11/08 18:33:22 by hsybassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// ("%s %d abcdefg \n %s", str1, 199, str2)

static void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	if (!s)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	long int	n_tmp;

	n_tmp = n;
	if (n_tmp < 0)
	{
		n_tmp = n_tmp * (-1);
		ft_putchar_fd('-', fd);
	}
	if (n_tmp > 9)
		ft_putnbr_fd(n_tmp / 10, fd);
	ft_putchar_fd(n_tmp % 10 + '0', fd);
}

int	ft_printf(const char	*format, ...)
{
	va_list		list;
	char		*s;
	char 		c;
	int			n;
	void		*p;
	unsigned int ui;

	va_start(list, format);
	while (*(format) != '\0')
	{
		if (*format == '%')
		{
			if (*(format + 1) == 'c')
			{
				c = va_arg(list, int);
				ft_putchar_fd(c, 1);
			}
			else if (*(format + 1) == 's')
			{
				s = va_arg(list, char *);
				ft_putstr_fd(s, 1);
			}
			else if (*(format + 1) == 'd' || *(format + 1) == 'i') // правильно?
			{
				n = va_arg(list, int);
				ft_putnbr_fd(n, 1);
			}
			else if (*(format + 1) == 'p')
			{
				p = va_arg(list, void *);
				ft_putstr_fd(p, 1);
			}
			else if (*(format + 1) == 'u')
			{
				ui = va_arg(list, unsigned int);
				ft_putnbr_fd(ui, 1);
			}
			else if (*(format + 1) == 'x')
			{
				ui = print_in_hexadecimal_lowercase(va_arg(list, int), 1);
			}
			else if (*(format + 1) == 'X')
			{
				ui = print_in_hexadecimal_uppercase(va_arg(list, int), 1);
			}
			if (*(format + 1) == '%')
			{
				ft_putchar_fd('%', 1);
			}
			format++;
		}
		else if (*format != '%')
			ft_putchar_fd(*format, 1);
		format++;
	}
	va_end(list);
	return (1);
}
