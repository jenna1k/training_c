/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 15:49:07 by dakim             #+#    #+#             */
/*   Updated: 2018/08/08 15:49:08 by dakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void        ft_list_push_back(t_list **begin_list, void *data)
{
    t_list *list;

    list = *begin_list;
    if(list)
    {
        while(list->next)
            list = list->next;
        list->next = ft_create_elem(data);
    }
    else
        *begin_list = ft_create_elem(data);
}