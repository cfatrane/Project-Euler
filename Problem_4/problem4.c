/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   problem4.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfatrane <cfatrane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/20 14:41:08 by cfatrane          #+#    #+#             */
/*   Updated: 2017/06/21 13:43:53 by cfatrane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	is_pal(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = strlen(str) - 1;
	while (i != strlen(str) / 2)
	{
		printf("I = %c || J = %c\n", str[i], str[j]);
		if (str[i] != str[j])
		{
			printf("WRONG\n");
			return (0);
		}
		i++;
		j--;
	}
	printf("IS PAL\n");
	return (0);
}

int	main(int argc, char **argv)
{
	int	one;
	int	two;
	int	three;

	one = 999;
	two = 999;
	three = 999;
	while (is_pal())
	{
	}
	is_pal(argv[1]);
	return (0);
}
