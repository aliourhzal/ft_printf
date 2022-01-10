/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 13:57:27 by aourhzal          #+#    #+#             */
/*   Updated: 2021/12/13 18:18:42 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned long long nb, char x, int *count)
{
	int	i;

	i = 0;
	if (nb >= 16)
	{
		ft_puthex(nb / 16, x, count);
		ft_puthex(nb % 16, x, count);
	}
	else
	{
		if (nb < 10)
			ft_putchar(nb + 48, count);
		else
		{
			if (x == 'x')
				ft_putchar(nb - 10 + 'a', count);
			else
				ft_putchar(nb - 10 + 'A', count);
		}
	}
}
