/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: merilhan <merilhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 03:10:52 by merilhan          #+#    #+#             */
/*   Updated: 2024/11/07 18:56:46 by merilhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/_types/_null.h>
#include <sys/_types/_size_t.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*m;
	const unsigned char	*s = (const unsigned char *)src;

	m = (unsigned char *)dest;
	if (m == NULL && s == NULL)
		return (0);
	while (n--)
		*m++ = *s++;
	return (dest);
}
