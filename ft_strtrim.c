/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:24:29 by sbzizal           #+#    #+#             */
/*   Updated: 2022/11/12 11:34:51 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		len;
	char	*res;
	char	*ss1;
	char	*sset;

	i = 0;
	ss1 = (char *) s1;
	sset = (char *) set;
	if (ss1 && sset)
	{
		len = ft_strlen(ss1);
		while (ss1[i] && ft_strchr(sset, ss1[i]))
				i++;
		while (len > i && ft_strchr(sset, ss1[len - 1]))
				len--;
		res = ft_substr(ss1, i, len - i);
		return (res);
	}
	return (NULL);
}
