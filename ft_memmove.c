/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: squinn <squinn@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 12:06:08 by squinn            #+#    #+#             */
/*   Updated: 2025/07/02 16:28:08 by squinn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*tmp_dest;
	unsigned char	*tmp_src;
	size_t			i;

	tmp_dest = (unsigned char *)dest;
	tmp_src = (unsigned char *)src;
	if (tmp_dest < tmp_src)
	{
		i = 0;
		while (i < n)
		{
			tmp_dest[i] = tmp_src[i];
			i++;
		}
		return (dest);
	}
	i = n - 1;
	while (i >= 0)
	{
		tmp_dest[i] = tmp_src[i];
		i--;
	}
	return (dest);
}
