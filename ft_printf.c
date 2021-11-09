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

// ft_printf("%s %d abcdefg \n %s", str1, 199, str2)

int	ft_printf(const char	*format, ...)
{
	va_list		list;
	char		*s;
	char 		c;
	int			n;
	void		*p;
	unsigned int ui;
	int			length;

	va_start(list, format);
	while (*(format) != '\0')
	{
		if (*format == '%') // на этом моменте в принципе можно перенаправить в другую функцию
		{
			len = print_this_specifier(list, *(++format));
		}
		else if (*format != '%')
			ft_putchar_fd(*format, 1);
		format++;
	}
	va_end(list);
	return (1);
}
