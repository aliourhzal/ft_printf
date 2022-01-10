/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 15:20:03 by aourhzal          #+#    #+#             */
/*   Updated: 2021/12/08 14:10:26 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *str, int *count)
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
