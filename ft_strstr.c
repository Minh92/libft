/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpham <mpham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 21:34:21 by minh              #+#    #+#             */
/*   Updated: 2017/12/01 12:55:04 by mpham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (to_find[0] == '\0')
		return ((char*)str);
	while (str[i] != '\0')
	{
		while (to_find[j] == str[i + j])
		{
			if (to_find[j + 1] == '\0')
			{
				return ((char*)str + i);
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (NULL);
}
