/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khluthul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 10:12:56 by khluthul          #+#    #+#             */
/*   Updated: 2020/07/12 11:27:01 by khluthul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	char d1;
	char d2;
	char d3;
	char d4;

	d1 = 48;
	d2 = 48;
	d3 = 48;
	d4 = 48;
	while( d1 >= 48 && d1 <= 57)
	{
		while(d2 >= 48 && d2 <= 57)
		{
			while(d3 >= 48 && d3 <= 57)
			{
				while(d4 >= 48 && d4 <= 57)
				{
					write(1, &d4, 1);
					d4++;
				}
				write(1, &d3, 1);
				d3++;
			}
			write(1, " ", 1);
			write(1, &d2, 1);
			d2++;
		}
		write(1, &d1, 1);
		d1++;
	}
}
