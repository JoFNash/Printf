/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_in_hexadecimal.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsybassi <hsybassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 20:22:26 by hsybassi          #+#    #+#             */
/*   Updated: 2021/11/17 17:31:16 by hsybassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char			*copy_dest;
	const unsigned char		*copy_src;

	if (!dest && !src)
		return (NULL);
	copy_dest = (unsigned char *)dest;
	copy_src = (const unsigned char *)src;
	while (n--)
	{
		*copy_dest = *copy_src;
		copy_src++;
		copy_dest++;
	}
	return (dest);
}

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
		return (-1); // обработать!
	if (ui_num == 0)
	{
		ft_memcpy(str_num, "0", 1);
		ft_putstr_fd_modified("0", fd);
		free(str_num);
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
	free(str_num);
	return (len_number);
}
