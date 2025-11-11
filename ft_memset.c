/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabi-mou <aabi-mou@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 17:40:52 by aabi-mou          #+#    #+#             */
/*   Updated: 2025/11/11 16:13:09 by aabi-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	val;
	size_t			i;

	p = (unsigned char *) s;
	val = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		p[i] = val;
		i++;
	}
	return (s);
}
