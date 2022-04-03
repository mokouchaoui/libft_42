/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokoucha <mokoucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 16:03:15 by mokoucha          #+#    #+#             */
/*   Updated: 2022/03/31 18:45:47 by mokoucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			z;
	unsigned char	*string;
	unsigned char	chr;

	string = (unsigned char *)str;
	chr = (unsigned char)c;
	z = 0;
	while (z < n)
	{
		if (*string == chr)
			return ((void *)string);
		string++;
		z++;
	}
	return (0);
}
