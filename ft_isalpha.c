
#include "libft.h"

int	ft_isalpha(int c)
{
	if (c >= 65 && c <= 90 || c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}

/*

int main()
{
	printf("This should be 1 : %d\n", ft_isalpha(66));
	printf("This should be 0 : %d\n", ft_isalpha(10));
	return (0);
}
*/
