void	ft_ultimate_ft(int *********nbr)
{
	 *********nbr = 42;
}
 
int main(void)
{
        int     nb;
        int     *nbr1;
        int     **nbr2;
        int     ***nbr3;
        int     ****nbr4;
        int     *****nbr5;
        int     ******nbr6;
        int     *******nbr7;
        int     ********nbr8;
        int     *********nbr;
        
        nb = 5;
        nbr1 = &nb;
        nbr2 = &nbr1;
        nbr3 = &nbr2;
        nbr4 = &nbr3;
        nbr5 = &nbr4;
        nbr6 = &nbr5;
        nbr7 = &nbr6;
        nbr8 = &nbr7;
        nbr = &nbr8; 
        
        printf("%d\t", nb);
        ft_ultimate_ft(nbr);
        printf("%d", nb); 
}
