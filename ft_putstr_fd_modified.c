#include "ft_printf.h"

int	ft_putstr_fd_modified(char *s, int fd)
{
	size_t	i;

	i = 0;
	if (!s)
	{
		write(fd, "(null)", 6);
		return (6);
	}
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
	return ((int) i);
}
