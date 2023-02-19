
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	if (!dst || !src)
		return (0);
	i = 0;
	while (src[i])
		i++;
	if (dstsize == 0)
		return (i);
	i = 0;
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	i = 0;
	while (src[i])
		i++;
	return (i);
}

/*int main()
{
	char dest[50];
	char *src;
	int size;
	src = "hello good morning";
	size = 15; 
	printf("%ld\n", ft_strlcpy(dest, src, size));
	printf(".%s.\n\n", dest);
	}*/
