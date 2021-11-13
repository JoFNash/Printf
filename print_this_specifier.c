#include "ft_printf.h"

// list, *(++format)

int print_this_specifier(va_list *list, char sp, int fd)
{
	int result_len;

	result_len = 0;
	if (sp == 'c')
		result_len = ft_putchar_fd_modified(va_arg(*list, int), fd);
	else if (sp == 's')
		result_len = ft_putstr_fd_modified(va_arg(*list, char *), fd);
	else if (sp == 'd' || sp == 'i')
		result_len = ft_putnbr_fd_modified(va_arg(*list, int), fd);
	else if (sp == 'p')
		result_len = print_p_specifier(va_arg(*list, void *), fd);
	else if (sp == 'u')
		result_len = ft_putnbr_fd_modified_unsigned(va_arg(*list, unsigned int), fd);
	else if (sp == 'x')
		result_len = print_in_hexadecimal(va_arg(*list, unsigned int), fd, 'a');
	else if (sp == 'X')
		result_len = print_in_hexadecimal(va_arg(*list, unsigned int), fd, 'A');
	if (sp == '%')
		result_len = ft_putchar_fd_modified('%', fd);
	return (result_len);
}
