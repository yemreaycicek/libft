/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaycicek <yaycicek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 13:38:59 by yaycicek          #+#    #+#             */
/*   Updated: 2025/05/05 13:48:08 by yaycicek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	little_len;

	if (!big)
		return (NULL);
	if (!little[0])
		return ((char *)big);
	little_len = ft_strlen(little);
	if (len == 0 || little_len > len)
		return (NULL);
	i = 0;
	while (big[i] && i <= len - little_len)
	{
		j = 0;
		while (little[j] && big[i + j] == little[j])
			j++;
		if (!little[j])
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
