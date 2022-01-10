/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 14:11:09 by aourhzal          #+#    #+#             */
/*   Updated: 2021/12/08 14:51:00 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdarg.h>
#include "ft_printf.h"

void	arg(va_list arg_list, const char *s, int i, int *count)
{
	if (s[i + 1] == '%')
		ft_putchar('%', count);
	if (s[i + 1] == 'c')
		ft_putchar(va_arg(arg_list, int), count);
	if (s[i + 1] == 's')
		ft_putstr(va_arg(arg_list, char *), count);
	if (s[i + 1] == 'p')
		ft_putadd(va_arg(arg_list, void *), count);
	if (s[i + 1] == 'd' || s[i + 1] == 'i')
		ft_putnbr(va_arg(arg_list, int), count);
	if (s[i + 1] == 'u')
		ft_putnbr(va_arg(arg_list, unsigned int), count);
	if (s[i + 1] == 'x')
		ft_puthex(va_arg(arg_list, unsigned int), 'x', count);
	if (s[i + 1] == 'X')
		ft_puthex(va_arg(arg_list, unsigned int), 'X', count);
}

int	ft_printf(const char *s, ...)
{
	int				i;
	static int		count;
	va_list			arg_list;

	i = -1;
	va_start(arg_list, s);
	while (s[++i])
	{
		if (s[i] != '%')
			ft_putchar(s[i], &count);
		else
		{
			arg(arg_list, s, i, &count);
			i++;
		}
	}
	va_end(arg_list);
	return (count);
}
