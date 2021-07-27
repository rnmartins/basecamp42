/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: redos-sa <redos-sa@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 16:27:08 by redos-sa          #+#    #+#             */
/*   Updated: 2021/07/22 14:27:33 by redos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char c);
void	ft_print_alphabet(void);
void	ft_print_reverse_alphabet(void);
void	ft_print_numbers(void);
void	ft_is_negative(int n);
void	ft_print_comb(void);

int	main(void)
{
	// ft_putchar('B');
	// ft_print_alphabet();
	// ft_putchar('\n');
	// ft_print_reverse_alphabet();
	// ft_putchar('\n');
	// ft_print_numbers();
	// ft_is_negative(-1);
	ft_print_comb();
	return (0);
}

// gcc -Wall -Wextra -Werror -o run main.c ex00/ft_putchar.c ex01/ft_print_alphabet.c ex02/\ ft_print_reverse_alphabet.c ex03/ft_print_numbers.c ex04/ft_is_negative.c ex05/ft_print_comb.c
// norminette -R CheckForbiddenSourceHeader