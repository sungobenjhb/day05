/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungoben <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 11:09:52 by sungoben          #+#    #+#             */
/*   Updated: 2020/07/17 11:56:01 by sungoben         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
char *ft_strcpy(char *dest, char *src)
{
  int i;
  i=0;
  while(src[i] != '\0')
  {
    dest[i]=src[i];
    i++;
  }

  dest[i] = '\0';
  return (dest);
}
int main(void)
{
    char dest[]="test";
    char src[]="test";
    printf("%s\n",ft_strcpy(dest,src));
    return(0);
}

