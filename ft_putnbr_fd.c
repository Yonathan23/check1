
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int n_u;

	if (n < 0)
	{	
		write(fd, "-", 1);
		n = n * (-1);
	}
	n_u = (unsigned int)n;

    if (n_u > 9)
    {
        ft_putnbr_fd(n_u / 10, fd);
    }
    ft_putchar_fd(n_u % 10 + '0', fd);
}

/*int main()
{
	int i = (-2147483647 - 1);
	// int i = (-21 - 1);
	ft_putnbr_fd(i, 1);

	return(0);
}
*/
