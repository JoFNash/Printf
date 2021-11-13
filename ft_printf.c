/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsybassi <hsybassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:53:40 by hsybassi          #+#    #+#             */
/*   Updated: 2021/11/13 21:15:08 by hsybassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// amatilda просит зависимость от мейкфайла!

int	ft_printf(const char	*format, ...)
{
	va_list		list;
	int			length;

	va_start(list, format);
	length = 0;
	while (*(format) != '\0')
	{
		if (*format == '%')
		{
			length += print_this_specifier(&list, *(++format), 1);
		}
		else
		{
			length += ft_putchar_fd_modified(*format, 1);
		}
		format++;
	}
	va_end(list);
	printf("length = %d\n", length);
	return (length);
}
