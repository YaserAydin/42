#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	swap;
	
	i = 0;
	j = size - 1;

	while (i < j)
	{
		swap = tab[i];
		tab[i] = tab[j];
		tab[j] = swap;
		i++;
		j--;
	}

}

int main(void)
{
	int tab[7] = {0, 1, 2, 3, 4};
	int size = 5;
	ft_rev_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d", tab[0], tab[1], tab[2], tab[3], tab[4]);
}
