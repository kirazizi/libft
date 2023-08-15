/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:24:00 by sbzizal           #+#    #+#             */
/*   Updated: 2022/11/12 12:02:39 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;
	size_t	lendst;
	size_t	lendst_2;

	len = ft_strlen(src);
	if (dstsize == 0)
		return (len);
	lendst_2 = ft_strlen(dst);
	lendst = ft_strlen(dst);
	i = 0;
	if (lendst >= dstsize)
		return (len + dstsize);
	while (src && src[i] && (lendst) < dstsize - 1)
	{
		dst[lendst] = src[i];
		lendst++;
		i++;
	}
	dst[lendst] = '\0';
	return (len + lendst_2);
}
