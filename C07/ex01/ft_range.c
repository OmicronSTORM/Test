/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowoundi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 23:10:54 by jowoundi          #+#    #+#             */
/*   Updated: 2024/07/24 12:12:36 by jowoundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	x;
	int	*tab;
	int	range;

	x = 0;
	range = max - min;
	if (min >= max)
		return (NULL);
	tab = malloc(sizeof(int) * range);
	if (tab == NULL)
		return (NULL);
	while (min < max)
	{
		tab[x] = min;
		x++;
		min++;
	}
	return (tab);
}

/*int	main(void)
{
	int min = 10;
	int max = 100;
	int* range = ft_range(min, max);
	int i  = 0;
	while (i < max - min)
	{
		printf("%d\n", range[i]);
		i++;
	}
}*/
