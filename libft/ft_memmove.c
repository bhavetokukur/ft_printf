/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaziiev <thaziiev@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 16:30:40 by thaziiev          #+#    #+#             */
/*   Updated: 2024/05/25 19:47:28 by thaziiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*tmp;
	const char	*s;

	tmp = dest;
	s = src;
	if (dest < src)
	{
		while (n--)
			*tmp++ = *s++;
	}
	else
	{
		tmp += n;
		s += n;
		while (n--)
			*--tmp = *--s;
	}
	return (dest);
}
