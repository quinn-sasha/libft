/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: squinn <squinn@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/29 17:04:45 by squinn            #+#    #+#             */
/*   Updated: 2025/07/02 16:15:10 by squinn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	result;
	int	i;

	i = 0;
	while (str[i] == ' ')
		i++;
	result = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (result);
		result = (str[i] - '0') + result * 10;
		i++;
	}
	return (result);
}

/*
#include <assert.h>
#include <stdlib.h>

int	main(int argc, char *argv[]) {
	if (argc != 2)
		return (1);
	assert(ft_atoi(argv[1]) == atoi(argv[1]));
}
*/
