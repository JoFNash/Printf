#include "ft_printf.h"
#include <stdlib.h>

int	main(void)
{
	// size_t Gb = 1024*1024*1024;
	// char *a = (char *)malloc(2 * Gb * sizeof(char));
	// char *b = (char *)malloc(2 * Gb * sizeof(char));
	// printf("use %%X: a=%X\n", a);
	// printf("use %%X: b=%X\n", b);
	// printf("use %%p: a=%p\n", a);
	// printf("use %%p: b=%p\n", b);

	// ft_printf("use: a=%X\n", a);
	// ft_printf("use: b=%X\n", b);
	// ft_printf("use: a=%p\n", a);
	// ft_printf("use: b=%p\n", b);

	// 6b97

	ft_printf("%d\n", 0x027543);
	ft_printf("%x\n", 0x027543);
	ft_printf("%X\n", 0x027543);

	printf("%d\n", 0x027543);
	printf("%x\n", 0x027543);
	printf("%X\n", 0x027543);

	ft_printf("%d\n", 0);
	ft_printf("%x\n", 0);
	ft_printf("%X\n", 0);

	printf("%d\n", 0);
	printf("%x\n", 0);
	printf("%X\n", 0);

	char *str1 = "abc";
	char *str2 = "Hello2\0";
	ft_printf("%s %d abcdefg  %s\n", str1, 199, str2);
	printf("%s %d abcdefg \n %s\n", str1, 199, str2);
	return (0);
}
