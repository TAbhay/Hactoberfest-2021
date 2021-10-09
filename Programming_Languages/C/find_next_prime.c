#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	k;
	int	f;

	f = 0;
	k = nb;
	while (f == 0)
	{
		if (ft_is_prime(k) == 1)
			return (k);
		k++;
		f = 0;
	}
	return (k);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
    {
		printf("You must introduce executable plus a number\n");
        exit (0);
    }
    printf("The next prime number to %d is %d \n", atoi(argv[1]), ft_find_next_prime(atoi(argv[1])));
	return (0);
}