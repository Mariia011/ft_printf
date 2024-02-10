/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_size.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 19:54:30 by marikhac          #+#    #+#             */
/*   Updated: 2024/02/10 20:25:30 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


 #include "ft_printf.h"

int type_size(va_list argc, char type)
{
	if (type == 'c')
		return (print_char(va_arg(argc, int)));
	else if (type == 's')
	 	return (print_string(va_arg(argc, char *)));
//	else if (type == 'p')
//	 	return (print_ptr(argc));
	else if (type == 'd' || type == 'i' || type == 'u')
		return (print_number(va_arg(argc, int)));
	else if (type == 'x')
	 	return (print_generic_number(va_arg(argc, int), "0123456789abcdef"));
	/else if (type == 'X')
	 	return (print_generic_number(va_arg(argc, int), "0123456789ABCDEF"));
	return (1);
}
