/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: znoonan <znoonan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 19:12:36 by znoonan           #+#    #+#             */
/*   Updated: 2019/08/13 19:18:51 by znoonan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_strequ(char const *s1, char const *s2)
{
    if (s2 == s1)
        return (1);
    if (!(s2 || s1))
        return (0);
    return (ft_strcmp(s1, s2) == 0);
}