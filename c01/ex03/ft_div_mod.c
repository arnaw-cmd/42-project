/* ft_div_mod.c - arnaw - 2025/04/07 */

#include <stdio.h>

void	ft_div_mod (int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;	
}
/*
int	main ()
{
	int a;
	int b;
	int div;
	int mod;

	a= 25;
	b= 5;

	ft_div_mod (a, b, &div, &mod);
	
	
	printf("Valor de div: %d\n", div);
	printf("Valor de mod: %d\n", mod);
}*/

