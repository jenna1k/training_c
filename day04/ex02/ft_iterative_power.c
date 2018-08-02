/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/28 20:28:32 by dakim             #+#    #+#             */
/*   Updated: 2018/07/28 22:07:35 by dakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int result;
	int i;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	result = 1;
	i = 1;
	while (i <= power)
	{
		result *= nb;
		i++;
	}
	return (result);
}
