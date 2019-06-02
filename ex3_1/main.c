
#include "get_next_line.h"
#include <stdio.h>

int    get_next_line(int fd, char **line);

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
