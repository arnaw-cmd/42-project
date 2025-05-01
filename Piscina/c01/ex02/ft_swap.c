/* ft_swap.c - arnaw - 2025/04/07 */

#include <stdio.h>

void	ft_swap (int *a, int *b)
{	
	int swap;

	swap = *b;
	*b = *a;
	*a = swap;	
}

int	main()
{

	int a;
	int b;
	a = 1;
	b = 2;

	printf("Antes: %d, %d\n", a, b);
	ft_swap (&a, &b);
	printf("Después: %d, %d\n", a, b);
	return 0;

}
