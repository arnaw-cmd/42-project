/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apalleja <apalleja@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 19:44:51 by apalleja          #+#    #+#             */
/*   Updated: 2025/04/03 13:15:59 by apalleja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_generate(char a, char b, char c)
{
	char	blank;
	char	coma;

	blank = ' ';
	coma = ',';
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	if (a != '7' || b != '8' || c != '9')
	{
		ft_putchar(coma);
		ft_putchar(blank);
	}
	else
	{
		ft_putchar('\n');
	}
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				ft_generate(a, b, c, coma, blank);
				c++;
			}
			b++;
		}
		a++;
	}
}
/*int	main(void)
{
	ft_print_comb();
	return (0);
}*/
