/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjarfi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:58:15 by sjarfi            #+#    #+#             */
/*   Updated: 2023/11/13 18:23:32 by sjarfi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	len_dest;
	size_t	len_src;
	size_t	i;
	size_t	j;

	len_src = ft_strlen(src);
	if (dstsize == 0)
		return (len_src);
	len_dest = ft_strlen(dst);
	if (dstsize <= len_dest)
		return (dstsize + len_src);
	i = len_dest;
	j = 0;
	while (src[j] && i < dstsize - 1)
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (len_dest + len_src);
}
