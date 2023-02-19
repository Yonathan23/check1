#include "libft.h"


void *ft_memchr(const void *str, int c, size_t n)
{
	unsigned char ch;
	unsigned char *ms;
	size_t i;

	ch = c; 
	ms = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		if ((unsigned char )*ms == ch)
			return ((char *)ms);
		i++;
		ms++;
	}

	return (NULL);
}

/*int main()

{
	const char string[] = "Good morning";
	int x = 'm';
	const char *p;

	p = ft_memchr(string, x, 3);
	printf("String starting from %c is : %s\n", x, p);
	return (0);
}
*/	

