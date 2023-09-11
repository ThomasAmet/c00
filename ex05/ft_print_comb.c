/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamet <tamet@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 18:18:02 by tamet             #+#    #+#             */
/*   Updated: 2023/09/11 21:31:31 by tamet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_nb(int n)
{
	char	nb;

	nb = '0' + n;
	write(1, &nb, 1);
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
				ft_print_nb(i);
				ft_print_nb(j);
				ft_print_nb(k);
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

/* sint	main(void)
 {
 	ft_print_comb();
 	return (0);
 }
*/