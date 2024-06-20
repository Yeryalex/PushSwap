/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numberdup.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yrodrigu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 18:48:13 by yrodrigu          #+#    #+#             */
/*   Updated: 2024/06/20 19:22:09 by yrodrigu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"
              
int ft_numberdup(t_list *lst)
{
    t_list *temp = lst;
    t_list *compare;

    if (!temp || !temp->next)
        return 0;

    while (temp != NULL && temp->next != NULL)
    {
        compare = temp->next;
        while (compare != NULL)
        {
            if (temp->number == compare->number)
                return 1;

            compare = compare->next;
        }
        temp = temp->next;
    }
    return 0;
}
