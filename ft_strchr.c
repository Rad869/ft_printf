/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rrabeari <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 12:22:23 by rrabeari          #+#    #+#             */
/*   Updated: 2024/03/13 12:46:11 by rrabeari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strchr(const char *s, int i)
{
	unsigned int	k;
	char			c;

	c = (char) i;
	k = 0;
	while (s[k])
	{
		if (s[k] == c)
			return ((char *)&s[k]);
		k++;
	}
	if (c == '\0')
		return ((char *)&s[k]);
	return (NULL);
}
