/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokoucha <mokoucha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 12:50:05 by mokoucha          #+#    #+#             */
/*   Updated: 2022/03/31 18:42:10 by mokoucha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*dst;
	unsigned int	index;

	index = 0;
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	dst = malloc(sizeof(*dst) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (dst == NULL)
		return (NULL);
	while (*s1 != '\0')
		dst[index++] = *s1++;
	while (*s2 != '\0')
		dst[index++] = *s2++;
	dst[index] = '\0';
	return (dst);
}
