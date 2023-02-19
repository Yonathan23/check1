
#include "libft.h"

int		ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') ||
			(c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}
i/*nt main()
{
	printf("This should be 1 \nMy  function : %d\nStd function : %d\n", ft_isalnum(66), isalnum(66));
	printf("This should be 0 \nMy  function : %d\nStd function : %d\n", ft_isalnum(11), isalnum(11));
	return (0);
}*/
