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

int main(void)
{
	char str1[] = "Hello";

	ft_putstr(str1);
	ft_putchar('\n');
	return (0);
}
