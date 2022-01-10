/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadd_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 15:02:25 by aourhzal          #+#    #+#             */
/*   Updated: 2021/12/11 18:04:46 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

void	int_to_hex(unsigned long long nb, int *count)
{
	int	i;

	i = 0;
	if (nb >= 16)
	{
		int_to_hex(nb / 16, count);
		int_to_hex(nb % 16, count);
	}
	else
	{
		if (nb < 10)
			ft_putchar_bonus(nb + 48, count);
		else
		{
			ft_putchar_bonus(nb - 10 + 'a', count);
		}
	}
}

void	ft_putadd_bonus(void *ptr, int *count)
{
	*count += write(1, "0x", 2);
	int_to_hex((unsigned long long)ptr, count);
}
