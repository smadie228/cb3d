/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtoast <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/30 16:26:41 by rtoast            #+#    #+#             */
/*   Updated: 2020/10/30 16:31:44 by rtoast           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_toupper(int arg)
{
	if (arg >= 97 && arg <= 122)
		arg = arg - 32;
	return (arg);
}
