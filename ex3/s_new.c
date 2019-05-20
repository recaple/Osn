#include <stdio.h>
#include <fcntl.h>
#include "libft.h"

#define BUFF_SIZE 10


char *ft_relocate(char *c, long int *count)
{
	int i;
	long int beg;
	char *d;

	i = -1;
	beg = *count;
	*count = *count * 2;
	d = (char *)malloc(sizeof(char) * (*count));
	while (++i != beg)
		d[i] = c[i];
	free(c);
	return (d);
}

int get_next_line(const int fd, char **line)
{	
	static char *ret;
	char *c;
	int i;
	int j;
	long int count;
	char *buffer;

	buffer = ft_strnew(BUFF_SIZE);
	count = BUFF_SIZE;
	i = 0;
	if (ret)
	{
		c = ft_strnew(count);
		while (ret[i] != '\0')
		{
			c[i] = ret[i];
			i++;
		}
	}		
	while (read(fd, buffer, BUFF_SIZE) == BUFF_SIZE)
	{
		j = -1;
		if (i == count)
			c = ft_relocate(c, &count);
		while (++j != BUFF_SIZE)
		{
			if (buffer[j] == '\n')
			{
				free(ret);
				ret = ft_strnew(BUFF_SIZE - j);
				i = -1;
				while (++j != BUFF_SIZE)
					ret[++i]  = buffer[j];
				return (1);	
			}
			c[i] = buffer[j];
		}
	}
	*line = c;
	return (1);
}

int main()
{
	int fd;
	int i;

	char *buffer = ft_strnew(10);
	if((fd=open("1.txt", O_RDONLY))==-1)
	{
		printf("Cannot open file.\n");
		exit(1);
	}
	char *c;

	get_next_line(fd, &c);
	write(1, &c, i);
	return 0;
}
