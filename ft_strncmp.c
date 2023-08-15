/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:24:18 by sbzizal           #+#    #+#             */
/*   Updated: 2022/11/10 22:35:53 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*so1;
	unsigned char	*so2;
	size_t			i;

	i = 0;
	so1 = (unsigned char *)s1;
	so2 = (unsigned char *)s2;
	while ((so1[i] || so2[i]) && i < n)
	{
		if (so1[i] != so2[i])
			return (so1[i] - so2[i]);
		i++;
	}
	return (0);
}
