/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_in_hexadecimal_long.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsybassi <hsybassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 20:10:46 by hsybassi          #+#    #+#             */
/*   Updated: 2021/11/13 20:38:52 by hsybassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_in_hexadecimal_long(unsigned long long int number, int fd, char c)
{
	char					*str_num;
	int						len_number;
	size_t					i;

	i = 0;
	len_number = len_num(number, 16);
	str_num = (char *)malloc(sizeof(char) * (len_number + 1));
	if (!str_num)
		return (-100); // обработать!
	if (number == 0)
	{
		ft_putstr_fd_modified("0", 1);
		return (1);
	}
	while (number != 0)
	{
		if (number % 16 < 10)
			str_num[len_number - 1 - i++] = (number % 16) + '0';
		else
			str_num[len_number - 1 - i++] = (number % 16) - 10 + c;
		number /= 16;
	}
	str_num[len_number] = '\0';
	ft_putstr_fd_modified(str_num, fd);
	return (len_number);
}
