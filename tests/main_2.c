/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <flverge@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 17:15:15 by flverge           #+#    #+#             */
/*   Updated: 2024/05/23 08:15:41 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include "../libft.h"

int main(void) {
	char c = 'A';

	// Testing ft_isdigit
	printf("\n\nTesting ft_isdigit:\n");
	if (ft_isdigit(c) == isdigit(c)) {
		printf("\033[1;32m"); // Set color to bold green
		printf("✅ ft_isdigit and isdigit results are equal!\n");
	} else {
		printf("\033[1;31m"); // Set color to bold red
		printf("❌ ft_isdigit and isdigit results are different!\n");
	}
	printf("\033[0m"); // Reset color
	printf("\n");

	// Testing ft_isalnum
	printf("Testing ft_isalnum:\n");
	if (ft_isalnum(c) && isalnum(c)) {
		printf("\033[1;32m"); // Set color to bold green
		printf("✅ ft_isalnum and isalnum results are equal!\n");
	} else {
		printf("\033[1;31m"); // Set color to bold red
		printf("❌ ft_isalnum and isalnum results are different!\n");
	}
	printf("\033[0m"); // Reset color
	printf("\n");

	// Testing ft_isalpha
	printf("Testing ft_isalpha:\n");
	if (ft_isalpha(c) && isalpha(c)) {
		printf("\033[1;32m"); // Set color to bold green
		printf("✅ ft_isalpha and isalpha results are equal!\n");
	} else {
		printf("\033[1;31m"); // Set color to bold red
		printf("❌ ft_isalpha and isalpha results are different!\n");
	}
	printf("\033[0m"); // Reset color
	printf("\n");

	// Testing ft_isascii
	printf("Testing ft_isascii:\n");
	if (ft_isascii(c) == isascii(c)) {
		printf("\033[1;32m"); // Set color to bold green
		printf("✅ ft_isascii and isascii results are equal!\n");
	} else {
		printf("\033[1;31m"); // Set color to bold red
		printf("❌ ft_isascii and isascii results are different!\n");
	}
	printf("\033[0m"); // Reset color
	printf("\n");

	return 0;
}