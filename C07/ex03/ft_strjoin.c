/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowoundi <jowoundi@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 13:29:46 by jowoundi          #+#    #+#             */
/*   Updated: 2024/07/24 13:04:56 by jowoundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	x;

	x = 0;
	while (str[x])
		x++;
	return (x);
}

void	ft_strcat(char **strs, char *sep, char *res, int size)
{
	int	x;
	int	y;
	int	pos;

	x = 0;
	pos = 0;
	while (x < size)
	{
		y = 0;
		while (strs[x][y])
		{
			res[pos++] = strs[x][y++];
		}
		if (x < size - 1)
		{
			y = 0;
			while (sep[y])
			{
				res[pos++] = sep[y++];
			}
		}
		x++;
	}
	res[pos] = '\0';
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		x;
	int		total_lenght;
	int		size_sep;
	char	*res;

	x = 0;
	size_sep = ft_strlen(sep);
	while (x < size)
	{
		total_lenght = ft_strlen(strs[x]);
		x++;
	}
	total_lenght = total_lenght + (size_sep * (size - 1));
	res = malloc(sizeof(char) * (total_lenght + 1));
	ft_strcat(strs, sep, res, size);
	return (res);
}

/*#include <stdio.h>

int	main(void)
{
	int	size = 4;
	char	*strs[] = {"Hello", "World", "it's", "me"};
	char	sep[] = "-";
	ft_strjoin(size, strs, sep);
	printf("%s", ft_strjoin(size, strs, sep));
}*/
