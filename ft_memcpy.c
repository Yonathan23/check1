
#include "libft.h"


void	*ft_memcpy(void *dst, const void *src, size_t num)
{
	size_t	i;
	char	*csrc;
	char	*cdest;

	if (!src && !dst)
		return (NULL);
	csrc = (char *)src;
	cdest = (char *)dst;
	i = 0;
	while (i < num)
	{
		cdest[i] = (unsigned char)csrc[i];
		i++;
	}
	return (cdest);
}
/*char	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char *ptr_dst;
	unsigned char *ptr_src;

	ptr_dst = (unsigned char*)dst;
	ptr_src = (unsigned char*)src;

	if (!n || ptr_dst == ptr_src)
		return (dst);

	while (n)
	{
		*ptr_dst = *ptr_src;
		ptr_dst++;
		ptr_src++;
		n--;
	}
	return(dst);
}
int main()
{
     char mystring[50] = "Good bye Mongolia";
     char dst[50] = "Welcome to Mongolia";
     printf("Before: %s\n", dst);
     ft_memcpy(dst, mystring, 30);
     printf("After: %s\n", dst);
     return(0);
}
*/
