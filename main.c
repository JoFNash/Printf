#include "ft_printf.h"
#include <stdlib.h>
#include <limits.h>

int	main(void)
{
	int	k;

	// k = printf(" %p ", -1);
	//printf("k = %d\n", k);
	// k = printf(" %p ", 1);
	//printf("k = %d\n", k);
	// k = printf(" %p ", 15);
	//printf("k = %d\n", k);
	// k = printf(" %p ", 16);
	//printf("k = %d\n", k);
	// k = printf(" %p ", 17);
	//printf("k = %d\n", k);
	k = printf("%p\n", LONG_MIN);
	//printf("k = %d\n", k);
	// k = printf(" %p %p ", INT_MIN, INT_MAX);
	//printf("k = %d\n", k);
	// k = printf(" %p %p ", ULONG_MAX, -ULONG_MAX);
	//printf("k = %d\n", k);
	// k = printf(" %p %p \n\n", 0, 0);
	//printf("k = %d\n\n\n", k);

	// k = ft_printf(" %p ", -1);
	//printf("k = %d\n", k);
	// k = ft_printf(" %p ", 1);
	//printf("k = %d\n", k);
	// k = ft_printf(" %p ", 15);
	//printf("k = %d\n", k);
	// k = ft_printf(" %p ", 16);
	//printf("k = %d\n", k);
	// k = ft_printf(" %p ", 17);
	//printf("k = %d\n", k);
	k = ft_printf("%p\n", LONG_MIN);
	//printf("k = %d\n", k);
	// k = ft_printf(" %p %p ", INT_MIN, INT_MAX);
	//printf("k = %d\n", k);
	// k = ft_printf(" %p %p ", ULONG_MAX, -ULONG_MAX);
	//printf("k = %d\n", k);
	// k = ft_printf(" %p %p ", 0, 0);
	//printf("k = %d\n", k);
	return (0);
}


/*
	k = printf(" %p ", -1);
	printf("k = %d\n", k);
	// k = printf(" %p ", 1);
	// printf("k = %d\n", k);
	// k = printf(" %p ", 15);
	// printf("k = %d\n", k);
	// k = printf(" %p ", 16);
	// printf("k = %d\n", k);
	// k = printf(" %p ", 17);
	// printf("k = %d\n", k);
	// k = printf(" %p %p ", LONG_MIN, LONG_MAX);
	// printf("k = %d\n", k);
	// k = printf(" %p %p ", INT_MIN, INT_MAX);
	// printf("k = %d\n", k);
	// k = printf(" %p %p ", ULONG_MAX, -ULONG_MAX);
	// printf("k = %d\n", k);
	// k = printf(" %p %p ", 0, 0);
	// printf("k = %d\n", k);

	k = ft_printf(" %p ", -1);
	printf("k = %d\n", k);
	// k = ft_printf(" %p ", 1);
	// printf("k = %d\n", k);
	// k = ft_printf(" %p ", 15);
	// printf("k = %d\n", k);
	// k = ft_printf(" %p ", 16);
	// printf("k = %d\n", k);
	// k = ft_printf(" %p ", 17);
	// printf("k = %d\n", k);
	// k = ft_printf(" %p %p ", LONG_MIN, LONG_MAX);
	// printf("k = %d\n", k);
	// k = ft_printf(" %p %p ", INT_MIN, INT_MAX);
	// printf("k = %d\n", k);
	// k = ft_printf(" %p %p ", ULONG_MAX, -ULONG_MAX);
	// printf("k = %d\n", k);
	// k = ft_printf(" %p %p ", 0, 0);
	// printf("k = %d\n", k);
*/