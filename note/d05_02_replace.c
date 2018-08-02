void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}

void	replace_first_h_with_y(char *str)
{
	str[0] = 'y';
}

int main(void)
{
	char str1[] = "Hello";
	
	ft_putstr(str1);
	ft_putchar('\n');

	replace_first_h_with_y(str1);
	ft_putstr(str1);
	ft_putchar('\n');
	return (0);
}
