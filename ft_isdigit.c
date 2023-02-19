
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
/*
int main()
{
	printf("This should be 1 : %d\n", ft_isdigit(9));
	printf("This should be 0 : %d\n", ft_isdigit(11));
	return (0);
}
*/
