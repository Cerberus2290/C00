/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 12:59:23 by tstrassb          #+#    #+#             */
/*   Updated: 2022/11/14 13:24:49 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	d1;
	char	d2;
	char	d3;

	d1 = '0' - 1;
	while (++d1 <= '9')
	{
		d2 = d1;
		while (++d2 <= '9')
		{
			d3 = d2;
			while (++d3 <= '9')
			{
				if (!(d1 == '0' && d2 == '1' && d3 == '2'))
				{
					write(1, ", ", 2);
				}
				write(1, &d1, 1);
				write(1, &d2, 1);
				write(1, &d3, 1);
			}
		}
	}
}
