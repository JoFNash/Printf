#include "ft_printf.h"

// list, *(++format)

int print_this_specifier(va_list list, char sp)
{
    int sp_len;
    int n;
    char *s;
    void *p;
    unsigned int ui;

    if (sp == 'c')
    {
        n = va_arg(list, int);
        ft_putchar_fd(n, 1);
    }
    else if (sp == 's')
    {
        s = va_arg(list, char *);
        ft_putstr_fd(s, 1);
    }
    else if (sp == 'd' || sp == 'i') // правильно?
    {
        n = va_arg(list, int);
        ft_putnbr_fd(n, 1);
    }
    else if (sp == 'p')
    {
        p = va_arg(list, void *);
        ft_putstr_fd(p, 1);
    }
    else if (sp == 'u')
    {
        ui = va_arg(list, unsigned int);
        ft_putnbr_fd(ui, 1);
    }
    else if (sp == 'x')
    {
        ui = print_in_hexadecimal_lowercase(va_arg(list, int), 1);
    }
    else if (sp == 'X')
    {
        ui = print_in_hexadecimal_uppercase(va_arg(list, int), 1);
    }
    if (sp == '%')
    {
        ft_putchar_fd('%', 1);
    }
}