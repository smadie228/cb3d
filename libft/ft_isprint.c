/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtoast <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 16:21:29 by rtoast            #+#    #+#             */
/*   Updated: 2020/11/07 15:31:35 by rtoast           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isprint(int symbol)
{
	if (symbol >= 32 && symbol <= 126)
		return (1);
	return (0);
}
