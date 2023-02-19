#include "libft.h"


/*char	*ft_strnstr(const char *haystack, const char *to_find, size_t len)
{
	size_t	i;
	size_t	j;

	if (*to_find == '\0')
		return ((char *) haystack);
	i = 0;
	while (haystack[i] && i <= len)
	{
		if (haystack[i] == to_find[0])
		{
			j = 0;
			while (haystack[i + j] == to_find[j] && i + j < len)
			{
				if (to_find[j + 1] == '\0')
					return ((char *)&haystack[i]);
				j++;
			}
		}
		i++;
	}
	return (0);
}
*/
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;
	size_t len_haystack;
	size_t len_needle;
	char *result;
	
	result = (char *)haystack;
	if (needle[0] == '\0')
		return (result);
	len_haystack = ft_strlen(haystack);
	len_needle = ft_strlen(needle);
	if (haystack[0] == '\0' || len_haystack < len_needle)
		return (0);
	i = 0;
	while(len > 0 )
	{
		j = 0;
		while (haystack[i] == needle[j] && needle[j] != '\0')
		{
			i++;
			j++;
		}
		if (needle[j] == '\0')
			return(&result[i - j]);
		i++;
		len--;
	}
	return (0);
}
 /*int main()
 {
     const char *largestring = "Hello Good Morning";
     const char *smallstring = "Good";
     char *ptr;

     ptr = ft_strnstr(largestring, smallstring, 11);
     printf("Returning the string: %s\n", ptr);
     return (0);

 }
 */
