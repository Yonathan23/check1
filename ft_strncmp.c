#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t num)
{
	size_t			i;
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	i = 0;
	if (num == 0)
		return (0);
	while ((i < num - 1) && (ptr1[i] != '\0' && ptr2[i] != '\0')
		&& (ptr1[i] == ptr2[i]))
		i++;
	return (ptr1[i] - ptr2[i]);
}

 /*int main()
 {
     char mystring[] = "Morning";
     char mystring2[] = "Mornin";

     printf("The string is: %d\n", strncmp(mystring, mystring2, 7));
     printf("The string is: %d\n", ft_strncmp(mystring, mystring2, 7));
     return (0);
 }
 */
