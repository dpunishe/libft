/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpunishe <dpunishe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 14:12:54 by dpunishe          #+#    #+#             */
/*   Updated: 2021/10/11 16:17:43 by dpunishe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *tofind, size_t n)
{
	size_t	len_td;

	len_td = ft_strlen(tofind);
	if (!*tofind)
		return ((char *)str);
	while (*str && n-- >= len_td)
	{
		if (*str == *tofind && ft_memcmp(str, tofind, len_td) == 0)
			return ((char *)str);
		str++;
	}
	return (NULL);
}
