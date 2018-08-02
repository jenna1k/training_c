/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/28 14:09:05 by dakim             #+#    #+#             */
/*   Updated: 2018/07/28 18:12:48 by dakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0 || nb >= 13)
		return (0);
	result = 1;
	while (nb)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
