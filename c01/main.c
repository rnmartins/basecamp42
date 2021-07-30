/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: redos-sa <redos-sa@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 13:54:12 by redos-sa          #+#    #+#             */
/*   Updated: 2021/07/30 14:25:53 by redos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ft(int *nbr);
void	ft_ultimate_ft(int *********nbr);
void	ft_swap(int *a, int *b);
void	ft_div_mod(int a, int b, int *div, int *mod);
void	ft_ultimate_div_mod(int *a, int *b);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
void	ft_rev_int_tab(int *tab, int size);

int main(void)
{
	// int x = 47;
	// ft_ft(&x);
	// printf("%d\n", x);

	// *******************

	// int pt;
	// int *pt1;
	// int **pt2;
	// int ***pt3;
	// int ****pt4;
	// int *****pt5;
	// int ******pt6;
	// int *******pt7;
	// int ********pt8;
	// int *********pt9;

	// pt = 15;
	// pt1 = &pt;
	// pt2 = &pt1;
	// pt3 = &pt2;
	// pt4 = &pt3;
	// pt5 = &pt4;
	// pt6 = &pt5;
	// pt7 = &pt6;
	// pt8 = &pt7;
	// pt9 = &pt8;
	
	// ft_ultimate_ft(pt9);
	// printf("%d\n", *********pt9);
	
	// *******************
	
	// int a;
	// int b;

	// a = 2;
	// b = 5;
	// ft_swap(&a, &b);
	// printf("%d %d\n", a, b);

	// *******************
	
	// int div;
	// int mod;

	// ft_div_mod(15, 0, &div, &mod);
	// printf("%d %d\n", div, mod);
	
	// *******************

	// int a;
	// int b;
	
	// a = 42;
	// b = 10;
	// ft_ultimate_div_mod(&a, &b);
	// printf("%d %d\n", a, b);

	// *******************
	
	// char c[] = "Renan";

	// ft_putstr(c);

	// *******************

	// char *str = "Renan";
	// int size;
	
	// size = ft_strlen(str);
	// printf("%s %d\n", str, size);

	// *******************
	
	int tab[] = {1, 2, 3, 4, 5};
	int size = 5;
	ft_rev_int_tab(tab, size);
	for(int i = 0; i < size; i++)
	{
		printf("%d \n", tab[i]);
	}
}

// gcc -Wall -Wextra -Werror -o run main.c ex00/
// ./run > result
// norminette -R CheckForbiddenSourceHeader