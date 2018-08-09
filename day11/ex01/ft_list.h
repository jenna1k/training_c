/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 18:21:49 by dakim             #+#    #+#             */
/*   Updated: 2018/08/07 18:21:51 by dakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifdef FT_LIST
# define FT_LIST

typedef struct s_list
{
	struct s_list *next;
	void *data;
}			 	t_list;

t_list      *ft_create_elem(void *data);

#endif