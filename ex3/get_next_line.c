#include <stdio.h>
#include <fcntl.h>
#include "libft.h"

#define BUFF_SIZE 4


char *ft_relocate(char *c, long int *count)
{
	int i;
	long int beg;
	char *d;

	i = -1;
	beg = *count;
	*count = *count * 2;
	d = ft_strnew(*count);
	while (++i != beg)
		d[i] = c[i];
	ft_strdel(&c);
	return (d);
}

#include <stdio.h>

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
    c = ft_strnew(count);
    ft_strdel(line);
	if (ret)
    {
		while (ret[i] != '\0')
		{
			c[i] = ret[i];
			i++;
		}
        ft_strdel(&ret);
	}
	while (read(fd, buffer, BUFF_SIZE))
	{
		//printf("qwe\n");
		j = -1;
		if (i == count)
			c = ft_relocate(c, &count);
		while (++j < BUFF_SIZE  && buffer[j] != EOF)
		{
			if (buffer[j] == '\n')
			{
				ret = ft_strnew(BUFF_SIZE - j);
				i = -1;
				while (++j < BUFF_SIZE  && buffer[j] != EOF)
					ret[++i]  = buffer[j];
                ret[++i] = '\0';
                *line = c;
				return (1);	
			}
			c[i] = buffer[j];
            i++;
		}
        //printf("%s\n", c);
	}
	//printf("qwe\n");
    //write(1, &c, 5);
	*line = c;
	return (1);
}

