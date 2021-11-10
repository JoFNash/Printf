#include "ft_printf.h"

int	len_num(int num, int base)
{
	int		len;

	len = 0;
	if (num < 0)
		len++;
	while (num)
	{
		num = num / base;
		len++;
	}
	return (len);
}

int print_in_hexadecimal(int number, int fd, char c)
{
    char    *str_num;
    int     len_number;
    size_t  i;
    
    i = 0;
    len_number = len_num(number, 16);
    str_num = (char *)malloc(sizeof(char) * (len_number + 1));
    if (!str_num)
        return (-100); // обработать!
    if (number == 0)
    {
        ft_putstr_fd_modified("0\0", 1);
        return(1);
    }
    if (number < 0)
	{
		str_num[0] = '-';
		str_num[len_number - 1] = (-1) * (number % 16) + '0';
		number = number / (-16);
		i = 1;
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
    return (2);
}