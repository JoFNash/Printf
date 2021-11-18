/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p_specifier.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsybassi <hsybassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 15:39:14 by hsybassi          #+#    #+#             */
/*   Updated: 2021/11/18 16:10:50 by hsybassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_p_specifier(void *p, int fd)
{
	int					len_number;
	int					tmp;
	unsigned long long	num;

	len_number = 0;
	num = (unsigned long long) p;
	write(fd, "0x", 2);
	len_number += 2;
	tmp = print_in_hexadecimal_long(num, fd, 'a');
	if (tmp == -1)
		return (-1);
	else
		len_number += tmp;
	return (len_number);
}
