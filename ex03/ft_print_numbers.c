/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamet <tamet@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 16:27:08 by tamet             #+#    #+#             */
/*   Updated: 2023/09/07 19:07:56 by tamet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_nb(int n)
{
	char	nb;

	nb = '0' + n;
	write(1, &nb, 1);
}

void	ft_print_numbers(void)
{
	int		i;

	i = 0;
	while (i <= 9)
	{
		ft_print_nb(i);
		i++;
	}
}

// int	main(void)
// {
// 	ft_print_numbers();
// 	return (0);
// }
