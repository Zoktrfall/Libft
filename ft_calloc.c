/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafrikya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 12:25:49 by aafrikya          #+#    #+#             */
/*   Updated: 2023/01/18 12:25:50 by aafrikya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Функция calloc выделяет блок памяти для массива размером num элементов,
каждый из которых занимает size байт, и инициализирует все свои биты в нулями.
В результате выделяется блок памяти размером number * size байт,
причём весь блок заполнен нулями.
*/

void	*ft_calloc(size_t num, size_t size)
{
	void	*str;
	size_t	i;	

	if (num == SIZE_MAX || size == SIZE_MAX)
		return (NULL);
	str = (void *)malloc(num * size);
	if (str != NULL)
	{
		i = 0;
		while (i < num * size)
		{
			*(char *)(str + i) = 0;
			i++;
		}
		return (str);
	}
	return (NULL);
}
