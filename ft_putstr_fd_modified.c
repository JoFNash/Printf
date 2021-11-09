#include "ft_printf.h"

int	ft_putstr_fd_modified(char *s, int fd)
{
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
    return ((int)i);
}
