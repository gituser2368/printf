/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybelatar <ybelatar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 18:45:33 by ybelatar          #+#    #+#             */
/*   Updated: 2023/11/11 01:56:04 by ybelatar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include "utils/utils.h"
# include <stdarg.h>
# include <unistd.h>
# include <stdint.h>

void	ft_match(char c, va_list *parameters, int *length);
int		ft_printf(const char *str, ...);

#endif