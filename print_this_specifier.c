#include "ft_printf.h"

// list, *(++format)

int print_this_specifier(va_list *list, char sp)
{
    int result_len;

    result_len = 0;
    if (sp == 'c')
        result_len = ft_putchar_fd_modified(va_arg(*list, int), 1);
    else if (sp == 's')
        result_len = ft_putstr_fd_modified(va_arg(*list, char *), 1);
    else if (sp == 'd' || sp == 'i')
        result_len = ft_putnbr_fd_modified(va_arg(*list, int), 1);
    else if (sp == 'p')
        result_len = ft_putstr_fd_modified(va_arg(*list, void *), 1);
    else if (sp == 'u')
        result_len = ft_putnbr_fd_modified(va_arg(*list, unsigned int), 1);
    else if (sp == 'x')
        result_len = print_in_hexadecimal(va_arg(*list, int), 1, 'a');
    else if (sp == 'X')
        result_len = print_in_hexadecimal(va_arg(*list, int), 1, 'A');
    if (sp == '%')
        result_len = ft_putchar_fd_modified('%', 1);
    return (result_len);
}