/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/28 18:38:42 by dakim             #+#    #+#             */
/*   Updated: 2018/07/28 20:25:49 by dakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb >= 13)
		return (0);
	else if (nb == 0 || nb == 1)
		return (1);
	else if (nb > 1)
	{
		nb *= ft_recursive_factorial(nb - 1);
	}
	return (nb);
}
