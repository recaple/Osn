#include<stdio.h>
#include <string.h>
#include <stdlib.h>

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
        size_t i;

        i = -1;
        while (++i < n)
                ((unsigned char*)dst)[i] = ((unsigned char*)src)[i];
        return (dst);
}

void	*ft_memmove(void *destination, const void *src, size_t n)
{
	if (!destination || !src)
		return (NULL);
	if (!((int *)destination > (int *)src
		&& (int *)src + n > (int *)destination))
		ft_memcpy(destination, src, n);
	else
		while (n-- > 0)
			*((char *)destination + n) = *((char *)src + n);
	return (destination);
}


int main() {
    char *c = NULL;
    char *d = NULL;
   printf("%s", ft_memmove(c, d, 10));
}

