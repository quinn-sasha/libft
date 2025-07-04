/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: squinn <squinn@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 18:52:27 by squinn            #+#    #+#             */
/*   Updated: 2025/07/02 16:26:20 by squinn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*tmp_dst;
	unsigned char	*tmp_src;
	size_t			i;

	tmp_dst = (unsigned char *)dst;
	tmp_src = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		if (tmp_src[i] == (unsigned char)c)
			return (dst + i + 1);
		tmp_dst[i] = tmp_src[i];
		i++;
	}
	return (NULL);
}
