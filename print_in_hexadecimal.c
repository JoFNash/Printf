#include "ft_printf.h"

int	len_num(long int num, int base)
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

// -2147483648

int print_in_hexadecimal(int number, int fd, char c)
{
    long int ui_num;
    char    *str_num;
    int     len_number;
    size_t  i;
    
    ui_num = (long int) number;
    if (ui_num < 0)
        ui_num = 4294967295 - ((-1) * ui_num) + 1;
    i = 0;
    len_number = len_num(ui_num, 16);
    str_num = (char *)malloc(sizeof(char) * (len_number + 1));
    if (!str_num)
        return (-100); // обработать!
    if (ui_num == 0)
    {
        ft_putstr_fd_modified("0", 1);
        return(1);
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
