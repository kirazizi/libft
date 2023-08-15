/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:24:33 by sbzizal           #+#    #+#             */
/*   Updated: 2022/11/12 11:22:41 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_len(const char *s, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len && s[i])
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	size_t			newlen;

	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	newlen = ft_len(s + start, len);
	sub = ft_calloc(newlen + 1, sizeof(char));
	if (sub != NULL)
		ft_strlcpy(sub, s + start, newlen + 1);
	return (sub);
}
