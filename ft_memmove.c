/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyuskiv <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 15:55:02 by yyuskiv           #+#    #+#             */
/*   Updated: 2025/11/25 15:55:08 by yyuskiv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>

void *memmove(void *dst, const void *src, size_t len)
{
	size_t i;
	unsigned char *d;
	const unsigned char *s;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;

	// Si les zones se chevauchent et que src < dst
	// on copie de la fin vers le début
	if (s < d && s + len > d)
	{
		i = len;
		while (i > 0)
		{
			i--;
			d[i] = s[i];
		}
	}
	// Sinon, copie normale du début vers la fin
	else
	{
		i = 0;
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}

/*int main(void)
{
	char arr1[] = "ABCDEFGH";
	printf("Avant:  %s\n", arr1);
	memmove(arr1 + 3, arr1, 4);
	printf("Après:  %s\n\n", arr1);

	char arr2[] = "ABCDEFGH";
	printf("Avant:  %s\n", arr2);
	memmove(arr2, arr2 + 3, 4);
	printf("Après:  %s\n", arr2);

	return 0;
}*/
