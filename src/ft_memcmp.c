/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igenial <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 16:04:16 by igenial           #+#    #+#             */
/*   Updated: 2023/05/27 18:32:08 by igenial          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*text[2];
	size_t			i;

	text[0] = ((unsigned char *)s1);
	text[1] = ((unsigned char *)s2);
	i = 0;
	while (n-- > 0)
	{
		if (*text[0] != *text[1])
			return (*text[0] - *text[1]);
		text[0]++;
		text[1]++;
	}
	return (0);
}
