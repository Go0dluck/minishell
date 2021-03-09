/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pleonel <pleonel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 11:23:46 by ksharee           #+#    #+#             */
/*   Updated: 2021/03/01 19:03:02 by pleonel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if ((s1[0] == '\0' && s2[0] == '\0') || !n)
		return (0);
	if (s1[0] == '\0')
		return (-1);
	if (s2[0] == '\0')
		return (1);
	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && n != i)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
