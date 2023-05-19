/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igenial <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 16:22:18 by igenial           #+#    #+#             */
/*   Updated: 2023/05/19 16:37:19 by igenial          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = (ft_strlen(s));
	while (i-- > 0)
	{
		if (((unsigned char *)s)[i] == ((unsigned char *)c))
			return (s[i]);
	}
	return (0);
}
