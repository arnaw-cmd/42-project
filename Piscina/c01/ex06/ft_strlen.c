/* ft_strlen.c - arnaw - 2025/04/07 */

#include <stdio.h>

int	ft_strlen(char *str)
{	
	int len;
	len = 0;

	while (str[len] != '\0')
	{
		len++;				

	} 



	return len;
}



int	main(void)
{
	char str[] = "lalalalalala que sonrisa tan rara";
	int result;
	
	result = ft_strlen(str);
	printf ("len: %d\n", result); 
	return 0;
}

