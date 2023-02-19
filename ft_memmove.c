#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *ptr_dst;
	unsigned char *ptr_src;

	ptr_dst = (unsigned char*)dst;
	ptr_src = (unsigned char*)src;

	if (!ptr_dst && !ptr_src)
		return (NULL);
	
	if (ptr_dst < ptr_src)
	{
		while(len)
		{
			*ptr_dst = *ptr_src;
			ptr_dst++;
			ptr_src++;
			len--;
		}
	}
	else
	{
		while (len)
		{
			ptr_dst[len - 1] = ptr_src[len - 1];
			len--;
		}
	}
	return(dst);
}



/*int main()
{


	char buff1[] = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
	char buff2[] = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
	char *src1 = "thiß ";
	char *src2 = "thiß ";

	printf("My  function : %p\nStd function : %p\n", ft_memmove(buff1 +3, src1, 10*sizeof(char)), memmove(buff2+3, src2, 10*sizeof(char)));
	return (0);
}
*/
