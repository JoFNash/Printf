#include "ft_printf.h"

int	ft_putnbr_fd_modified(int n, int fd)
{
	long int	n_tmp;
    int         len_n;

	n_tmp = n;
    len_n = 0;
	if (n_tmp < 0)
	{
		n_tmp = n_tmp * (-1);
		ft_putchar_fd('-', fd);
	}
	if (n_tmp > 9)
    {
		ft_putnbr_fd(n_tmp / 10, fd);
        len_n++;
    }
	ft_putchar_fd(n_tmp % 10 + '0', fd);
    return (len_n);
}
