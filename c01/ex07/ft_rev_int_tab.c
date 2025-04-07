/* ft_rev_int_tab.c - arnaw - 2025/04/08 */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{

	int inv[size];
	int final = 0;

	while (size >= 0)
	{
		inv[final]=tab[size];				
		size--;
		final++;


	}

	
	*tab = *inv;
}


int	 main ()
{

	int tab[] = {1, 2, 3, 4, 5};
	int size = 6;
	int i = 0;

	while(tab[i] < size)
	{
	printf("%d ", tab[i]);
	i++;
	}	

	ft_rev_int_tab(tab, size);
	
	while(tab[i] < size)
        {
        printf("%d ", tab[i]);
        i++;
        }



}
