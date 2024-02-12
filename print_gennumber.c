/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_gennumber.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/10 17:41:50 by marikhac          #+#    #+#             */
/*   Updated: 2024/02/12 20:17:31 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_generic_number(unsigned int n, char const *base)
{
	size_t	base_len;

	base_len = ft_strlen(base);
	if (n < base_len)
		return (print_char(base[n]));
	return (print_generic_number(n / base_len, base) + print_generic_number(n
			% base_len, base));
}
