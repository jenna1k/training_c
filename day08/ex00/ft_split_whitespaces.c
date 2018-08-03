/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 23:35:07 by dakim             #+#    #+#             */
/*   Updated: 2018/08/02 23:50:21 by dakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int                space_check(char c)
{
    return (c == ' ' || c == '\t' || c == '\v' || c == '\n');
}

int                count_string(char *str)
{
    int        length;
    int        i;

    length = 0;
    i = 0;
    while (str[i] != '\0')
    {
        while (space_check(str[i]) && str[i] != '\0')
            i++;
        if (str[i] != '\0')
            length++;
        while (!space_check(str[1]) && str[i] != '\0')
            i++;
    }
    return (length);
}

int                copy_string(int i, int j, char *str, char **arr)
{
    int        k;

    k = 0;
    while (!space_check(str[i]) && str[i] != '\0')
    {
        arr[j][k] = str[i];
        i++;
        k++;
    }
    arr[j][k] = '\0';
    return (i);
}

char            **ft_split_whitespaces(char *str)
{
    char        **arr;
    int            word_num;
    int            i;
    int            j;
    int            line;

    word_num = count_string(str);
    arr = (char**)malloc(sizeof(char*) * (word_num + 1));
    i = 0;
    j = 0;
    line = 0;
    while (str[i] != '\0')
    {
        while (space_check(str[i]) && str[i] != '\0')
            i++;
        j = i;
        while (!space_check(str[j]) && str[j] != '\0')
            j++;
        arr[line] = (char*)malloc(sizeof(**arr) * (j - i + 1));
        i = copy_string(i, line, str, arr);
        if (line < word_num)
            line++;
    }
    arr[line] = 0;
    return (arr);
}
