/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 15:53:30 by dakim             #+#    #+#             */
/*   Updated: 2018/08/02 15:53:32 by dakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int *array;
	int i;
	int diff;

	i = 0;
	diff = max - min;
	array = (int*)malloc(sizeof(*array) * (diff + 1));	// no + 1
	if (min >= max)
	{
		*range = (void *)0;
		return (0);
	}
	while (i < diff)
	{
		array[i] = min;
		i++;
		min++;
	}
	*range = array;
	return (i);
}
