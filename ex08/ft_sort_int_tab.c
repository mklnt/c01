#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

int	main(void)
{
	int	tab[] = {1, 4, 3, 5, 2};
	int	a;

	a = 0;
	ft_sort_int_tab(tab, 5);
        while (tab[a] !='\0')
	{
		printf("%d ", tab[a]);
		a ++;
	}
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	min;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		min = i;
		j = i + 1;
		while(j < size)
		{
			if (tab[j] < tab[min])
				min = j;
			j ++;
		}
		temp = tab[i];
		tab[i] = tab[min];
		tab[min] = temp;
		i ++;
	}
}
