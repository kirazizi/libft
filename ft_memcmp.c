/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:23:09 by sbzizal           #+#    #+#             */
/*   Updated: 2022/11/12 10:50:53 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*so1;
	unsigned char	*so2;
	size_t			i;

	so1 = (unsigned char *)s1;
	so2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (so1[i] != so2[i])
			return (so1[i] - so2[i]);
		i++;
	}
	return (0);
}
