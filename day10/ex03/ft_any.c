/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 22:40:57 by dakim             #+#    #+#             */
/*   Updated: 2018/08/06 22:41:01 by dakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// int		starts_with_z(char *str)
// {
// 	return (str[0] == 'z');
// }

int		ft_any(char **tab, int (*f)(char*))
{
	int i;

	i = 0;
	while (tab[i] != '\0')
	{
		if ((*f)(tab[i]) == 1)
			return (1);
		i++;
	}
	return (0);
}

// int		main(int argc, char **argv)
// {
// 	if (argc == 2)
// 		printf("%d", ft_any(argv + 1, starts_with_z));
// 	return (1);
// }
