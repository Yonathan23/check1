
#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
size_t total;
char *mem;
size_t i;

total = count*size;
mem = malloc(total);
if(mem == NULL)
return (NULL);
i = 0;
while (i < total)
{
mem[i] = 0;
i++;
}
return (mem);
}


/*int main()
{
	int count = 4;
	int *d1;

	d1 = ft_calloc(count, sizeof(int));
	printf("Std function : %p\n", d1);

	return (0);
}
*/
