/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 14:11:09 by aourhzal          #+#    #+#             */
/*   Updated: 2021/12/11 18:01:07 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

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
			ft_putchar_bonus(s[i], &count);
		else
		{
			arg(arg_list, s, &i, &count);
		}
	}
	va_end(arg_list);
	return (count);
}
