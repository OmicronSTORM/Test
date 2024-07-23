/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowoundi <jowoundi@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 12:50:33 by jowoundi          #+#    #+#             */
/*   Updated: 2024/07/23 12:59:49 by jowoundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	x;
	long	n;

	n = nb;
	if (n <= 0)
		return (0);
	if (n == 1)
		return (1);
	x = 2;
	if (n >= 2)
	{
		while (x * x <= n)
		{
			if (x * x == n)
				return (x);
			x++;
		}
	}
	return (0);
}

/*#include <stdio.h>

int	main()
{
	printf("nombre: %d, racine %d\n", 36, ft_sqrt(36));
}*/
