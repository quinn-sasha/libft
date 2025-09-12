/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: squinn <squinn@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/02 13:45:46 by squinn            #+#    #+#             */
/*   Updated: 2025/09/12 17:22:37 by squinn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr_fd(const char *str, int fd)
{
	int	num_bytes;

	if (str == NULL)
		return (ft_putstr_fd(fd, "(null)"));
	num_bytes = 0;
	while (*str)
	{
		num_bytes += ft_putchar_fd(fd, *str);
		str++;
	}
	return (num_bytes);
}
