/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwen <gwen@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 14:35:08 by prossi            #+#    #+#             */
/*   Updated: 2024/05/23 15:13:57 by gwen             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int i)
{
	if (('A' <= i && i <= 'Z') || ('a' <= i && i <= 'z') || (0 <= i && i <= 9))
		return (1);
	else
		return (0);
}
