/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtoast <rtoast@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 18:58:35 by rtoast            #+#    #+#             */
/*   Updated: 2020/11/15 17:55:51 by rtoast           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	count;
	size_t	i;
	size_t	res;

	count = 0;
	i = ft_strlen(dst);
	res = ft_strlen(src) + i;
	if (size <= i)
		return (ft_strlen(src) + size);
	while (src[count] != '\0' && i < size - 1)
	{
		dst[i] = src[count];
		i++;
		count++;
	}
	dst[i] = '\0';
	return (res);
}
