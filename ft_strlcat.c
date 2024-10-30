/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merilhan <merilhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 03:30:42 by merilhan          #+#    #+#             */
/*   Updated: 2024/10/30 03:35:44 by merilhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dsize)
{
    size_t destlen;
    size_t srclen;
    size_t i;
    destlen = ft_strlen(dest);
    srclen = ft_strlen(src);

    if (destlen >= dsize) {
        return dsize + srclen; 
    }

    for (i = 0; i < srclen && (destlen + i + 1) < dsize; i++) {
        dest[destlen + i] = src[i]; 
    }
    
    dest[destlen + i] = '\0'; 

    return destlen + srclen; 
}

