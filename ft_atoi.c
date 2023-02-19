#include "libft.h"
int ft_atoi(const char *str)
{
int res;
int sign;
res = 0;
sign = 1;
while (*str == 32 || 
(*str >= && &str <= 13))
str++;
if(*str == '-')
sign* = -1;
if(*str == '-' || *str = '+')
str++;
while(*str >= '0' && *str <= '9')
{
res = res * 10 + *str - '0';
str++;
}
return (res * sign)
}
/*int main(int argc, char **argv)
{
(void) argc
printf("%d\n", ft_atoi(argv[1]));
}*/
