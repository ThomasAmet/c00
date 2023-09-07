/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamet <tamet@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:33:24 by tamet             #+#    #+#             */
/*   Updated: 2023/09/07 17:42:25 by tamet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	char	answer;

	if (n < 0)
	{
		answer = 'N';
	}
	else
	{
		answer = 'P';
	}
	ft_putchar(answer);
}

int	main(int ac, char av)
{
	int	nb;

	nb = (int) ac[1][0];
	ft_is_negative(nb);
	return (0);
}
