/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merilhan <merilhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 02:04:13 by merilhan          #+#    #+#             */
/*   Updated: 2024/11/07 18:57:20 by merilhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/_types/_size_t.h>

void	*ft_memset(void *b, int c, size_t n)
{
	unsigned char	*m;

	m = b;
	while (n--)
	{
		*m++ = (unsigned char)c;
	}
	return (b);
}
