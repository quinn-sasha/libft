/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: squinn <squinn@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/28 19:12:22 by squinn            #+#    #+#             */
/*   Updated: 2025/06/28 19:27:37 by squinn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	num_free_chars;
	size_t	dst_len;

	dst_len = ft_strlen(dst);
	num_free_chars = dstsize - dst_len - 1;
	if (num_free_chars < 0)
		return (dst_len + ft_strlen(src));
	i = 0;
	while (i < num_free_chars && src[i])
	{
		dst[i + dst_len] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst_len + ft_strlen(src));
}
