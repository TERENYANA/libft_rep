/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyuskiv <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 15:46:59 by yyuskiv           #+#    #+#             */
/*   Updated: 2025/11/25 15:47:08 by yyuskiv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = 0;
		i++;
	}
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	// Overflow protection
	if (size != 0 && count > SIZE_MAX / size)
		return (NULL);

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);

	ft_bzero(ptr, count * size);
	return (ptr);
}

/*int	main(void)
{
	int	*arr;
	int	i;

	arr = ft_calloc(10, sizeof(int));
	if (!arr)
		return (1);

	for (i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	printf("\n");

	free(arr);
	return (0);
}*/
