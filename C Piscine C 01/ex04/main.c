
#include<stdio.h>
#include"ft_ultimate_div_mod.c"

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 42;
	b = 4;
	printf("Original: a = %d, b = %d;", a, b);
	printf("\nRun ft_ultimate_div_mod. Store a/b in a and a mod b in b\n");
	ft_ultimate_div_mod(&a, &b);
	printf("Updated: a = %d, b =  %d", a, b);
}
