/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstolz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 10:03:38 by dstolz            #+#    #+#             */
/*   Updated: 2018/09/30 10:03:41 by dstolz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

char    *ft_strrev(char *str)
{
    int i;
    int q;
    char temp;

    i = 0;
    q = ft_strlen(str) - 1;
    while (i < q)
    {
        temp = *(str + i);
        *(str + i++) = *(str + q);
        *(str + q--) = temp;
    }
    return (str);
}
