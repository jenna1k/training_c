/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dakim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 16:13:43 by dakim             #+#    #+#             */
/*   Updated: 2018/08/04 16:13:44 by dakim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// A C program to match wild card characters
// In software, a wildcard character is a kind of placeholder

#include <stdio.h>
 
// The main function that checks if two given strings
// match. The s1 string may contain wildcard characters
int match(char *s1, char *s2)
{
    // If we reach at the end of both strings, we are done
    if (*s1 == '\0' && *s2 == '\0')
        return (1);
 
    // Make sure that the characters after '*' are present
    // in s2 string. This function assumes that the s1
    // string will not contain two consecutive '*'
    if (*s1 == '*' && *(s1+1) != '\0' && *s2 == '\0')
        return (0);
 
    // If the s1 string contains '?', or current characters
    // of both strings match
    if (*s1 == '?' || *s1 == *s2)
        return (match(s1+1, s2+1));
 
    // If there is *, then there are two possibilities
    // a) We consider current character of s2 string
    // b) We ignore current character of s2 string.
    if (*s1 == '*')
        return (match(s1+1, s2) || match(s1, s2+1));
    return (0);
}
