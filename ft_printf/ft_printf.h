/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alecoutr <alecoutr@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 18:11:06 by alecoutr          #+#    #+#             */
/*   Updated: 2022/11/15 22:35:09 by alecoutr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *placeholder, ...);
int		ft_putchar_fd(char c, int fd, int *error);
int		ft_putstr_fd(char *s, int fd, int *error);
int		ft_putnbr_fd(long n, int fd, int *error);
int		ft_putunbr_fd(unsigned long n, int fd, int *error);
int		ft_toupper(int c);
int		ft_strlen(char *s);

#endif
