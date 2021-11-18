/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_in_hexadecimal_long.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsybassi <hsybassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 20:10:46 by hsybassi          #+#    #+#             */
/*   Updated: 2021/11/18 17:33:59 by hsybassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	len_num_long(unsigned long long int num, int base)
{
	int		len;

	len = 0;
	if (num == 0)
		return (1);
	if (num < 0)
		len++;
	while (num)
	{
		num = num / base;
		len++;
	}
	return (len);
}

char	*get_str_num_long(unsigned long long number, \
				char *str_num, int len_number, char c)
{
	size_t	i;

	i = 0;
	while (number != 0)
	{
		if (number % 16 < 10)
			str_num[len_number - 1 - i++] = (number % 16) + '0';
		else
			str_num[len_number - 1 - i++] = (number % 16) - 10 + c;
		number /= 16;
	}
	str_num[len_number] = '\0';
	return (str_num);
}

int	print_in_hexadecimal_long(unsigned long long number, int fd, char c)
{
	char					*str_num;
	int						len_number;
	size_t					i;

	i = 0;
	len_number = len_num_long(number, 16);
	str_num = (char *)malloc(sizeof(char) * (len_number + 1));
	if (!str_num)
		return (-1);
	if (number == 0)
	{
		ft_putstr_fd_modified("0", fd);
		free(str_num);
		return (1);
	}
	str_num = get_str_num_long(number, str_num, len_number, c);
	ft_putstr_fd_modified(str_num, fd);
	free(str_num);
	return (len_number);
}
