/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_size.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 19:54:30 by marikhac          #+#    #+#             */
/*   Updated: 2024/02/09 20:57:45 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int type_size(t_list argc, char type)
{
	int	i;

	i = 0;
	if (type == 'c')
		return (i + print_char(argc));
	else if (type == 's')
		return (i + print_string(argc));
	else if (type == 'p')
		return (i + print_ptr(argc));
	else if (type == 'd' || type == 'i')
		return (i + print_number(argc));
	else if (type == 'u')
		return (i + print_u(argc));
	else if (type == 'x' || type == 'X')
		return (i + print_number(argc));
	return (1);
}
