/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtoast <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 16:32:35 by rtoast            #+#    #+#             */
/*   Updated: 2020/10/30 16:34:26 by rtoast           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_tolower(int arg)
{
	if (arg >= 65 && arg <= 90)
		arg = arg + 32;
	return (arg);
}
