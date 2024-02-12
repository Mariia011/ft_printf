/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 14:07:53 by marikhac          #+#    #+#             */
/*   Updated: 2024/02/12 20:18:20 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	print_ptr(size_t const nbr, char const *const base)
{
	if (nbr < 16)
	{
		return (print_char(base[nbr]));
	}
	return (print_ptr(nbr / 16, base) + print_ptr(nbr % 16, base));
}

int	print_pointer(size_t const nbr, char const *const base)
{
	return (ft_putstr("0x") + print_ptr(nbr, base));
}
