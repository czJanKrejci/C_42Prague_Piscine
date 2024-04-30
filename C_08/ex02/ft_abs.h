/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkrejci <jkrejci@student.42prague.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 15:43:59 by jkrejci           #+#    #+#             */
/*   Updated: 2024/04/28 16:03:18 by jkrejci          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

# define ABS(Value) \
    ({ \
        typeof(Value) _value = (Value); \
        if (_value < 0) \
            _value = -_value; \
        _value; \
    })

#endif
