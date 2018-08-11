/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 21:23:02 by exam              #+#    #+#             */
/*   Updated: 2018/08/10 21:41:41 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_wdmatch(char *str1, char *str2)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	while (str1[i] != '\0' && str2[j] != '\0')
	{
		if (str1[i] == str2[j])
		{
			ft_putchar(str1[i]);
			i++;
			j++;
		}
		else
		{
			j++;
		}
	}
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	if (argc == 3)
	{
		ft_wdmatch(argv[1], argv[2]);
	}
	else
	{
		ft_putchar('\n');
	}
	return (0);
}
