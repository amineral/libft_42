/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toberon <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 17:19:15 by toberon           #+#    #+#             */
/*   Updated: 2019/09/23 17:19:16 by toberon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_nbrlen(int n)
{
	int len;

	len = 0;
	while ((n / 10) != 0)
	{
		len++;
		n = n / 10;
	}
	len++;
	return (len);
}
