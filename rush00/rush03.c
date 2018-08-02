/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/29 14:35:49 by dakim             #+#    #+#             */
/*   Updated: 2018/07/29 14:47:32 by dakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	ft_putchar('C');
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
	ft_putchar('A');
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
