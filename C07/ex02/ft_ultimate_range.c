/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowoundi <jowoundi@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 08:40:07 by jowoundi          #+#    #+#             */
/*   Updated: 2024/07/21 15:49:49 by jowoundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	x;

	x = 0;
	*range = malloc(sizeof(int) * (max - min));
	if (!range)
	{
		*range = 0;
		return (-1);
	}
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	while (min < max)
	{
		(*range)[x] = min;
		x++;
		min++;
	}
	return (x);
}

/*#include <stdio.h>

int main()
{
	int	min = 7;
	int	max = 9;
	int *range;
	int x = 0;
	int size = ft_ultimate_range(&range, min, max);

	while (x < size)
	{
		printf("%d\n", range[x]);
		x++;
	}
}*/
