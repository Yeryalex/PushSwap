/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 17:49:39 by yrodrigu          #+#    #+#             */
/*   Updated: 2024/06/19 20:32:49 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void printerror(void)
{
        write(1, "error\n", 6);
	exit(1);
}

int	ft_atoi(char *str)
{
	long int 	result;
	int	sign;
	
	result = 0;
	sign = 1;
	if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		result = result * 10 + (*str - 48);
		str++;
	}
	if (result > 2147483647 || result < -2147483648)
		printerror();
	return (result * sign);
}
