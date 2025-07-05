/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: squinn <squinn@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 17:04:45 by squinn            #+#    #+#             */
/*   Updated: 2025/07/05 11:43:56 by squinn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(int c)
{
	if (c == ' ')
		return (1);
	if (c == '\f')
		return (1);
	if (c == '\n')
		return (1);
	if (c == '\r')
		return (1);
	if (c == '\t')
		return (1);
	if (c == '\v')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	result;
	int	sign;
	int	i;

	i = 0;
	while (ft_isspace(str[i]))
		i++;
	sign = 1;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	result = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (sign * result);
		result = (str[i] - '0') + result * 10;
		i++;
	}
	return (sign * result);
}

/*
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

int	main(int argc, char *argv[]) {
	if (argc != 2)
		return (1);
	printf("ft_atoi: %d\n", ft_atoi(argv[1]));
	printf("atoi: %d\n", atoi(argv[1]));
	assert(ft_atoi(argv[1]) == atoi(argv[1]));
}
*/
