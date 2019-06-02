
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
    static char *c[255];
	char *ret;
	int i;
	int j;
	long int count;
	char *buffer;
    char *ret_buf;
    
    int val;
    
    if (fd < 0 || line == NULL)
        return (-1);

    ret = ft_findfd(fd, str);
	buffer = ft_strnew(BUFF_SIZE);
	count = BUFF_SIZE;
	i = 0;
    c = ft_strnew(count);
    if (**line)
        ft_strdel(line);
	if (ret)
    {
		while (ret[i] != '\0')
		{
            if (ret[i] == '\n')
            {
                ret_buf = ft_strnew(BUFF_SIZE - i);
                j = -1;
                while (++i < BUFF_SIZE  && ret[i] != EOF)
                    ret_buf[++j]  = ret[i];
                ret_buf[++j] = '\0';
                ft_strdel(&ret);
                //ret = ret_buf;
                ft_insertstr(fd, str, ret_buf);
                *line = c;
                return (1);
            }
           c[i] = ret[i];
           i++;
		}
        ft_strdel(&ret);
	}
	while ((val =read(fd, buffer, BUFF_SIZE)) > 0)
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
                ft_insertstr(fd, str, ret);
                //printf("dsasdsadasdad\n");
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

int main()
{
	int fd;
	if((fd=open("cx.c", O_RDONLY))==-1)
	{
		printf("Cannot open file.\n");
		exit(1);
	}
	char *c;

	get_next_line(fd, &c);
    printf("%s", c);
    get_next_line(fd, &c);
    printf("%s", c);
    get_next_line(fd, &c);
    printf("%s", c);
    //write(1, &c, 21);
    return 0;
}
