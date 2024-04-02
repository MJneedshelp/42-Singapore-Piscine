
#include<stdio.h>
#include"ft_div_mod.c"

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 42;
	b = 4;
	div = 0;
	mod = 0;
	printf("Original: a = %d, b = %d; div = %d; mod = %d", a, b, div, mod);
	printf("\nRun ft_div_mod\n");
	ft_div_mod(a, b, &div, &mod);
	printf("Updated: div: %d, mod: %d", div, mod);
}
