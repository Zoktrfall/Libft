/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafrikya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 12:10:55 by aafrikya          #+#    #+#             */
/*   Updated: 2023/01/18 12:10:56 by aafrikya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Только функция tolower() определена стандартом ANSI С.
Функция tolower() возвращает соответствующий нижнему регистру
эквивалент символа ch, если ch — это буква верхнего регистра.
В противном случае ch возвращается неизмененным.
*/

int	ft_tolower(int ch)
{
	if (ch >= 'A' && ch <= 'Z')
		return (ch += 32);
	return (ch);
}
