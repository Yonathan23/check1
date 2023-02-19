#include "libft.h"
int	ft_toupper(int h)
{
	if (h >= 'a' && h <= 'z')
	{
		h = h - 32;
	}
	return (h);
}

// int main()
// {
//     char z = 'r';

//     printf("The character is: %c\n", ft_toupper(z));
//     return (0);
// }
