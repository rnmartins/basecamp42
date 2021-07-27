/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: redos-sa <redos-sa@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 01:24:57 by redos-sa          #+#    #+#             */
/*   Updated: 2021/07/22 19:33:17 by redos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char centena, char dezena, char unidade)
{
	write(1, &centena, 1);
	write(1, &dezena, 1);
	write(1, &unidade, 1);
	if (centena != '7')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	unidade;
	int	dezena;
	int	centena;

	centena = 0;
	dezena = 1;
	while (centena < 9)
	{
		dezena = centena + 1;
		while (dezena <= 9)
		{
			unidade = dezena + 1;
			while (unidade <= 9)
			{
				ft_putchar('0' + centena, '0' + dezena, '0' + unidade);
				++unidade;
			}
			++dezena;
		}
		++centena;
	}
}
