#include "libft.h"
int	ft_tolower(int r)
{
	if (r >= 'A' && r <= 'Z')
		r = r + 32;
	return (r);
}

/*int main()
{
    char z = 'A';

    printf("The character has changed to: %c\n", ft_tolower(z));
    return (0);
}*/
