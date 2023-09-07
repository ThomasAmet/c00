/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tamet <tamet@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 18:15:49 by tamet             #+#    #+#             */
/*   Updated: 2023/09/07 18:17:01 by tamet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>

void ft_print_comb(void)
{
    int i;
    int j;
    int k;

    
    char    first, second, third
    for (i=0, i<7, i++)
    {
        first = '0'+i
        write(1, &first, 1);

        for (j=i+1, j<=9, j++)
        {
            second = '0'+j
            write(1, &second, 1);
            for (k=j+1, k<=9, k++)
            {
                third = '0'+k
                write(1, &third, 1);
            }
        }
    }
    char newline = '\n'
    write(1, &newline, 1)
}
