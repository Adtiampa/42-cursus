/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atiampae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 13:06:16 by atiampae          #+#    #+#             */
/*   Updated: 2022/10/25 18:46:00 by atiampae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst,const void *src, size_t n)
{
	size_t	i;

	i = -1;
	if (dst != src && n)
		while (++i < n)
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
	return (dst);

}

