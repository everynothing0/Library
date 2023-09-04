/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-voog <cde-voog@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 12:34:06 by cde-voog          #+#    #+#             */
/*   Updated: 2023/09/04 23:59:59 by cde-voog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lby.h"

// returns the number of elements in a string array, she's not to standard libft

int	ft_arrlen(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
