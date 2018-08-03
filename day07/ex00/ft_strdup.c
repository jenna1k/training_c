/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 11:56:58 by dakim             #+#    #+#             */
/*   Updated: 2018/08/02 14:48:42 by dakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>		// malloc
#include <string.h>		// strdup ..?

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')		// 문자열 끝을 만날때까지 루핑
	{
		dest[i] = src[i];	// 담기
		i++;			// 돌기
	}
	dest[i] = '\0';			// 문자열 끝 붙이기
	return (dest);			// 문자열 
}

char	*ft_strdup(char *src)
{
	char *str;

	str = (char *)malloc(sizeof(*str));
	ft_strcpy(str, src);
	return (str);
}
