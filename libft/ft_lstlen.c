/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laime <laime@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/24 17:08:54 by laime             #+#    #+#             */
/*   Updated: 2014/11/28 15:05:32 by laime            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

int		ft_lstlen(t_list *lst)
{
	if (lst != NULL)
		return (ft_lstlen(lst->next) + 1);
	else
		return (0);
}