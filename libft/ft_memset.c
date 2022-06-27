/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtoast <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 22:27:04 by rtoast            #+#    #+#             */
/*   Updated: 2020/11/07 15:35:27 by rtoast           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t				i;
	unsigned char		*pointer;

	i = 0;
	pointer = (unsigned char *)s;
	while (i < n)
	{
		pointer[i] = c;
		i++;
	}
	return (pointer);
}
