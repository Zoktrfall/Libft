/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafrikya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 11:58:45 by aafrikya          #+#    #+#             */
/*   Updated: 2023/01/18 11:58:47 by aafrikya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Функция memset заполняет первые n байт области памяти,
на которую указывает аргумент destination,
символом, код которого указывается аргументом c.
*/

void	*ft_memset(void *destination, int c, size_t n)
{
	char	*str;
	size_t	i;

	i = 0;
	str = (char *)destination;
	while (i < n)
	{
		str[i] = c;
		i++;
	}
	return ((void *)destination);
}
