#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[] = {1, 2, 3, 4, 5};
	int	a;

	a = 0;
	while (tab[a] !='\0')
	{
		printf("%d ", tab[a]);
		a ++;
	}
	ft_rev_int_tab(tab, 5);
	printf("\n");
	a = 0;
	while (tab[a] !='\0')
	{
		printf("%d ", tab[a]);
		a ++;
	}
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	buffer;

	i = 0;
	size = size - 1;
	while (i <= size/2)
	{
		buffer = tab[i];
		tab[i] = tab[size -i];
		tab[size - i] = buffer;
		i ++;
	}
}
