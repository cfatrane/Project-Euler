/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   problem3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/26 15:37:46 by cfatrane          #+#    #+#             */
/*   Updated: 2017/01/26 15:42:44 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	int			i;
	long int	num;

	num = 600851475143;
	while (69)
	{
		i = 2;
		while (i <= num)
		{
			if (num % i == 0)
			{
				printf("%d", i);
				num /= i;
				break ;
			}
			i++;
		}
		if (num == 1)
			break ;
		else
			printf("*");
	}
	printf("\n");
	return (0);
}
