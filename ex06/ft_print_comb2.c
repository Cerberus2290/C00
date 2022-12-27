/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 13:44:05 by tstrassb          #+#    #+#             */
/*   Updated: 2022/11/14 15:13:13 by tstrassb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_number(int n)
{
	char	d1;
	char	d2;

	d1 = '0' + n / 10;
	d2 = '0' + n % 10;
	write(1, &d1, 1);
	write(1, &d2, 1);
}

void	ft_print_comb2(void)
{
	int	n;
	int	o;

	n = 0;
	while (n < 100)
	{
		o = n + 1;
		while (o < 100)
		{
			if (!(n == 0 && o == 1))
			{
				write(1, ", ", 2);
			}
			print_number(n);
			write(1, " ", 1);
			print_number(o);
			o++;
		}
		n++;
	}
}
