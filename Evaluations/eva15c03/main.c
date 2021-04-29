#include <stdio.h>
#include <bsd/string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
int main()
{
	//char a[] = "hello";
	char c[20] = "";
	char b[] = "hh";
	printf("%d\n", ft_strlcat(c, b, 5));
	//printf("%d\n", strlcat(c, b, 5));
}