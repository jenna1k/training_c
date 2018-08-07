// * Create a function ft_is_sort which returns 1 if the array is sorted and 0 if it isn’t.

// * The function given as argument should return a negative integer if the first argument
// is lower than the second, 0 if they’re equal or a positive integer for anything else.

// * Here’s how the function should be prototyped :
// int		ft_is_sort(int *tab, int length, int (*f)(int, int))

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;

	i = 1;
	while (i < length)
	{
		if (f(tab[i - 1], tab[i]) > 0)
			return (0);
		i++;
	}
	return (1);
}
