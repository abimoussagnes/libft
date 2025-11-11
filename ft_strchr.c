/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabi-mou <aabi-mou@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 18:53:27 by aabi-mou          #+#    #+#             */
/*   Updated: 2025/11/11 16:13:40 by aabi-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	val;

	val = (unsigned char) c;
	while (*s != val)
	{
		if (!*s)
		{
			return (0);
		}
		s++;
	}
	return ((char *)s);
}
