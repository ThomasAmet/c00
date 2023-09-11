/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamet <tamet@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 14:53:01 by tamet             #+#    #+#             */
/*   Updated: 2023/09/11 23:12:03 by tamet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_combn(char *arr, int n, int ix)
{
	char	i;

	if (ix == n)
	{
		write(1, arr, n);
		write(1, ", ", 2);
		return ;
	}
	if (ix > 0)
		i = arr[ix - 1] + 1;
	else
		i = '0'; // au premier indice on part de 0 a 9 (7 en realite mais on verra  la condition de fin apres)
	while (i <= '9')
	{
		arr[ix] = i;
		ft_combn(arr, n, ix + 1);
		i++;
	}
}

void	ft_print_combn(int n)
{
	char	arr[10];

	ft_combn(arr, n, 0);
}

int	main(void)
{
	ft_print_combn(3);
	return (0);
}
