/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowoundi <jowoundi@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 15:49:27 by jowoundi          #+#    #+#             */
/*   Updated: 2024/07/23 23:23:55 by jowoundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	x;

	x = 0;
	if (nb == 0)
		return (1);
	else if (nb == 1)
		return (1);
	else if (nb < 0)
		return (0);
	x = nb - 1;
	while (x > 1)
	{
		nb = nb * x;
		x--;
	}
	return (nb);
}

/*#include <stdio.h>

int main()
{
	printf("%d\n", ft_iterative_factorial(5));
	return (0);
}*/
