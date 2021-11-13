/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_in_hexadecimal.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsybassi <hsybassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 20:22:26 by hsybassi          #+#    #+#             */
/*   Updated: 2021/11/13 21:05:26 by hsybassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_in_hexadecimal(unsigned int number, int fd, char c)
{
	unsigned long int	ui_num;
	char				*str_num;
	int					len_number;
	size_t				i;

	ui_num = (unsigned long int) number;
	i = 0;
	len_number = len_num(ui_num, 16);
	str_num = (char *)malloc(sizeof(char) * (len_number + 1));
	if (!str_num)
		return (-100); // обработать!
	if (ui_num == 0)
	{
		ft_putstr_fd_modified("0\0", 2);
		return (1);
	}
	while (ui_num != 0)
	{
		if (ui_num % 16 < 10)
			str_num[len_number - 1 - i++] = (ui_num % 16) + '0';
		else
			str_num[len_number - 1 - i++] = (ui_num % 16) - 10 + c;
		ui_num /= 16;
	}
	str_num[len_number] = '\0';
	ft_putstr_fd_modified(str_num, fd);
	return (len_number);
}
