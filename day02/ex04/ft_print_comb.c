/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 16:50:15 by dakim             #+#    #+#             */
/*   Updated: 2018/07/26 22:28:00 by dakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c);

void		ft_print_comb(void)
{
	int		x;
	char	i;
	char	j;
	char	k;

	x = 011;
	while (x++ < 789)
	{
		i = x / 100;
		j = x % 100 / 10;
		k = (x % 10) % 10;
		if (i < j && j < k)
		{
			ft_putchar('0' + i);
			ft_putchar('0' + j);
			ft_putchar('0' + k);
			if (i != 7)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
	ft_putchar('\n');
}
