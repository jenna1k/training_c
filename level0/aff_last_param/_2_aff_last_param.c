/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _2_aff_last_param.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 22:47:41 by dakim             #+#    #+#             */
/*   Updated: 2018/08/09 22:52:01 by dakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ft_aff_last_param(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
	return (*str);
}

int		main(int argc, char **argv)
{
	if (argc < 2)
		ft_putchar('\n');
	else
	{
		ft_aff_last_param(argv[argc - 1]);
		ft_putchar('\n');
	}
	return (0);
}
