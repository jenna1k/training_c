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

int		createpuzzle(int **numbers, int row, int col, int value)
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
	return (1);
}

int		solve_sudoku(int **numbers, int value)
{
	int i;
	int x;
	int y;

	i = 1;
	x = value / 9; // row
	y = value % 9; // column
	if (value == 81)
		return (1);
	if (numbers [x][y] != 0)
		return (solve_sudoku(numbers, value + 1));
	while (i < 10)
	{
		if (createpuzzle(numbers, x, y, i))
		{
			numbers [x][y] = i;
			if (solve_sudoku(numbers, value + 1))
				return (1);
			else
				numbers[x][y] = 0; // backtracking
		}
		i++;
	}
	return (0);
}
