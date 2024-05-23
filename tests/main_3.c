/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <flverge@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 09:16:50 by flverge           #+#    #+#             */
/*   Updated: 2024/05/23 09:19:35 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "../libft.h"

int main(void)
{
	char **result = ft_split("Hello World", ' ');

	if (result == NULL)
	{
		printf("\033[1;31mError: ft_split returned NULL\033[0m\n");
		return 1;
	}

	int i = 0;
	while (result[i] != NULL)
	{
		printf("\033[1;32mValid: %s\033[0m\n", result[i]);
		i++;
	}

	return 0;
}