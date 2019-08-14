/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znoonan <znoonan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 08:52:50 by znoonan           #+#    #+#             */
/*   Updated: 2019/08/12 09:02:53 by znoonan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;
    i = 0;
    if (n == 0)
    {
        return (0);
    }
    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0' && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}