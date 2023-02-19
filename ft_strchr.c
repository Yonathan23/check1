#include "libft.h"
char	*ft_strchr(const char *str, int c)
{
	unsigned char	ch;

	ch = c;
	while (*str && (unsigned char)*str != ch)
		str++;
	if (ch == (unsigned char)*str)
		return ((char *)str);
	else
		return (NULL);
}

/* int main()
 {
     const char string[] = "Welcome to Mongolia";
     int x = 'c';
     const char *p;

     p = ft_strchr(string, x);
     printf("String starting from %c is: %s\n", x, p);
     return (0);

}
*/
