/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsybassi <hsybassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:53:40 by hsybassi          #+#    #+#             */
/*   Updated: 2021/11/08 17:31:17 by hsybassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// ("%s %d abcdefg \n %s", str1, 199, str2)

static void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

int	ft_printf(const char	*format, ...)
{
	va_list	ap;

	va_start(ap, format);
	while (*format)
	{
		if () ////
		format++;
	}
}
