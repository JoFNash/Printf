#include "ft_printf.h"

static	int	len_num(int num)
{
	int		len;

	len = 0;
	if (num == 0)
		return (1);
	if (num < 0)
		len++;
	while (num)
	{
		num = num / 10;
		len++;
	}
	return (len);
}

int	ft_putnbr_fd_modified(int n, int fd)
{
	long int	n_tmp;

	n_tmp = n;
	if (n_tmp < 0)
	{
		n_tmp = n_tmp * (-1);
		ft_putchar_fd_modified('-', fd);
	}
	if (n_tmp > 9)
    {
		ft_putnbr_fd_modified(n_tmp / 10, fd);
    }
	ft_putchar_fd_modified(n_tmp % 10 + '0', fd);
    return (len_num(n));
}

static	int	len_num_unsigned(unsigned int num)
{
	int		len;

	len = 0;
	if (num == 0)
		return (1);
	while (num)
	{
		num = num / 10;
		len++;
	}
	return (len);
}

int	ft_putnbr_fd_modified_unsigned(int n, int fd)
{
	unsigned int	n_tmp;

	n_tmp = (unsigned int)n;
	if (n_tmp > 9)
    {
		ft_putnbr_fd_modified(n_tmp / 10, fd);
    }
	ft_putchar_fd_modified(n_tmp % 10 + '0', fd);
	//printf(": len_num(n) = %d\n", len_num_unsigned(n_tmp));
    return (len_num_unsigned(n_tmp));
}