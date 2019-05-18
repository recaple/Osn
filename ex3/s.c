#include <stdio.h>
#include <fcntl.h>
#include "libft.h"

#define BUFF_SIZE 10


int get_next_line(const int fd, char **line)
{	
	return (1);
}

void lst_push_back(t_list *lst, t_list *ad)
{
	while (lst->next)
		lst = lst->next;
	lst->next = ad;
}

void lstde(void *con, size_t l)
{
	free(con);
	con = NULL;
	l = 0;
}

char *final_str(t_list *cre)
{
	char *c;
	int i;
	int j;
	char *d;

        c = (char *)malloc(sizeof(char) * i);
        i = -1;
        while (cre)
        {
                j = -1;
                while (++j != BUFF_SIZE)
                {
                        d = cre->content;
                        c[++i] = d[j];
                }
                cre = cre->next;
        }
	return (c);
}

int main()
{
	int fd;
	int i;
	t_list *cre;
	t_list *newl;

	char *buffer = ft_strnew(10);
	if((fd=open("1.txt", O_RDONLY))==-1)
	{
		printf("Cannot open file.\n");
		exit(1);
	}
	i = 0;
	while (read(fd, buffer, BUFF_SIZE) == BUFF_SIZE)
	{
		if (!cre)
			cre = ft_lstnew(buffer, BUFF_SIZE);
		else
		{
			newl = ft_lstnew(buffer, BUFF_SIZE);
			lst_push_back(cre, newl);
		}
		i += BUFF_SIZE;
		ft_strclr(buffer);
	}
	char *c;
	/*c = (char *)malloc(sizeof(char) * i);
	int j;
	
	i = -1;
	char *d;
	while (cre)
	{
		j = -1;
		while (++j != BUFF_SIZE)
		{
			d = cre->content;
			c[++i] = d[j];
		}
		cre = cre->next;
	}*/
	c = final_str(cre);
//	ft_lstdel(&cre, (*lstde));
	write(1, &c, i);
	return 0;
}
