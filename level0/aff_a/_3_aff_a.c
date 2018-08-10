/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _3_aff_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 21:49:52 by dakim             #+#    #+#             */
/*   Updated: 2018/08/09 21:58:41 by dakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

char		ft_aff_a(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 'a')
			ft_putchar('a');
		i++;
	}
	ft_putchar('\n');
	return (*str);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		ft_aff_a(argv[1]);
	else
	{
		ft_putchar('a');
		ft_putchar('\n');
	}
	return (0);
}
