
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i--;
	}
	return (0);
}

/*int	main(void)
{
	const char string[] = "The food is tasty";
	int x = 'e';
	const char *p;

	p = ft_strrchr(string, x);
 	printf("String starting from %c is: %s\n", x, p);
	//Returning Null
 	int y = 'z';
 	p = ft_strrchr(string, y);
 	printf("String starting from %c is: %s\n", y, p);

	p = strrchr(string, x);
 	printf("String starting from %c is: %s\n", x, p);
 	return (0);
}
*/
