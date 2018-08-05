/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 18:59:18 by dsantos           #+#    #+#             */
/*   Updated: 2018/08/04 19:42:55 by dsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int		solve_sudoku(int **x, int y);		// call function from createpuzzle.c

void	ft_putchar(char c)		// function for print character data type
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)		// function for counting number of characters from string
{
	int i;

	i = 0;
	while (str[i])		// same with while (str[i] != '\0')
		i++;
	return (i);			// return counted number
}

void	display_numbers(int **numbers)	// take 2d array as argument
{
	int x;
	int y;

	x = 0;	// initialize x as 0
	while (x < 9)
	{
		y = 0;
		while (y < 9)
		{
			ft_putchar(numbers[x][y] + '0');	// change integer to character using ascii to print charcataers
			if (y != 8)
				ft_putchar(' ');
			y++;
		}
		ft_putchar('\n');
		x++;
	}
}

int		**read_numbers(char **argv)		// take 2d array as argument
{
	int x;
	int y;
	int **numbers;	// 2d array

	x = 0;
	numbers = (int **)malloc(sizeof(int *) *9 + 1);	// ??
	while (x < 9)		// loop until row reaches 9
	{
		if (ft_strlen(argv[x]) != 9)
			return (0);
		numbers[x] = (int *)malloc(sizeof(int *) *9 + 1);
		y = 0;
		while (y < 9)		// loop until column reaches 9
		{
			if (argv[x][y] == '.')		// replace . to 0
				numbers[x][y] = 0;
			else if (argv [x][y] >= '1' && argv[x][y] <= '9') // if it is number (1~9)
				numbers[x][y] = argv[x][y] - '0'; // store the value as integer (change it from characters to interger using ascii)
			else
				return(0);
			y++;	// loop all the columns in A row
		}
		x++;	// loop all the row
	}
	return (numbers);	// return 2d array
}

int		main(int argc, char **argv)
{
	int **numbers;		// create 2d array taking integer

	if (argc == 10)		// if number of arguments is 10(1 + 9) (argv[0] is filename)
	{
		numbers = read_numbers(&argv[1]);	// store value returned from function
		if (!numbers)
			write(1, "Error\n", 6);
		else if (solve_sudoku(numbers, 0))	
			display_numbers(numbers);
		else
			write(1, "Error\n", 6);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
