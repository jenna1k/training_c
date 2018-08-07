// * Create a function ft_is_sort which returns 1 if the array is sorted and 0 if it isn’t.

// * The function given as argument should return a negative integer if the first argument
// is lower than the second, 0 if they’re equal or a positive integer for anything else.

// * Here’s how the function should be prototyped :
// int		ft_is_sort(int *tab, int length, int (*f)(int, int))

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;

	i = 1;		// why 'i' should start at 1?
	while (i < length)	// while(length) doesn't work
	{
		if (f(tab[i - 1], tab[i]) > 0) 	// i = 0; f(tab[i], tab[i + 1]) > 0 didn't work
			return (0);
		i++;
	}
	return (1);
}
