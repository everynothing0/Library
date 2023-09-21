/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-voog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 22:46:39 by cde-voog          #+#    #+#             */
/*   Updated: 2023/04/14 20:49:08 by cde-voog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lby.h"d

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
