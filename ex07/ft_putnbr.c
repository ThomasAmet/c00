/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamet <tamet@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 01:59:47 by tamet             #+#    #+#             */
/*   Updated: 2023/09/11 22:21:03 by tamet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	find_fact(int nb)
{
	int	fact;

	fact = 10;
	while ((nb / fact) > 10)
	{
		fact *= 10;
	}
	return (fact);
}

void	ft_putnbr(int nb)
{
	int	fact;
	int	div;
	int	neg;

	neg = 0;
	fact = 10;
	if (nb < 0)
	{
		neg = 1;
		ft_putchar('-');
		nb = (nb + 1) * (-1);
	}
	fact = find_fact(nb);
	while (fact >= 1)
	{
		div = nb / fact;
		ft_putchar('0' + div);
		if (div == 0)
			break ;
		nb -= (fact * div);
		fact /= 10;
		if (neg && fact == 1)
			nb += 1;
	}
	ft_putchar('\n');
}

int	main(void)
{
	ft_putnbr(0);
	ft_putnbr(-2147483648);
	ft_putnbr(2147483647);
	return (0);
}
