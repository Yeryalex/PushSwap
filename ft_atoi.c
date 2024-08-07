/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 17:49:39 by yrodrigu          #+#    #+#             */
/*   Updated: 2024/07/23 17:34:20 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	ft_auxiliar(char **str, int *sign)
{
	if (**str == '-')
	{
		*sign = -1;
		(*str)++;
	}
	else if (**str == '+')
		(*str)++;
}

int	ft_atoi(char *str)
{
	long long int		result;
	int					sign;

	result = 0;
	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	ft_auxiliar(&str, &sign);
	if (!*str)
		print_error();
	while (*str)
	{
		if (!ft_isdigit(*str))
			print_error();
		result = result * 10 + (*str - 48);
		if (result * sign > 2147483647 || result * sign < -2147483648)
			print_error();
		str++;
	}
	return ((int)(result * sign));
}
