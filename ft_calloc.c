/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabi-mou <aabi-mou@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 18:32:57 by aabi-mou          #+#    #+#             */
/*   Updated: 2025/11/11 13:04:42 by aabi-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	total_size;

	if (count == 0 || size == 0)
		return (malloc(1));
	total_size = count * size;
	if (count > SIZE_MAX / size)
		return (0);
	ptr = malloc(total_size);
	if (!ptr)
		return (0);
	ft_memset(ptr, 0, total_size);
	return (ptr);
}
