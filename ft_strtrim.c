/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: squinn <squinn@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 11:43:15 by squinn            #+#    #+#             */
/*   Updated: 2025/07/02 18:34:28 by squinn           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char letter, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == letter)
			return (1);
		i++;
	}
	return (0);
}

static size_t	count_letters_to_remove(char const *s, char const *set)
{
	size_t	result;
	size_t	i;

	result = 0;
	i = 0;
	while (s[i])
	{
		if (is_in_set(s[i], set))
			result++;
		i++;
	}
	return (result);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_string;
	size_t	new_length;
	size_t	i;
	size_t	j;

	new_length = ft_strlen(s1) - count_letters_to_remove(s1, set);
	new_string = malloc(new_length + 1);
	if (!new_string)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		if (is_in_set(s1[i], set))
		{
			i++;
			continue ;
		}
		new_string[j++] = s1[i++];
	}
	new_string[j] = '\0';
	return (new_string);
}

/*
#include <stdio.h>

int	main(int argc, char *argv[]) {
	(void)argc;
	char const *s = argv[1];
	char const *set = argv[2];
	printf("Result: %s\n", ft_strtrim(s, set));
}
*/
