/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 09:45:24 by dakim             #+#    #+#             */
/*   Updated: 2018/07/31 21:24:32 by dakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int						ft_atoi(char *str)
{
	unsigned long long	number;
	int					i;

	number = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 0 && str[i] <= 47)
			i++;
		else if (*(str + i) >= 48 && *(str + i) < 58)
		{
			number = number + (str[i] - '0');
			number = number * 10;
			i++;
		}
		else
			break ;
	}
	number = number / 10;
	if (str[0] == '-')
	{
		number = number * -1;
	}
	return (number);
}
