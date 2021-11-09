#include "ft_printf.h"
#include <stdlib.h>

int	main(void)
{
	size_t Gb = 1024*1024*1024;
	char *a = (char *)malloc(2 * Gb * sizeof(char));
	char *b = (char *)malloc(2 * Gb * sizeof(char));
	printf("use %%X: a=%X\n", a);
	printf("use %%X: b=%X\n", b);
	printf("use %%p: a=%p\n", a);
	printf("use %%p: b=%p\n", b);

	ft_printf("use: a=%X\n", a);
	ft_printf("use: b=%X\n", b);
	ft_printf("use: a=%p\n", a);
	ft_printf("use: b=%p\n", b);

	ft_printf("%i\n", 0x28);
	ft_printf("%d\n", 0x28);
	ft_printf("%d\n", 28);
	//ft_printf("It is %c\n", '2');
	//ft_printf("Me %d\n", 3);
	return (0);
}
