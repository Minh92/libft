/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpham <mpham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/23 17:45:05 by minh              #+#    #+#             */
/*   Updated: 2017/11/27 09:38:10 by mpham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void			ft_memdel(void **ap)
{
	unsigned char	**str;

	if (ap)
	{
		str = (unsigned char **)ap;
		free((void *)*str);
		*ap = NULL;
	}
}