/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   problem2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 15:15:29 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/26 15:36:13 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int a;
	int b;
	int c;
	int	max;
	int	sum;

	a = 1;
	b = 1;
	max = 4000000;
	sum = 0;
	while (b < max)
	{
		if (b % 2 == 0)
			sum = sum + b;
		c = a + b;
		a = b;
		b = c;
	}
	return (sum);
}
