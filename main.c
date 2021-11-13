#include "ft_printf.h"
#include <stdlib.h>
#include <limits.h>

int	main(void)
{
	printf("p:\n");
	printf("1 %p\n", -1);
	printf("2 %p \n", 1);
	printf("3 %p \n", 15);
	printf("4 %p \n", 16);
	printf("5 %p \n", 17);
	printf("6 %p %p \n", LONG_MIN, LONG_MAX);
	printf("7 %p %p \n", INT_MIN, INT_MAX);
	printf("8 %p %p \n", ULONG_MAX, -ULONG_MAX);
	printf("9 %p %p \n", 0, 0);

	ft_printf("p:\n");
	ft_printf("1 %p\n", -1);
	ft_printf("2 %p \n", 1);
	ft_printf("3 %p \n", 15);
	ft_printf("4 %p \n", 16);
	ft_printf("5 %p \n", 17);
	ft_printf("6 %p %p \n", LONG_MIN, LONG_MAX);
	ft_printf("7 %p %p \n", INT_MIN, INT_MAX);
	ft_printf("8 %p %p \n", ULONG_MAX, -ULONG_MAX);
	ft_printf("9 %p %p \n", 0, 0);
	// printf("\nx:\n");
	// printf("1 %x\n", -1);
	// printf("2 %x \n", 1);
	// printf("3 %x \n", 15);
	// printf("4 %x \n", 16);
	// printf("5 %x \n", 17);
	// printf("6 %x %x \n", LONG_MIN, LONG_MAX);
	// printf("7 %x %x \n", INT_MIN, INT_MAX);
	// printf("8 %x %x \n", ULONG_MAX, -ULONG_MAX);
	// printf("9 %x %x \n", 0, 0);

	// ft_printf(" %p ", -1);
	// ft_printf(" %p ", 1);
	// ft_printf(" %p ", 15);
	// ft_printf(" %p ", 16);
	// ft_printf(" %p ", 17);
	// ft_printf(" %p %p ", LONG_MIN, LONG_MAX);
	// ft_printf(" %p %p ", INT_MIN, INT_MAX);
	// ft_printf(" %p %p ", ULONG_MAX, -ULONG_MAX);
	// ft_printf(" %p %p ", 0, 0);

	return (0);
}
