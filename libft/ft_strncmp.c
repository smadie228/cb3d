/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtoast <rtoast@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 15:04:35 by rtoast            #+#    #+#             */
/*   Updated: 2020/11/08 10:35:31 by rtoast           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t			i;

	i = 0;
	while (i < n && str1[i] != '\0' && str2[i] != '\0' && str1[i] == str2[i])
		i++;
	if (i != n)
		return ((unsigned char)str1[i] - (unsigned char)str2[i]);
	return (0);
}
