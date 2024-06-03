/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaziiev <thaziiev@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:24:32 by thaziiev          #+#    #+#             */
/*   Updated: 2024/05/16 13:23:33 by thaziiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int				i;
	char			*sub;
	size_t			new_len;
	unsigned int	slen;

	i = 0;
	slen = ft_strlen(s);
	if (!s || slen < start)
		return (ft_strdup(""));
	new_len = ft_strlen(s + start);
	if (new_len < len)
		len = new_len;
	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	while (len)
	{
		sub[i] = s[start];
		i++;
		start++;
		len--;
	}
	sub[i] = '\0';
	return (sub);
}
