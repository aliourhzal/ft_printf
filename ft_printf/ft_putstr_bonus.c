/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 15:20:03 by aourhzal          #+#    #+#             */
/*   Updated: 2021/12/11 18:00:11 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_bonus.h"

void	ft_putstr_bonus(char *str, int *count)
{
	int	i;

	i = 0;
	if (str)
	{
		while (str[i] != '\0')
		{
			write (1, &str[i], 1);
			*count += 1;
			i++;
		}
	}
	else
	{
		write(1, "(null)", 6);
		*count += 6;
	}
}
