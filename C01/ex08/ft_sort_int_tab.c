void ft_sort_int_tab(int *tab, int size);

void ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int i;

	i = 0;
	while (i < size)
	{
		if ((tab[i] > tab[i + 1]) && (i + 1) < size)
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
}

/*
#include <stdio.h>
int	main()
{
	int	size = 10;
	int	tab[] = {9, 2, 1, 3, 4, 9, 8, 7, 6, 0};
	int i = 0;
	
	ft_sort_int_tab(tab, size);
	while (i < size)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	return(0);
}
*/
