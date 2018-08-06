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
int		**global_x;
int		global_solution = 0;


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

void	display_numbers(int **numbers)	// take 2d integer array as argument
{
	int x;
	int y;

	x = 0;	// initialize x as 0
	while (x < 9)	// row
	{
		y = 0;
		while (y < 9)	// column
		{
			ft_putchar(numbers[x][y] + '0');	// change integer to character using ascii to print charcataers
			if (y != 8)
				ft_putchar(' ');	// print spaces except last one
			y++;		// (y += 1;) (y = y + 1;)
		}
		ft_putchar('\n');		// new line
		x++;
	}
}

int		**read_numbers(char **argv)		// take 2d character array as argument
{
	int x;
	int y;
	int **numbers;	// 2d integer array

	x = 0;
	numbers = (int **)malloc(sizeof(int *) *9 + 1);	// ?? 2d array
	while (x < 9)		// loop until row reaches 9
	{
		if (ft_strlen(argv[x]) != 9) // if characters are not 9 in one row, return 
			return (0);
		numbers[x] = (int *)malloc(sizeof(int) *9 + 1); // ?? 1d array
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
	int **numbers;		// create 2d array taking integers

	if (argc == 10)		// if number of arguments is 10(1 + 9) (argv[0] is filename)??
	{
		numbers = read_numbers(&argv[1]);	// store value returned from 'read_numbers' into new 2d integer array
		if (!numbers)		// if (numbers == 0)
			write(1, "Error\n", 6);
		else if (global_solution == 0) 	// if solution is 0
		{
			solve_sudoku(numbers, 0);	// find solution (if 'solve_sudoku' function returns true)
			if (global_solution == 1)	// if find only one solution
				display_numbers(global_x);	// display (change integer to character and print it)
			else							// if there are more than one solutions
				write(1, "Error\n", 6);		// Error message
		}
		else								// ??
			write(1, "Error\n", 6);
	}
	else							// argument is not 10
		write(1, "Error\n", 6);
	return (0);
}
