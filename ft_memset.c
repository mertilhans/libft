/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merilhan <merilhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 02:04:13 by merilhan          #+#    #+#             */
/*   Updated: 2024/10/30 02:39:52 by merilhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stddef.h>

void	*ft_memset(void *b, int c, size_t n)
{
   unsigned char *m = b;
   while(n--)
   {
    *m++ = (unsigned char)c;
   }
   return (b);
}
#include <stdio.h>
int main()
{
    char array[10];
    ft_memset(array, 'X', 5);
    for(int i = 0; i < 10; i++)
        printf("%c",array[i]);
    return 0;
}
