/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabi-mou <aabi-mou@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 18:45:15 by aabi-mou          #+#    #+#             */
/*   Updated: 2025/11/11 16:14:53 by aabi-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_islowercase(int c)
{
	return (c >= 'a' && c <= 'z');
}

int	ft_toupper(int c)
{
	if (ft_islowercase(c))
	{
		return (c - 32);
	}
	return (c);
}
