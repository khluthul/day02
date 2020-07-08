/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_reverse_alphabet.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khluthul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 17:02:56 by khluthul          #+#    #+#             */
/*   Updated: 2020/07/07 17:22:48 by khluthul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	ft_print_reverse_alphabet()
{
	char c;

	c = 'z';
	while(c <= 122 && c >= 97)
	{
		ft_putchar(c--);
	}
}
