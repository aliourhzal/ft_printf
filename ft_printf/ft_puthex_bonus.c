/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 13:57:27 by aourhzal          #+#    #+#             */
/*   Updated: 2021/12/13 15:55:51 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

void	about_flag(int *index)
{
	if (*index == 1)
	{
		write(1, "0x", 2);
		*index = 0;
	}
	if (*index == 2)
	{
		write(1, "0X", 2);
		*index = 0;
	}
}

void	ft_puthex_bonus(unsigned int nb, char x, int *count, int index)
{
	int	i;

	i = 0;
	if (index != 0 && nb != 0)
	{
		about_flag(&index);
		*count += 2;
	}
	if (nb >= 16)
	{
		ft_puthex_bonus(nb / 16, x, count, index);
		ft_puthex_bonus(nb % 16, x, count, index);
	}
	else
	{
		if (nb < 10)
			ft_putchar_bonus(nb + 48, count);
		else
		{
			if (x == 'x')
				ft_putchar_bonus(nb - 10 + 'a', count);
			else
				ft_putchar_bonus(nb - 10 + 'A', count);
		}
	}
}
