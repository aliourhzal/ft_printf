/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 15:24:12 by aourhzal          #+#    #+#             */
/*   Updated: 2021/12/08 14:02:55 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(long nn, int *count)
{
	if (nn < 0)
	{
		ft_putchar('-', count);
		nn *= -1;
	}
	if (nn >= 10)
	{
		ft_putnbr(nn / 10, count);
		ft_putnbr(nn % 10, count);
	}
	else
	{
		ft_putchar(nn + 48, count);
	}
}
