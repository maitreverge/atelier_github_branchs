/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <flverge@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 16:10:19 by flverge           #+#    #+#             */
/*   Updated: 2024/05/23 07:58:00 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "../libft.h"

int main(void) {
	const char *str = "42";
	int real_result = atoi(str);
	int ft_result = ft_atoi(str);

	printf("\033[1;33mReal atoi: %d\n\033[0m", real_result);

	if (real_result == ft_result) {
		printf("\033[1;32m"); // Set color to bold green
		printf("✅ Real and ft results are equal!\n");
		printf("ft_atoi: %d\n", ft_result);
		printf("\033[0m"); // Reset color
	} else {
		printf("\033[1;31m"); // Set color to bold red
		printf("❌ Real and ft results are different!\n");
		printf("ft_atoi: %d\n", ft_result);
		printf("\033[0m"); // Reset color
	}

	return 0;
}