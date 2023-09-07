/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamet <tamet@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 16:27:08 by tamet             #+#    #+#             */
/*   Updated: 2023/09/07 17:29:04 by tamet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	int		i;

	i = 0;
	while (i <= 9)
	{
		ft_putchar('0' + i);
		i++;
	}
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}
