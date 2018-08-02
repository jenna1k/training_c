/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/30 21:29:10 by dakim             #+#    #+#             */
/*   Updated: 2018/07/30 23:46:45 by dakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c);

void		ft_putnbr(int nb)
{
	long int temp;

	temp = nb;
	if (temp < 0)
	{
		temp = -temp;
		ft_putchar('-');
	}
	if (temp > 9)
	{
		ft_putnbr(temp / 10);
		ft_putnbr(temp % 10);
	}
	else
	{
		ft_putchar(temp + '0');
	}
}
