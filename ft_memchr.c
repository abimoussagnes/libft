/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabi-mou <aabi-mou@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 19:40:39 by aabi-mou          #+#    #+#             */
/*   Updated: 2025/11/11 16:12:48 by aabi-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	val;
	size_t			i;

	val = (unsigned char) c;
	p = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (p[i] == val)
		{
			return (p + i);
		}
		i++;
	}
	return (0);
}
