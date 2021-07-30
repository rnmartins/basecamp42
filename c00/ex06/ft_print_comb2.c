/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: redos-sa <redos-sa@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/27 14:18:02 by redos-sa          #+#    #+#             */
/*   Updated: 2021/07/28 13:02:52 by redos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int n1, int n2)
{
	ft_putchar('0' + (n1 / 10));
	ft_putchar('0' + (n1 % 10));
	ft_putchar(' ');
	ft_putchar('0' + (n2 / 10));
	ft_putchar('0' + (n2 % 10));
	if (!(n1 == 98 && n2 == 99))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = 0;
	while (n1 < 99)
	{
		n2 = n1 + 1;
		while (n2 <= 99)
		{
			ft_print(n1, n2);
			n2++;
		}
		n1++;
	}
}
