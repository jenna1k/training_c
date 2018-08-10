/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 18:59:09 by exam              #+#    #+#             */
/*   Updated: 2018/08/03 19:08:27 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		max(int* tab, unsigned int len)
{
	unsigned int i;
	int mx;

	if (len == 0)
		return (0);
	mx = tab[0];
	i = 1;
	while (i < len)
	{
		if (tab[i] > mx)
			mx = tab[i];
		i++;
	}
	return (mx);
}