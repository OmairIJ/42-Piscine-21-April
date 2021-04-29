char	*ft_strncpy(char *dest, char *src, unsigned int n);
#include <stdio.h>
#include <string.h>
int main(){

	char dest[100];
	char src[] = "";
	printf("%s\n", ft_strncpy(dest, src, 0));
	printf("%s\n", strncpy(dest, src, 0));
}
