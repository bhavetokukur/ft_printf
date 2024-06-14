/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaziiev <thaziiev@student.42london.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 20:40:31 by thaziiev          #+#    #+#             */
/*   Updated: 2024/06/13 18:32:05 by thaziiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>

print_char(char c)
{
	
}

print_format(char specifier, va_list ap)
{
	int count;
	
	count = 0;
	if (specifier == 'c')
		count += print_char(va_arg(ap, int));
}

int ft_printf(const char *format, ...)
{
	va_list	ap;
	int 	count;
	
	va_start(ap, format);
	count = 0;
	while(*format)
	{
		if (*format == '%')
			count += print_format(*(++format), ap);
		else
			count += write(1, format, 1);
		format++;
	}
	return (count);
}

int main()
{
	char ch;

	ch = 'a';
	ft_printf("Printf me %c", ch);
	return (1);
}
