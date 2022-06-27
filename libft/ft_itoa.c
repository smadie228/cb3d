/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtoast <rtoast@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 22:13:05 by rtoast            #+#    #+#             */
/*   Updated: 2020/11/16 12:46:12 by rtoast           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_numsymbol(int n, long long *ne_n, size_t *minus)
{
	size_t	i;

	i = 0;
	if (n < 0)
	{
		*minus = 1;
		*ne_n *= -1;
	}
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char			*ft_itoa(int n)
{
	char		*str;
	size_t		minus;
	size_t		i;
	long long	ne_n;

	minus = 0;
	ne_n = n;
	if (n == 0)
		return (ft_strdup("0"));
	i = ft_numsymbol(n, &ne_n, &minus);
	i += minus;
	if ((str = (char *)malloc((i + 1) * sizeof(char))) == NULL)
		return (NULL);
	str[i] = '\0';
	while (ne_n != 0)
	{
		--i;
		str[i] = (ne_n % 10) + '0';
		ne_n /= 10;
	}
	if (minus == 1)
		str[0] = '-';
	return (str);
}
