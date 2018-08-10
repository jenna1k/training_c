/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 18:23:02 by exam              #+#    #+#             */
/*   Updated: 2018/07/27 18:26:17 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_countdown(void)
{
	char i;

	i = '9';
	while (i >= '0')
	{
		ft_putchar(i);
		i--;
	}
	ft_putchar('\n');
}

int		main(void)
{
	ft_countdown();
	return (0);
}
