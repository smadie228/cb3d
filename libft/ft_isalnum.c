/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtoast <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 16:01:34 by rtoast            #+#    #+#             */
/*   Updated: 2020/11/06 20:43:00 by rtoast           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isalnum(int arg)
{
	if (arg >= '0' && arg <= '9')
		return (1);
	if ((arg >= 'a' && arg <= 'z') || (arg >= 'A' && arg <= 'Z'))
		return (1);
	return (0);
}
