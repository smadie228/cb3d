/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtoast <rtoast@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 08:22:30 by rtoast            #+#    #+#             */
/*   Updated: 2020/11/09 16:23:52 by rtoast           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t numb, size_t size)
{
	char	*str;

	str = (char *)malloc(numb * size);
	if (str == NULL)
		return (NULL);
	ft_bzero(str, (numb * size));
	return (str);
}
