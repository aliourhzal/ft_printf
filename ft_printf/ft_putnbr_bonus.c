/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 15:24:12 by aourhzal          #+#    #+#             */
/*   Updated: 2021/12/11 18:06:10 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

void	ft_putnbr_bonus(long nn, int *count, int index)
{
	if (nn < 0)
	{
		ft_putchar_bonus('-', count);
		nn *= -1;
	}
	else if (index)
	{
		if (index == 1)
			*count += write(1, "+", 1);
		if (index == 2)
			*count += write(1, " ", 1);
	}
	if (nn >= 10)
	{
		ft_putnbr_bonus(nn / 10, count, 0);
		ft_putnbr_bonus(nn % 10, count, 0);
	}
	else
	{
		ft_putchar_bonus(nn + 48, count);
	}
}
