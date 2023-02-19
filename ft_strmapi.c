
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*s;

	i = 0;
	if (!s || !f)
		return (0);
	s1 = malloc(ft_strlen(s) + 1);
	if (!s1 || s1 == NULL)
		return (NULL);
	while (s1 != NULL && s[i] != '\0')
	{
		s1[i] = f(i, s[i]);
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

char	f(unsigned int i, char c)
{
	char	s;

	i = 2;
	s = c + i;
	return (s);
}
/*
int main()
{
	char str1[] = "abc";
	char* str2;
	str2 = ft_strmapi(str1, *f);
	printf("%s\n", str2);
  return(0);
}
*/
