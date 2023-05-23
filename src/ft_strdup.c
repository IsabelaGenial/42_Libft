/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igenial <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 18:06:16 by igenial           #+#    #+#             */
/*   Updated: 2023/05/23 19:06:09 by igenial          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		len;
	char	*str2;

	len = (ft_strlen (s) + 1);
	str2 = malloc(len * sizeof (char));
	if (s == NULL)
		return (0);
	ft_strlcpy (str2, s, len);
	return (str2);
}
