/* ft_rev_int_tab.c - arnaw - 2025/04/08 */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	half;

	i = 0;
	temp = 0;
	half = size / 2;
	while (half > 0)
	{
		temp = tab [i];
		tab [i] = tab [size - 1];
		tab [size - 1] = temp;
		half--;
		i++;
		size--;
	}
}

void	print_array(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		printf("%d ", *(tab + i));
		i++;
	}
}

int	main(void)
{
	int	size;
	int	tab[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	size = 10;
	printf("Array a invertir:\n");
	print_array(tab, size);
	ft_rev_int_tab(tab, size);
	printf("\nArray invertido:\n");
	print_array(tab, size);
	return (0);
}
