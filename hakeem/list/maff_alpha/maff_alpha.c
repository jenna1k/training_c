/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/27 18:28:56 by exam              #+#    #+#             */
/*   Updated: 2018/07/27 18:33:12 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	maff_alpha(void)
{
	int i;
	char u;
	char l;

	i = 1;
	u = 'A';
	l = 'a';
	while (i < 27)
	{
		if (i % 2 == 1)
			ft_putchar(l);
		else
			ft_putchar(u);
		u++;
		l++;
		i++;
	}
	ft_putchar('\n');
}

int		main(void)
{
	maff_alpha();
	return (0);
}
