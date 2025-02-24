#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int main(void)
{
	int *nbr;
	int number;
	
	number = 7;
	nbr = &number;
	printf("%d\n", *nbr);
	ft_ft(nbr);
	printf("%d\n", *nbr);
}
