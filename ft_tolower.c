/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabi-mou <aabi-mou@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 18:49:44 by aabi-mou          #+#    #+#             */
/*   Updated: 2025/11/11 16:14:48 by aabi-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isuppercase(int c)
{
	return (c >= 'A' && c <= 'Z');
}

int	ft_tolower(int c)
{
	if (ft_isuppercase(c))
	{
		return (c + 32);
	}
	return (c);
}
