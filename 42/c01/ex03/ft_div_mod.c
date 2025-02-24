#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

int main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 15;
	b = 10;

	ft_div_mod(a, b, &div, &mod);
	printf("div = %d, mod = %d", div, mod);	
}
