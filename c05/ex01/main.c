
int		ft_recursive_factorial(int nb)
{
	if (nb>=1)
        return nb*ft_recursive_factorial(nb-1);
    else
        return 1;
	if ((nb <= 0) || (nb > 12))
		return (0);
}
#include <stdio.h>
int main()
{
	printf("%d\n", ft_recursive_factorial(0));
}