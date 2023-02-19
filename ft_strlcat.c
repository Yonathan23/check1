#include "libft.h"


size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
	size_t i;
	size_t j;
	size_t result;

	if (!dstsize)
		return (ft_strlen(src));
	result = dstsize + ft_strlen(src);
	if (!ft_strlen(dst))
		result = ft_strlen(src);
	i = 0;
	j = ft_strlen(dst);
	while (j < (dstsize - 1) && src[i] != '\0')
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	if (j < dstsize)
		dst[j] = '\0';
	return (result);
}


/*int main()
 {
 	char src[] = "Welcome home";
 	char dest[]= "Fourty two";

 	printf("Dest Before: %s\n", dest);
 	printf("Dest after : %zu\n", ft_strlcat(dest, src, 40));
 	// printf("Dest after : %zu\n", strlcat(dest, src, 40));

 	return (0);
 }
 */
