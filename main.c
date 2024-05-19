/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <flverge@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/19 16:10:19 by flverge           #+#    #+#             */
/*   Updated: 2024/05/19 16:27:21 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	const char *str = "42";
	int real_result = atoi(str);
	int ft_result = ft_atoi(str);

	printf("Real atoi: %d\n", real_result);
	printf("ft_atoi: %d\n", ft_result);

	return 0;
}