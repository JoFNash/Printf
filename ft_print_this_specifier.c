#include "ft_printf.h"

// list, *(++format)

int print_this_specifier(va_list list, char sp)
{
    int result_len;

    if (sp == 'c')
        result_len = ft_putchar_fd(va_arg(list, int), 1);
    else if (sp == 's')
        result_len = ft_putstr_fd(va_arg(list, char *), 1);
    else if (sp == 'd' || sp == 'i') // правильно?
        result_len = ft_putnbr_fd(va_arg(list, int), 1);
    else if (sp == 'p')
        result_len = ft_putstr_fd(va_arg(list, void *), 1);
    else if (sp == 'u')
        result_len = ft_putnbr_fd(va_arg(list, unsigned int), 1);
    else if (sp == 'x')
        result_len = print_in_hexadecimal_lowercase(va_arg(list, int), 1);
    else if (sp == 'X')
        result_len = print_in_hexadecimal_uppercase(va_arg(list, int), 1);
    if (sp == '%')
    {
        ft_putchar_fd('%', 1);
        result_len++;
    }
    return (result_len);
}