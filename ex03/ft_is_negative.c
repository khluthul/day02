/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khluthul <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 09:13:37 by khluthul          #+#    #+#             */
/*   Updated: 2020/07/08 11:04:59 by khluthul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if(n <  0)
	{
		write(1, "N", 1);
	}
	else
		if(n >= 0)
		{
			write(1, "P",1);
		}
}
int	main()
{
	int n;
	n = 5;
	return(0);
}
