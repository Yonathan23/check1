
#include "libft.h"

int ft_get_len(int n)
{
    size_t len;
	long long n_long;

    len = 1; 
	n_long = n;
    if (n_long < 0)
    {
        n_long = -n_long;
        len++;
    }
    while(n_long >= 10)
    {
        n_long /= 10;
        len++;
    }
    return(len);
}

char	*ft_itoa(int n)
{
    char *result;
    size_t len;
	long long n_long;

    len = ft_get_len(n);
    if(!(result = (char *)malloc((len + 1)* sizeof(char))))
		return(0);
    result[len--] = '\0';
	n_long = n;
    if(!n)
        result[0] = '0';
    else if (n_long < 0)
    {
        n_long = -n_long;
        result[0] = '-';
    }
    while(n_long)
    {
        result[len] = n_long % 10 + '0';
        n_long /= 10;
        len--;
    }
    return (result);
}
 /*int main()
 {
     char *str;

     str = ft_itoa(1046911295);
     printf("%s\n", str);
     free(str);
     return 0;
 }*/
