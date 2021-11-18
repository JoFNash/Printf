/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_in_hexadecimal.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsybassi <hsybassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 20:22:26 by hsybassi          #+#    #+#             */
/*   Updated: 2021/11/18 17:18:53 by hsybassi         ###   ########.fr       */
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

char	*get_str_num(unsigned long int number, \
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
		return (-1);
	if (ui_num == 0)
	{
		ft_memcpy(str_num, "0", 1);
		ft_putstr_fd_modified("0", fd);
		free(str_num);
		return (1);
	}
	str_num = get_str_num(ui_num, str_num, len_number, c);
	ft_putstr_fd_modified(str_num, fd);
	free(str_num);
	return (len_number);
}
