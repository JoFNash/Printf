/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_p_specifier.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsybassi <hsybassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 15:39:14 by hsybassi          #+#    #+#             */
/*   Updated: 2021/11/17 20:31:05 by hsybassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_p_specifier(void *p, int fd)
{
	int					len_number;
	unsigned long long	num;

	len_number = 0;
	num = (unsigned long long) p;
	//printf("num = %lu\n", num);
	write(fd, "0x", 2);
	len_number += 2;
	len_number += print_in_hexadecimal_long(p, fd, 'a');
	return (len_number);
}
