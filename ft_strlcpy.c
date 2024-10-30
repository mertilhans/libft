/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merilhan <merilhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 03:24:37 by merilhan          #+#    #+#             */
/*   Updated: 2024/10/30 03:30:20 by merilhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dsize)
{
  char *d;
  const char *s;
  size_t i;

  d = dest;
  s = src;
  i = 0;

  if(dsize > 0)
  {
    while(*s && i < (dsize -1))
    {
        *d++ = *s++;
        i++;
    }
    *d = '\0';
  }
  return(ft_strlen(src));
}