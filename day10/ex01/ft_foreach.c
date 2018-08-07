/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 17:51:12 by dakim             #+#    #+#             */
/*   Updated: 2018/08/06 17:51:13 by dakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
// #include <stdio.h>

// void     ft_putnbr(int n)
// {
//     printf("%d,", n);
// }

void        ft_foreach(int *tab, int length, void(*f)(int))
{
    int i;

    i = 0;
    while (i < length)
    {
        f(tab[i]);
        i++;
    }
}

// int     main(void)
// {
//     int tab[] = {1, 2, 3, 4, 5};
//     ft_foreach(tab, 5, &ft_putnbr);

// }
