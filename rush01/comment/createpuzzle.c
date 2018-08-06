/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   createpuzzle.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dsantos <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 18:28:28 by dsantos           #+#    #+#             */
/*   Updated: 2018/08/04 19:44:51 by dsantos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

extern int		**global_x;
extern int		global_solution;

int		createpuzzle(int **numbers, int row, int col, int value) // (numbers, x, y, i) from solve sudoku function
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (x < 9)
	{
		if ((numbers[x][col] == value) || (numbers[row][x] == value))
			return (0);
		x++;
	}
	x = 0;
	while (y < 3)
	{
		y = 0;
		while (y < 3)
		{
			if (numbers[row - (row % 3) + x][col - (col %3) + y] == value)
				return (0);
			y++;
		}
		x++;
	}
	return (1);	// return TRUE
}

int		save_sudoku(int **p_sudoku)
{
	int x;
	int y;
	int **sudoku;

	sudoku = (int **)malloc(sizeof(int *) * 9 + 1);
	x = 0;
	while (x < 9)
	{
		sudoku[x] = (int *)malloc(sizeof(int) * 9 + 1);
		y = 0;
		while (y < 9)
		{
			sudoku[x][y] = p_sudoku[x][y];
			y++;
		}
		x++;
	}
	global_x = sudoku;
	global_solution++;
	return (1);
}

void		solve_sudoku(int **numbers, int value) // (numbers, 0) from main
{
	int i;
	int x;
	int y;

	i = 1;
	x = value / 9; // row (x, y)
	y = value % 9; // column (x, y)
	if (value == 81 && save_sudoku(numbers))	// if it's end of table
		return ;		// return false which is end of program
	if (numbers [x][y] != 0)	// if it is not (0, 0)
	{
		solve_sudoku(numbers, value + 1);	// recursive
		return ;
	}
	while (i < 10)	// iterative 9 times
	{
		if (createpuzzle(numbers, x, y, i))
		{
			numbers [x][y] = i;
			solve_sudoku(numbers, value + 1);
			numbers[x][y] = 0; // backtracking
		}
		i++;
	}
}
