/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 19:09:01 by dakim             #+#    #+#             */
/*   Updated: 2018/08/06 19:09:02 by dakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     *ft_map(int *tab, int length, int(*f)(int))
{
    int *array;

    array = (*int)malloc(sizeof(*tab) + 1); // or length or without adding 1
    *array = f(array);

    return (array);
}
