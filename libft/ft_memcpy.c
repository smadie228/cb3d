/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtoast <rtoast@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 22:52:41 by rtoast            #+#    #+#             */
/*   Updated: 2020/11/08 05:18:20 by rtoast           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*destt;
	unsigned char	*srcc;

	i = 0;
	srcc = (unsigned char *)src;
	destt = (unsigned char *)dest;
	if (n == 0 || srcc == destt)
		return (destt);
	while (i < n)
	{
		destt[i] = srcc[i];
		i++;
	}
	return (destt);
}
