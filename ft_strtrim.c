
#include "libft.h"

char	ft_readchar(char c, char const *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	starting;
	size_t	ending;

	if (!s1 || !set)
		return (0);
	starting = 0;
	while (s1[starting] && ft_readchar(s1[starting], set))
		starting++;
	ending = ft_strlen(s1);
	while (ending > starting && ft_readchar(s1[ending - 1], set))
		ending--;
	str = (char *)malloc(sizeof(*s1) * (ending - starting + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (starting < ending)
		str[i++] = s1[starting++];
	str[i] = 0;
	return (str);
}

/* int main()
 {
     char *str1 = "a      a";
     char *str2 = "a";

     printf("%s\n", ft_strtrim(str1, str2));
     return (0);

 }*/
