#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	i;
	size_t	j;

	if (!s || !(new_str = (char *)malloc(len + 1)))
		return (0);
	i = start;
	j = 0;
	while (i < ft_strlen(s) && j < len)
		new_str[j++] = s[i++];
	new_str[j] = '\0';
	return (new_str);
}

/*char	*ft_substr(char const *string, unsigned int start, size_t len)
{
	char	*dest;
	int		c;

	c = 0;
	if (!string)
		return (NULL);
	if (len >= ft_strlen(string))
		len = ft_strlen(string);
	if (start >= ft_strlen(string))
		len = 0;
	dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	while (c < (int)len)
	{
		*(dest + c) = *(string + start);
		string++;
		c++;
	}
	*(dest + c) = '\0';
	return (dest);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	s_len;
	char			*substr;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (s_len < start)
	{
		if (!(substr = malloc(sizeof(char) * 1)))
			return (NULL);
		substr[0] = '\0';
		return (substr);
	}
	if (!(substr = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	while (i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
*/
/*char	*ft_substr(const char *s, size_t start_pos, size_t size)
{
	char *res;
	size_t i;

	if (!s || !size)
		return(0);
	if (start_pos >= ft_strlen(s))
		{
			res = (char *)malloc(sizeof(char));
			res[0] = '\0';
			return(res);
		}
	if (!(res = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	i = 0;
	while (size--)
	{
		res[i] = s[start_pos];
		start_pos++;
		i++;
	}
	res[i] = '\0';
	return (res);
}*/
 /*int main()
 {
     char s1[] = "Welcome to Mongolia";
     int start = 5; 
     int n = 10;

     char *res = ft_substr(s1, start, n);
     printf("My function string : %s\n", res);
     return(0);
 }
 */
