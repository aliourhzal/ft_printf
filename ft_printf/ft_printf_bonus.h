/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/05 16:13:19 by aourhzal          #+#    #+#             */
/*   Updated: 2021/12/13 15:52:24 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_BONUS_H
# define FT_PRINTF_BONUS_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

void	ft_putchar_bonus(int c, int *count);
void	ft_putnbr_bonus(long nn, int *count, int index);
void	ft_putstr_bonus(char *str, int *count);
void	ft_puthex_bonus(unsigned int nb, char x, int *count, int index);
void	ft_putadd_bonus(void *ptr, int *count);
int		ft_printf_bonus(const char *s, ...);
void	arg(va_list arg_list, const char *s, int *i, int *count);
void	arg_flags(va_list arg_list, const char *s, int *i, int *count);
void	mandatory(va_list arg_list, const char *s, int *i, int *count);

#endif