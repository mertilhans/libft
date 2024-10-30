/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merilhan <merilhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 03:10:52 by merilhan          #+#    #+#             */
/*   Updated: 2024/10/30 03:15:54 by merilhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *m = (unsigned char*)dest;
    const unsigned char *s = (const unsigned char *)src;
    
    while(n--)
    {
        *m++ = *s++;
    }
    return (dest);
}
#include <stdio.h>
int main()
{
    char src[] = "naber nasil gitmiyo";
    char dest[20];

    ft_memcpy(dest, src,sizeof(src));
    printf("Kopyalanmış veri : %s \n",dest);
    return 0;
}