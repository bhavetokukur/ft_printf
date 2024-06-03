/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaziiev <thaziiev@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 16:05:22 by thaziiev          #+#    #+#             */
/*   Updated: 2024/06/03 21:16:54 by thaziiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_digits(int n)
{
	int	len;

	len = 1 + (n < 0);
	while (n / 10)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;

	len = count_digits(n);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[0] = '-';
	if (n == 0)
		str[0] = '0';
	str[len] = 0;
	while (n != 0)
	{
		if (n < 0)
			str[--len] = (n % 10) * (-1) + 48;
		else
			str[--len] = n % 10 + 48;
		n = n / 10;
	}
	return (str);
}
