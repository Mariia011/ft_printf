/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:49:30 by marikhac          #+#    #+#             */
/*   Updated: 2024/02/12 20:18:04 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	argc;
	int		i;

	i = 0;
	va_start(argc, str);
	while (*str)
	{
		if (*str == '%')
		{
			i += type_size(argc, *(++str));
			if (!(*str))
				break ;
		}
		else
			i += print_char(*str);
		str++;
	}
	va_end(argc);
	return (i);
}
// int main()
// {
// 	ft_printf("U : sdiuxX%");
// 	printf("\n");
// 	printf("STD : sdiuxX%");
// 	printf("\n");
// 	return (1);
// }
