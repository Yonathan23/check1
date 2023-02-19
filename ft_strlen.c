#include "libft.h"


/*size_t	ft_strlen(const char *c)
{
	size_t len;

	len = 0;
	while (c[len] != '\0')
	{
		len++;
	}
	return (len);
}*/
size_t ft_strlen(const char *str)
{
    size_t len;
    len = 0;
    if (!str)
        return(len);
    while(str[len] != '\0')
    {
        len++;
    }
    return (len);
}
/*int main()
{
     char myarray[] = "Welcome";
     printf ("The value of the string is : %zu\n", ft_strlen(myarray));
     return (0);
}
*/
