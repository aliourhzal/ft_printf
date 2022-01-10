/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags_man.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 20:10:09 by aourhzal          #+#    #+#             */
/*   Updated: 2021/12/13 15:46:00 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

void	ft_skip(const char *s, int *i)
{
	*i += 1;
	while ((s[*i] == ' ' && s[*i + 1] == ' ')
		|| (s[*i] == '+' && s[*i + 1] == '+'))
		*i += 1;
}

void	sharp_flag(va_list arg_list, const char *s, int *i, int *count)
{
	if (s[*i + 1] == 'x')
	{
		ft_puthex_bonus(va_arg(arg_list, unsigned long long), 'x', count, 1);
		*i += 1;
	}
	else if (s[*i + 1] == 'X')
	{
		ft_puthex_bonus(va_arg(arg_list, unsigned long long), 'X', count, 2);
		*i += 1;
	}
	else
		mandatory(arg_list, s, i, count);
}

void	plus_flag(va_list arg_list, const char *s, int *i, int *count)
{
	if (s[*i + 1] == 'd' || s[*i + 1] == 'i')
	{
		ft_putnbr_bonus(va_arg(arg_list, int), count, 1);
		*i += 1;
	}
	else
		mandatory(arg_list, s, i, count);
}

void	space_flag(va_list arg_list, const char *s, int *i, int *count)
{
	if (s[*i + 1] == 'd' || s[*i + 1] == 'i')
	{
		ft_putnbr_bonus(va_arg(arg_list, int), count, 2);
		*i += 1;
	}
	else if (s[*i + 1] == 'u')
	{
		ft_putnbr_bonus(va_arg(arg_list, unsigned int), count, 2);
		*i += 1;
	}
	else
		mandatory(arg_list, s, i, count);
}

void	arg_flags(va_list arg_list, const char *s, int *i, int *count)
{
	if (s[*i + 1] == ' ' || s[*i + 1] == '+')
		ft_skip(s, i);
	if (s[*i] == '#')
		sharp_flag(arg_list, s, i, count);
	if (s[*i] == '+')
		plus_flag(arg_list, s, i, count);
	if (s[*i] == ' ')
		space_flag(arg_list, s, i, count);
}
