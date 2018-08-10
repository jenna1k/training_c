/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _2_aff_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 21:35:55 by dakim             #+#    #+#             */
/*   Updated: 2018/08/09 21:49:44 by dakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ft_aff_a(char *letter)
{
	int i;

	i = 0;
	while (letter[i] != '\0')
	{
		if (letter[i] == 'a')
		{
			ft_putchar("a");
		}
		i++;
		else
		{
			ft_putchar("\n");
		}
	}
	return (*letter)
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_aff_a(argv[1]);
	}
	if (argc == 1)
	{
		ft_putchar("a");
	}
	return (0);
}
