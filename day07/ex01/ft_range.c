/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 14:53:29 by dakim             #+#    #+#             */
/*   Updated: 2018/08/02 14:53:31 by dakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int     *ft_range(int min, int max)
{
    int *number;
    int i;

    i = 0;
    number = (int*)malloc(sizeof(*number) * ((max - min) + 1));
    if (min >= max)
        return (NULL);
    while(min <= max)
    {
        number[i] = min;
        i++;
        min++;
    }
    return (number);
}