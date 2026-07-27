void ft_rev_int_tab(int *tab, int size);

void ft_rev_int_tab(int *tab, int size)
{
	int	temp[size];
	int	i;

	i = 0;

	while (i < size)
	{
		temp[i] = tab[i];
		i++;
	}
	i = 0;
	while (size > 0)
	{	
		size--;
		tab[i] = temp[size];
		i++;
	}
}

/*
#include <stdio.h>
int	main()
{
	int	size = 10;
	int	tab[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int i = 0;
	
	ft_rev_int_tab(tab, size);
	while (i < size)
	{
		printf("%d\n", tab[i]);
		i++;
	}
	return(0);
}
*/
