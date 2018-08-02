/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 19:58:09 by dakim             #+#    #+#             */
/*   Updated: 2018/08/01 19:58:11 by dakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char c)
{
    write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	while (i > 0)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		i--;
		ft_putchar('\n');
	}
	return (0);
}