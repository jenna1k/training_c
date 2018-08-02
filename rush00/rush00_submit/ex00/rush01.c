/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chkim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/29 08:21:36 by chkim             #+#    #+#             */
/*   Updated: 2018/07/29 14:21:52 by chkim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	part1(int x)
{
	int i;

	ft_putchar('/');
	i = 0;
	while (i < x - 2)
	{
		ft_putchar('*');
		i++;
	}
	ft_putchar('\\');
	ft_putchar('\n');
}

void	part2(int x, int y)
{
	int j;
	int i;

	i = 0;
	while (i < y - 2)
	{
		ft_putchar('*');
		j = 0;
		while (j < x - 2)
		{
			ft_putchar(' ');
			j++;
		}
		ft_putchar('*');
		ft_putchar('\n');
		i++;
	}
	ft_putchar('\\');
}

void	part3(int x)
{
	int i;

	i = 0;
	while (i < x - 2)
	{
		ft_putchar('*');
		i++;
	}
	ft_putchar('/');
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x == 1 && y == 1)
	{
		ft_putchar('o');
		ft_putchar('\n');
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
