/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: redos-sa <redos-sa@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 14:21:04 by redos-sa          #+#    #+#             */
/*   Updated: 2021/07/29 22:58:26 by redos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	backup;
	int	i;

	i = 0;
	while (i < size)
	{
		size--;
		backup = tab[i];
		tab[i] = tab[size];
		tab[size] = backup;
		i++;
	}
}
