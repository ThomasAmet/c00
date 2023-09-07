/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamet <tamet@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 18:18:02 by tamet             #+#    #+#             */
/*   Updated: 2023/09/07 18:38:06 by tamet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i < 7)
	{
		j = i + 1;
		while (j <= 8)
		{
			k = j + 1;
			while (k <= 9)
			{
				ft_putchar('0' + i);
				ft_putchar('0' + j);
				ft_putchar('0' + k);
				write(1, ",", 1);
				write(1, " ", 1);
				k++;
			}
			j++;
		}
		i++;
	}
	write(1, "789", 3);
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
