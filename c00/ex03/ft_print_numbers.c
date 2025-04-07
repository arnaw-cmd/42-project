/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apalleja <apalleja@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 18:41:46 by apalleja          #+#    #+#             */
/*   Updated: 2025/04/01 13:44:54 by apalleja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*c = n + '0';:

n contiene un valor del 0 al 9 (conforme avanza el bucle while)
'0' es la representación literal del carácter cero, que tiene el valor ASCII 48
La suma n + '0' da como resultado:

Si n es 0: 0 + 48 = 48 (código ASCII para '0')
Si n es 1: 1 + 48 = 49 (código ASCII para '1')
Si n es 2: 2 + 48 = 50 (código ASCII para '2')*/

#include <unistd.h>

void	ft_print_numbers(void)
{
	int		n;
	char	c;

	n = 0;
	while (n <= 9)
	{
		c = n + '0';
		write(1, &c, 1);
		n++;
	}
}
/*int	main(void)
{
	ft_print_numbers();
	return (0);
}*/
