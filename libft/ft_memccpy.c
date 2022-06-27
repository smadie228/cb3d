/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtoast <rtoast@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/07 15:37:31 by rtoast            #+#    #+#             */
/*   Updated: 2020/11/08 05:14:15 by rtoast           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*destt;
	unsigned char	*srcc;

	i = 0;
	srcc = (unsigned char *)src;
	destt = (unsigned char *)dest;
	while (i < n)
	{
		destt[i] = srcc[i];
		if (srcc[i] == (unsigned char)c)
			return (&destt[++i]);
		i++;
	}
	return (NULL);
}
