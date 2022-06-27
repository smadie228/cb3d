/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtoast <rtoast@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 20:04:53 by rtoast            #+#    #+#             */
/*   Updated: 2020/11/16 13:19:46 by rtoast           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

static int		ft_strcompar(char s, char const *set)
{
	int k;

	k = 0;
	while (set[k] != '\0')
	{
		if (set[k] == s)
			return (1);
		else
			k++;
	}
	return (0);
}

static int		f1(char const *s1, char const *set, int *i)
{
	int		begin;

	begin = 0;
	while (s1[*i] != '\0')
	{
		if (ft_strcompar(s1[*i], set) != 1)
		{
			begin = *i;
			break ;
		}
		(*i)++;
	}
	return (begin);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		begin;
	int		end;

	i = 0;
	begin = 0;
	end = -1;
	if (s1 == NULL || set == NULL)
		return (NULL);
	begin = f1(s1, set, &i);
	while (s1[i] != '\0')
		i++;
	while (--i != begin)
		if (ft_strcompar(s1[i], set) != 1)
		{
			end = i;
			break ;
		}
	return (ft_substr(s1, begin, end - begin + 1));
}
