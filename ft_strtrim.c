/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: squinn <squinn@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 11:43:15 by squinn            #+#    #+#             */
/*   Updated: 2025/07/04 20:04:23by squinn           ###   ########.fr       */
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

static size_t	count_removed_len(char const *s, char const *set)
{
	size_t	length;
	size_t	i;

	length = ft_strlen(s);
	i = 0;
	while (s[i] && is_in_set(s[i], set))
	{
		length--;
		i++;
	}
	if (length == 0)
		return (length);
	i = ft_strlen(s);
	while (i > 0)
	{
		i--;
		if (!is_in_set(s[i], set))
			return (length);
		length--;
	}
	return (length);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_string;
	size_t	new_length;
	size_t	i;
	size_t	j;

	new_length = count_removed_len(s1, set);
	if (new_length == 0)
		return ft_strdup("");
	new_string = malloc(new_length + 1);
	if (!new_string)
		return (NULL);
	i = 0;
	while (s1[i] && is_in_set(s1[i], set))
		i++;
	j = 0;
	while (s1[i] && !is_in_set(s1[i], set))
		new_string[j++] = s1[i++];
	return (new_string);
}

#include <stdio.h>

int	main(int argc, char *argv[]) {
	(void)argc;
	char const *s = argv[1];
	char const *set = argv[2];
	printf("Result: %s\n", ft_strtrim(s, set));
}
