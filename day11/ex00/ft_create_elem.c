/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 18:22:05 by dakim             #+#    #+#             */
/*   Updated: 2018/08/07 18:22:07 by dakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list      *ft_create_elem(void *data)
{
    t_list  *res;
    res = (t_list*)malloc(sizeof(*res));
    res->data = data;
    res->next = NULL;
    return (res);
}
