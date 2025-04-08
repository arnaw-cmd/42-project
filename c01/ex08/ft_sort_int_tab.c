/* ft_sort_int_tab.c - arnaw - 2025/04/08 */

#include<stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i; //indice principal
	int	j; //indice secundario i+1
	int	aux; //variable para intercambio.

	i = 0;
	j = 1; //Una posicion por delante de i
	while (i < size -1)
	{
		if (tab[j] < tab[i]) // Si el elemento en posición j es menor que el elemento en posición i
		{
			aux = tab[j];
			tab[j] = tab[i];
			tab[i] = aux;

			// Reiniciamos los índices para comenzar desde el principio
			i = 0;
			j = 1;
		}
		else
		{
			i++;
			j++;
		}
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
	int	tab[10] = {1, 4, 2, 4, 4, 5, 4, 7, 8, 0};

	size = 10;
	printf("Array desordenado:\n");
	print_array(tab, size);
	ft_sort_int_tab(tab, size);
	printf("\nArray ordenado:\n");
	print_array(tab, size);
	return (0);
}

