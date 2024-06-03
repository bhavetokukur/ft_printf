/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaziiev <thaziiev@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:24:34 by thaziiev          #+#    #+#             */
/*   Updated: 2024/05/01 21:57:24 by thaziiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*last;

	last = NULL;
	while (*s)
	{
		if (*s == (unsigned char)c)
		{
			last = (char *)s;
		}
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (last);
}

// int main(void)
// {
//     char *p;
//     char *s = "foobbbir";

//     p = ft_strrchr(s, 'b');
//     // p = strrchr(s, 'o');
//     printf("%s\n", p);

// }