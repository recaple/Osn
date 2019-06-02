#include "get_next_line.h"


static char *ft_relocate(char *c, long int *count)
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

int get_next_line(const int fd, char **line)
{	
	static char *ret[255];
	char *c;
	int i;
	int j;
	long int count;
	char *buffer;
    char *ret_buf;

	buffer = ft_strnew(BUFF_SIZE);
	count = BUFF_SIZE;
	i = 0;
    c = ft_strnew(count);
    if (fd < 0 || line == NULL)
        return (-1);
	if (ret[fd])
    {
		while (ret[fd][i] != '\0')
		{
            if (ret[fd][i] == '\n')
            {
                ret_buf = ft_strnew(BUFF_SIZE - i);
                j = -1;
                while (++i < BUFF_SIZE  && ret[fd][i] != EOF)
                    ret_buf[++j]  = ret[fd][i];
                ret_buf[++j] = '\0';
                ft_strdel(&ret[fd]);
                ret[fd] = ret_buf;
                *line = c;
                return (1);
            }
           c[i] = ret[fd][i];
           i++;
		}
        ft_strdel(&ret[fd]);
	}
	while (read(fd, buffer, BUFF_SIZE))
	{
		j = -1;
		if (i == count)
			c = ft_relocate(c, &count);
		while (++j < BUFF_SIZE  && buffer[j] != EOF)
		{
			if (buffer[j] == '\n')
			{
				ret[fd] = ft_strnew(BUFF_SIZE - j);
				i = -1;
				while (++j < BUFF_SIZE  && buffer[j] != EOF)
					ret[fd][++i]  = buffer[j];
                ret[fd][++i] = '\0';
                *line = c;
				return (1);	
			}
			c[i] = buffer[j];
            i++;
		}
	}
	*line = c;
	return (1);
}
