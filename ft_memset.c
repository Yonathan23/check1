
#include "libft.h"


void	*ft_memset(void *str, int num, size_t length)
{
	size_t	move;

	move = 0;
	if (!str && !num)
		return (NULL);
	while (move < length)
	{
		*(unsigned char *)(str + move) = (unsigned char)num;
		move++;
	}
	return (str);
}

// int main()
// {
//     char myarray[50] = "Welcome to world of 42";
//     printf("Before: %s\n", myarray);
//     ft_memset(myarray + 2 , 'w', 10*sizeof(char));
//     printf("After: %s\n", myarray);
//     return (0);
// }
