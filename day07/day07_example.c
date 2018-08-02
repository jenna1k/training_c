/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   example.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 10:34:46 by dakim             #+#    #+#             */
/*   Updated: 2018/08/02 10:34:48 by dakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// The idea is to define, as a pointer, a variable whose size hasn't been defined yet,
// and that'll just contain the address of a memory area.


#include <stdlib.h>
#define	LEN	42	// to make this string's size vary. define it to 42 bytes.

int	main()
{
	int	i;
	char	*str;		// declare a pointer. a variable str, a pointer of type char*

	str = (char *)malloc(sizeof(*str) * (LEN + 1));	
	// malloc: pass the size that we wish to allocate.

	// sizeof will give us the variable's size, in bytes.
	// sizeof(datatype) sizeof(*variablename)-> don't have to change datatype
	// type *ptr = (type *)malloc(sizeof(*ptr) * (LEN));
	// `char *str = (char *)malloc(sizeof(*str) * (LEN + 1));`
	// `int *nbr = (int *)malloc(sizeof(*nbr) * (LEN));`
	
	// add 1 for "\0". 
	
	i = 0;
	while (i < LEN)
	{
		str[i] = '0' + (i % 10);
		i++;
	}
	str[i] = '\0';
	ft_putstr(str);
	ft_putstr("\n");
	return (0);
}
