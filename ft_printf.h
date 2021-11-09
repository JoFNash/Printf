/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsybassi <hsybassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 16:32:52 by hsybassi          #+#    #+#             */
/*   Updated: 2021/11/08 16:52:30 by hsybassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int     ft_printf(const char	*format, ...);
int     print_this_specifier(va_list list, char sp);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd_modified(char *s, int fd);
int     ft_putnbr_fd_modified(int n, int fd);

#endif