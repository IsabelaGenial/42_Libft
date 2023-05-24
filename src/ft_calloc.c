/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igenial <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 19:07:47 by igenial           #+#    #+#             */
/*   Updated: 2023/05/24 16:57:47 by igenial          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb == '\0' || size == '\0' || (nmemb * size) / size != nmemb)
		return (NULL);
	ptr = malloc (nmemb * size);
	ft_memset(ptr, '\0', (nmemb * size));
	return (ptr);
}
