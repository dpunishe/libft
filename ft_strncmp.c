/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpunishe <dpunishe@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 14:12:49 by dpunishe          #+#    #+#             */
/*   Updated: 2021/10/11 16:45:24 by dpunishe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int
	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while ((*s1 || *s2) && n)
	{
		if (*s1 != *s2)
			return ((unsigned char)*s1 - *s2);
		s1++;
		s2++;
		n--;
	}
	return (0);
}
