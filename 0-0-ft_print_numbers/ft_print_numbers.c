/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fwuensch <fwuensch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/14 11:55:29 by fwuensch          #+#    #+#             */
/*   Updated: 2017/07/14 11:55:56 by fwuensch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(void)
{
	char c;

	c = '0';
	while (c <= '9')
	{
		write(1, &c, 1);
		c++;
	}
	write(1, "\n", 1);
	return (0);
}
