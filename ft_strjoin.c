/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:23:57 by sbzizal           #+#    #+#             */
/*   Updated: 2022/11/12 11:10:09 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*src;

	if (s1 && s2)
	{
		src = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
		if (!src)
			return (NULL);
		i = -1;
		while (s1[++i])
			src[i] = s1[i];
		i = -1;
		while (s2[++i])
			src[ft_strlen(s1) + i] = s2[i];
		src[ft_strlen(s1) + i] = '\0';
		return (src);
	}
	return (NULL);
}
