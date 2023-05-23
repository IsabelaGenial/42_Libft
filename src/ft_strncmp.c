/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igenial <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 16:43:20 by igenial           #+#    #+#             */
/*   Updated: 2023/05/22 17:43:01 by igenial          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if(n == 0)
		return(0);
	while (n - 1 && *s1 == *s2)
	{
		n--;
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
