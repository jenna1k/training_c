/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 19:11:03 by exam              #+#    #+#             */
/*   Updated: 2018/08/03 19:31:45 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	*ft_lower(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			s[i] = (s[i] - 'A') + 'a';
		}
		i++;
	}
	return (s);
}

char *ft_caps(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\0')
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] = (s[i] -'a') + 'A';
		i++;
	}
	return (s);
}

int		main(int argc, char **argv)
{
	int i;
	int ind;

	ind = 1;
	if (argc == 1)
		ft_putchar('\n');
	else
	{
		while (ind < argc)
		{
			i = 0;
			argv[ind] = ft_lower(argv[ind]);
			argv[ind] = ft_caps(argv[ind]);
			while (argv[ind][i] != '\0')
			{
				ft_putchar(argv[ind][i]);
				i++;
			}
			ft_putchar('\n');
			ind++;
		}
	}
}
