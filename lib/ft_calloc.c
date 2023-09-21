/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-voog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 00:25:19 by cde-voog          #+#    #+#             */
/*   Updated: 2023/09/05 00:01:47 by cde-voog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lby.h"

void	*ft_calloc(size_t n, size_t size)
{
	size_t	i;
	char	*a;

	i = n * size;
	a = (malloc(i));
	if (a == NULL)
		return (NULL);
	ft_bzero(a, i);
	return (a);
}
