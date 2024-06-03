/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaziiev <thaziiev@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:24:35 by thaziiev          #+#    #+#             */
/*   Updated: 2024/05/07 14:26:44 by thaziiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	len_little;
	size_t	len_big;

	len_little = ft_strlen(little);
	len_big = ft_strlen(big);
	if (!len_little)
		return ((char *)big);
	if (!len_big)
		return (NULL);
	while (len >= len_little)
	{
		len--;
		if (!ft_memcmp(big, little, len_little))
			return ((char *)big);
		big++;
	}
	return (NULL);
}
