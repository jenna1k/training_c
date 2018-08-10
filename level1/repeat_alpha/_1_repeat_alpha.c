/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _1_repeat_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/10 16:30:59 by dakim             #+#    #+#             */
/*   Updated: 2018/08/10 16:38:35 by dakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ft_repeat_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] == str[i - 1])
		{
			ft_putchar(1, str[i], 1);
			i++;
		}


}

int		main(int argc, char **argv)
{
	if (argc < 2)
	{
		ft_putchar('\n');
	}
	else
	{
		ft_repeat_alpha(argv[1]);
	}
	return (0);
}
