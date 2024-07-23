/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowoundi <jowoundi@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 15:50:21 by jowoundi          #+#    #+#             */
/*   Updated: 2024/07/23 11:50:39 by jowoundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	x;

	x = 0;
	if (power < 0)
		return (0);
	else if (nb == 1 || power == 0)
		return (1);
	x = nb;
	while (power > 1)
	{
		nb = nb * x;
		power--;
	}
	return (nb);
}

/*#include <stdio.h>

int main()
{
	printf("%d\n", ft_iterative_power(-2, 5));
	return (0);
}*/
