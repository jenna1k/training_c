/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _1_aff_last_param.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 22:16:06 by dakim             #+#    #+#             */
/*   Updated: 2018/08/09 22:46:29 by dakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	if (argc > 2)
		ft_putchar('\n');
	else
		ft_aff_last_param(argv[argc - 1]);
	return (0);
}
