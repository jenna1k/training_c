/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chkim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/29 12:30:16 by chkim             #+#    #+#             */
/*   Updated: 2018/07/29 13:11:35 by chkim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	part1(int x)
{
	int i;

	ft_putchar('A');
	i = 0;
	while (i < x - 2)
	{
		ft_putchar('B');
		i++;
	}
	ft_putchar('A');
	ft_putchar('\n');
}

void	part2(int x, int y)
{
	int j;
	int i;

	i = 0;
	while (i < y - 2)
	{
		ft_putchar('B');
		j = 0;
		while (j < y - 2)
		{
			ft_putchar(' ');
			j++;
		}
		ft_putchar('B');
		ft_putchar('\n');
		i++;
	}
	ft_putchar('C');
}

void	part3(int x)
{
	int i;

	i = 0;
	while (i < x - 2)
	{
		ft_putchar('B');
		i++;
	}
	ft_putchar('C');
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x == 1 && y == 1)
	{
		ft_putchar('A');
		ft_putchar(' ');
	}
	else if (x == 0 && y == 0)
		return ;
	else if (x == 0 || y == 0)
		return ;
	else
	{
		part1(x);
		part2(x, y);
		part3(x);
	}
}
