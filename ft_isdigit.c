/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aafrikya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 11:51:13 by aafrikya          #+#    #+#             */
/*   Updated: 2023/01/18 11:51:17 by aafrikya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Макрос isdigit() возвращает ненулевое значение,
если аргумент ch является цифрой от 0 до 9,
в противном случае возвращается 0
*/

int	ft_isdigit(int a)
{
	if (a >= '0' && a <= '9')
		return (1);
	return (0);
}