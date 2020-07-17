/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungoben <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 12:00:20 by sungoben          #+#    #+#             */
/*   Updated: 2020/07/17 12:05:40 by sungoben         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	i = 0;
	while(i < n && src[i] != '0')
	{
		*(dest + i) = *(src + 1);
		i++;
	}	
	while(i < n)
	   *(dest + i++) = '\0';
return dest;	
}
