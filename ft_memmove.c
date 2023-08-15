/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:23:17 by sbzizal           #+#    #+#             */
/*   Updated: 2022/11/09 22:54:01 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*sr;
	char	*ds;

	if (!dst && !src)
		return (0);
	sr = (char *)src;
	ds = (char *)dst;
	if (sr > ds)
		ft_memcpy(ds, sr, len);
	else
	{
		while (len-- > 0)
		{
			ds[len] = sr[len];
		}
	}
	return (ds);
}
