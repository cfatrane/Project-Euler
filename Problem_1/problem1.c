/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   problem1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 15:16:39 by cfatrane          #+#    #+#             */
/*   Updated: 2017/06/20 14:42:46 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int mult;
	int res;

	mult = 0;
	res = 0;
	while (mult < 1000)
	{
		if (mult % 3 == 0 || mult % 5 == 0)
		{
			res += mult;
		}
		mult++;
	}
	printf("%d\n", res);
	return (0);
}
