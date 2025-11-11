/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabi-mou <aabi-mou@student.42beirut.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 16:51:41 by aabi-mou          #+#    #+#             */
/*   Updated: 2025/11/11 13:04:59 by aabi-mou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_islowercase(int c)
{
	return (c >= 'a' && c <= 'z');
}

static int	ft_isuppercase(int c)
{
	return (c >= 'A' && c <= 'Z');
}

int	ft_isalpha(int c)
{
	return (ft_islowercase(c) || ft_isuppercase(c));
}
