#include<stdio.h>
#include <string.h>
#include <stdlib.h>

char    *ft_strchr(const char *string, int symbol)
{
        while (*string != '\0' || *string == (char)symbol)
        {
                if (*string == (char)symbol)
                        return ((char *)string);
                string++;
        }
        return (NULL);
}
int main() {
   char	*s = "1234f123f1\2202f1234f134f";
	printf("%s", ft_strchr(s, '\220'));
	printf("\n%s", strchr(s, '\220'));
}

