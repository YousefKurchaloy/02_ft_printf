#include "ft_printf.h"
#include <stdio.h>
#include <stdlib.h>
int	main(int argc, char **argv)
{


	unsigned int	counter = 0;
	ft_putnbr(16, 16, 0, &counter);

	printf("\n%d", counter);

	return (0);
}