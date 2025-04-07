/* ft_ultimate_div_mod.c - arnaw - 2025/04/07 */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int div;
	int mod;
	
	div = *a / *b;
	mod = *a % *b;

	*a = div;
	*b = mod;
	
}

int	main()
{
	int a, b;
	a = 25;
	b = 5;

	printf("ANTES de  ft_ultimate_div_mod: %d, %d\n", a, b);

	ft_ultimate_div_mod(&a, &b);
	printf("DESPUÉS de ft_ultimate_div_mod: %d, %d\n", a, b);
	return 0;
}


