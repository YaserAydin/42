#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

int main(void)
{
	int a = 7;
	int b = 3;

	ft_swap(&a, &b);
	printf("a = %d\nb = %d", a, b);
}
