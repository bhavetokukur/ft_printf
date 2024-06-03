/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaziiev <thaziiev@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 13:09:35 by thaziiev          #+#    #+#             */
/*   Updated: 2024/05/07 15:47:09 by thaziiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char			*dest_cpy;

	dest_cpy = dest;
	while (n--)
	{
		*(char *)dest++ = *(char *)src++;
	}
	return (dest_cpy);
}
