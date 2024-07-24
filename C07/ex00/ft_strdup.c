/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jowoundi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 10:00:37 by jowoundi          #+#    #+#             */
/*   Updated: 2024/07/24 12:10:00 by jowoundi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *count)
{
	int	x;

	x = 0;
	while (count[x])
		x++;
	return (x);
}

int	ft_strcpy(char *src, char *dest)
{
	int	x;

	x = 0;
	while (src[x])
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';
	return (0);
}

char	*ft_strdup(char *src)
{
	char	*a;
	int		x;

	x = ft_strlen(src);
	a = malloc(sizeof(char) * (x + 1));
	if (a == NULL)
		return (NULL);
	ft_strcpy(src, a);
	return (a);
}

/*#include <stdio.h>

int main()
{
	char src[] = "quelque chose";
	char *dest;
	dest = ft_strdup(src);
	printf("%s", dest);
	return (0);
}*/
