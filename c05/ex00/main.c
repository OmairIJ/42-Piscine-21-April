  
int        ft_iterative_factorial(int nb)
{
        int        result;
        int        i;

        i = 1;
        result = 1;
        if ((nb <= 0) || (nb > 12))
                return (0);
        if (nb == 1)
                return (1);
        while (i <= nb)
        {
                result *= i;
                i++;
        }
        return (result);
}
#include <stdio.h>
int main()
{
	printf("%d\n", ft_iterative_factorial(5));
}