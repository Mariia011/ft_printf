/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 16:49:30 by marikhac          #+#    #+#             */
/*   Updated: 2024/02/09 20:48:46 by marikhac         ###   ########.fr       */
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
			i += type_size(argc, ft_strchr(str, "cspdiuxX%"));
		}
		str++;
		i++;
	}
	va_end(argc);
	return (1);
}
