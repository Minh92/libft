/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpham <mpham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 13:42:24 by minh              #+#    #+#             */
/*   Updated: 2017/11/27 10:44:46 by mpham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strjoin(const char *s1, const char *s2)
{
	char	*str;
	int		i;
	int		j;
	int		len1;
	int		len2;

	if ((!s1) || (!s2))
		return (0);
	len1 = (ft_strlen((char *)s1));
	len2 = (ft_strlen((char *)s2));
	if (!(str = (char *)malloc(sizeof(*str) * (len1 + len2 + 1))))
		return (NULL);
	i = 0;
	j = 0;
	if (!s1 && !s2)
		return (NULL);
	while (s1[j] != '\0')
		str[i++] = s1[j++];
	j = 0;
	while (s2[j] != '\0')
		str[i++] = s2[j++];
	str[i] = '\0';
	return (str);
}
