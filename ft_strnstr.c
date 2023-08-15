/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbzizal <sbzizal@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:24:22 by sbzizal           #+#    #+#             */
/*   Updated: 2022/11/10 22:35:19 by sbzizal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char	*haystack, const char	*needle, size_t	len)
{
	size_t	needle_s;
	size_t	i;
	char	*haystack1;

	haystack1 = (char *)haystack;
	i = 0;
	needle_s = ft_strlen(needle);
	if (needle_s == 0)
		return (haystack1);
	if (!haystack && !len)
		return (NULL);
	else if (!len)
		return (NULL);
	while (haystack1[i] != '\0' && len)
	{
		if (ft_strncmp(&haystack1[i], needle, needle_s) == 0 && needle_s <= len)
			return (&haystack1[i]);
		else
			i++;
		len--;
	}
	return (NULL);
}
