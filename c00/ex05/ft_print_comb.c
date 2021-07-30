/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: redos-sa <redos-sa@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 01:24:57 by redos-sa          #+#    #+#             */
/*   Updated: 2021/07/30 17:42:17 by redos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putchar(char hundred, char ten, char unity)
{
	write(1, &hundred, 1);
	write(1, &ten, 1);
	write(1, &unity, 1);
	if (hundred != '7')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	unity;
	int	ten;
	int	hundred;

	hundred = 0;
	ten = 1;
	while (hundred < 9)
	{
		ten = hundred + 1;
		while (ten <= 9)
		{
			unity = ten + 1;
			while (unity <= 9)
			{
				ft_putchar('0' + hundred, '0' + ten, '0' + unity);
				++unity;
			}
			++ten;
		}
		++hundred;
	}
}
