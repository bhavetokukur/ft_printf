/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaziiev <thaziiev@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:23:44 by thaziiev          #+#    #+#             */
/*   Updated: 2024/05/06 20:32:08 by thaziiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	if (SIZE_MAX / nmemb < size)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	else
		ft_bzero(p, nmemb * size);
	return (p);
}
