
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	
	if (!s || !f)
		return ;
i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
	
}

/*int main()
{
   char s1[] = "hellogoodmorning";
	ft_striteri(s1, NULL);
	printf("%s\n", s1);
    return(0);

}
*/
