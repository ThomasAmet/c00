/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_print_comb2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamet <tamet@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 18:40:51 by tamet             #+#    #+#             */
/*   Updated: 2023/09/07 21:16:08 by tamet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_nb(int n)
{
	char	nb;

	nb = '0' + n;
	write(1, &nb, 1);
}

void	single_to_double_digits(int n)
{	
	int	decimal;
	int	unit;

	decimal = n / 10;
	if (decimal < 1)
	{
		ft_print_nb(0);
		ft_print_nb(n);
	}
	else
	{
		unit = n % 10;
		ft_print_nb(decimal);
		ft_print_nb(unit);
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			single_to_double_digits(i);
			write(1, " ", 1);
			single_to_double_digits(j);
			if ((i != 98) | (j != 99))
			{
				write(1, ",", 1);
				write(1, " ", 1);
			}
			j++;
		}
		i++;
	}
}

// int	main(void)
// {
// 	// single_to_double_digits(60);
// 	ft_print_comb2();
// 	return (0);
// }
