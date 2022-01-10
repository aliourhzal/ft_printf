/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argument_man.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 19:47:34 by aourhzal          #+#    #+#             */
/*   Updated: 2021/12/13 15:50:45 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

void	mandatory(va_list arg_list, const char *s, int *i, int *count)
{
	if (s[*i + 1] == '%')
		ft_putchar_bonus('%', count);
	if (s[*i + 1] == 'c')
		ft_putchar_bonus(va_arg(arg_list, int), count);
	if (s[*i + 1] == 's')
		ft_putstr_bonus(va_arg(arg_list, char *), count);
	if (s[*i + 1] == 'p')
		ft_putadd_bonus(va_arg(arg_list, void *), count);
	if (s[*i + 1] == 'd' || s[*i + 1] == 'i')
		ft_putnbr_bonus(va_arg(arg_list, int), count, 0);
	if (s[*i + 1] == 'u')
		ft_putnbr_bonus(va_arg(arg_list, unsigned int), count, 0);
	if (s[*i + 1] == 'x')
		ft_puthex_bonus(va_arg(arg_list, unsigned long long), 'x', count, 0);
	if (s[*i + 1] == 'X')
		ft_puthex_bonus(va_arg(arg_list, unsigned long long), 'X', count, 0);
	*i += 1;
}

void	arg(va_list arg_list, const char *s, int *i, int *count)
{
	if (s[*i + 1] == '#' || s[*i + 1] == ' ' || s[*i + 1] == '+')
	{
		*i += 1;
		arg_flags(arg_list, s, i, count);
	}
	else
		mandatory(arg_list, s, i, count);
}
