/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpunishe <dpunishe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 14:11:30 by dpunishe          #+#    #+#             */
/*   Updated: 2021/10/13 17:30:12 by dpunishe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *arr, int c, size_t len)
{
	unsigned char	*p;
	unsigned char	tmp;

	tmp = c;
	p = (unsigned char *) arr;
	while (len > 0)
	{
		*p++ = tmp;
		len--;
	}
	return (arr);
}
