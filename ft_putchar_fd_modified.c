#include "ft_printf.h"

int	ft_putchar_fd_modified(char c, int fd)
{
	write(fd, &c, 1);
	return (1);
}
