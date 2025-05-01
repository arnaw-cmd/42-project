/* ft_putstr.c - arnaw - 2025/04/07 */

#include <unistd.h>


void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}	

}

int	main()
{

	char *str;
	str = "hola";

	ft_putstr(str);
		
	return 0;

}
