/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 16:13:19 by aourhzal          #+#    #+#             */
/*   Updated: 2021/12/13 18:19:52 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>

void	ft_putchar(int c, int *count);
void	ft_putnbr(long nn, int *count);
void	ft_putstr(char *str, int *count);
void	ft_puthex(unsigned long long nb, char x, int *count);
void	ft_putadd(void *ptr, int *count);
int		ft_printf(const char *s, ...);

#endif