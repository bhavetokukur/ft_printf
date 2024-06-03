/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaziiev <thaziiev@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:23:56 by thaziiev          #+#    #+#             */
/*   Updated: 2024/05/01 21:35:25 by thaziiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memchr(const void *b, int c, size_t len)
{
	unsigned char	*p;
	unsigned char	ch;

	p = (unsigned char *)b;
	ch = (unsigned char)c;
	while (len--)
	{
		if (*p == ch)
			return ((char *)p);
		p++;
	}
	return (NULL);
}

// int main () {
//    const char str[] = "https://www.tutorialspoint.com";
//    const char ch = '.';
//    char *ret;

//    ret = ft_memchr(str, ch, strlen(str));

//    printf("String after |%c| is - |%s|\n", ch, ret);

//    return(0);
// }