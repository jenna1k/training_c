/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 18:08:46 by exam              #+#    #+#             */
/*   Updated: 2018/08/03 18:19:20 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *a)
{
	int i;

	i = 0;
	while (a[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *s1, char *s2)
{
	int		i;
	
	if (ft_strlen(s2) > ft_strlen(s1))
		return (0);
	i = 0;
	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
