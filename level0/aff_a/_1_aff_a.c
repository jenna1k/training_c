/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _1_aff_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 20:53:51 by dakim             #+#    #+#             */
/*   Updated: 2018/08/09 21:35:47 by dakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int i;
	char *letter;

	letter = argv[1];
	if (argc != 1)
	{
		write(1, "\n", 1);
	}
	i = 0;
	while (letter[i] != '\0')
	{
		if (letter[i] == 'a')
		{
			write(1, "a", 1);
		}
		else
		{
			write(1, "\n", 1);
		}
	}
	return (0);
}
