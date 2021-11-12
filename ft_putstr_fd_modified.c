#include "ft_printf.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_putstr_fd_modified(char *s, int fd)
{
	size_t	i;

	i = 0;
	if (!s)
	{
		i = ft_strlen("(null)");
		write(fd, "(null)", 6);
		return ((int)i);
	}
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
    return ((int)i);
}
