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
// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>

// int		addfive(int n)
// {
// 	return(n + 5);
// }

int     *ft_map(int *tab, int length, int(*f)(int))
{
	int i;
	int *array;

	i = 0;
	array = malloc(sizeof(int) * length);
	while (i < length)
	{
		array[i] = f(tab[i]);
		i++;

	}

	return (array);
}

// int     main(void)
// {
// 	int i;
// 	int array[] = {5, 10, 15};

// 	i = 0;
// 	int *arr = ft_map(array, 3, &addfive);
// 	while (i < 3)
// 	{
// 		printf("%d", arr[i]);
// 		i++;
// 	}
// 	return (0);
// }
