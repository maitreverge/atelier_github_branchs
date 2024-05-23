/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flverge <flverge@student.42perpignan.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 12:09:35 by flverge           #+#    #+#             */
/*   Updated: 2024/05/23 12:16:54 by flverge          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "../libft.h"


void test_ft_toupper()
{
	char c = 'a';
	char expected = 'A';
	char result = ft_toupper(c);
	if (result == expected)
	{
		printf("\033[1;32mTest ft_toupper passed\033[0m\n");
	}
	else
	{
		printf("\033[1;31mTest ft_toupper failed\033[0m\n");
	}
}

void test_ft_tolower()
{
	char c = 'A';
	char expected = 'a';
	char result = ft_tolower(c);
	if (result == expected)
	{
		printf("\033[1;32mTest ft_tolower passed\033[0m\n");
	}
	else
	{
		printf("\033[1;31mTest ft_tolower failed\033[0m\n");
	}
}

void test_ft_strlen()
{
	const char *s = "Hello, World!";
	size_t expected = strlen(s);
	size_t result = ft_strlen(s);
	if (result == expected)
	{
		printf("\033[1;32mTest ft_strlen passed\033[0m\n");
	}
	else
	{
		printf("\033[1;31mTest ft_strlen failed\033[0m\n");
	}
}

void test_ft_isprint()
{
	char c = 'e';
	int expected = isprint(c);
	int result = ft_isprint(c);
	if (result == 1 && expected >= 1)
	{
		printf("\033[1;32mTest ft_isprint passed\033[0m\n");
	}
	else
	{
		printf("\033[1;31mTest ft_isprint failed\033[0m\n");
	}
}

int main()
{
	test_ft_toupper();
	test_ft_tolower();
	test_ft_strlen();
	test_ft_isprint();
	return 0;
}