#include "libft.h"

void ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char*)s;
	while (n)
	{
		*ptr = 0;
		ptr++;
		n--;
	}
}


// int main()
// {
//     char str[15] = "abcdefgh";
//     printf("I am printing a string: %s\n", str);
//     ft_bzero(str, 6);
//     printf("I am printing a string: %c\n", str[5]);
//     return (0);
// }
