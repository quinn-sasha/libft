/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: squinn <squinn@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 13:40:49 by squinn            #+#    #+#             */
/*   Updated: 2025/06/30 15:15:13 by squinn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t nmeb, size_t size)
{
	unsigned char	*tmp;
	size_t			i;

	if (nmeb <= 0 || size <= 0)
		return (NULL);
	tmp = malloc(nmeb * size);
	if (!tmp)
		return (NULL);
	i = 0;
	while (i < nmeb * size)
	{
		tmp[i] = 0;
		i++;
	}
	return (tmp);
}

/*
#include <stdio.h>

int	main(int argc, char *argv[]) {
	(void)argc;
	size_t nmeb = atoi(argv[1]);
	int *nums = calloc(nmeb, sizeof(int));
	for (size_t i = 0; i < nmeb; i++) {
		printf("%d ", nums[i]);
	}
	return (0);
}
*/
