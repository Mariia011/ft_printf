/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marikhac <marikhac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 14:42:52 by marikhac          #+#    #+#             */
/*   Updated: 2024/02/10 19:45:04 by marikhac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdarg.h>
#include "./libft/libft.h"

int type_size(va_list argc, char type);
int print_char(char c);
int	ft_printf(const char *str, ...);
int print_string(char *str);
int print_number (int n);
int print_generic_number(unsigned int n, char const *base);

# endif
