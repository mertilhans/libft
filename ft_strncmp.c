/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merilhan <merilhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 03:40:03 by merilhan          #+#    #+#             */
/*   Updated: 2024/10/30 03:43:09 by merilhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)

{
    size_t i;

    i = 0;

    if(n == 0)
        return (0);
    while((s1[i] && s2[i]) && s1[i] & s2[i] && i < n -1)
        i++;
    return((unsigned char)s1[i] - (unsigned char)s2[i]);  
}