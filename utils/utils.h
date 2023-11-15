/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybelatar <ybelatar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 18:53:12 by ybelatar          #+#    #+#             */
/*   Updated: 2023/11/11 03:02:22 by ybelatar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H

# define UTILS_H

# include <stdint.h>
# include <unistd.h>

void	ft_putcharbis(char c, int *length);
void	ft_putstrbis(char *str, int *length);
void	ft_putptrhexabis(uintptr_t ptr, int *length);
void	ft_putnbrbasebis(uintptr_t n, int maj, uintptr_t base, int *length);
void	ft_putnbrdecabis(int n, int *length);

#endif