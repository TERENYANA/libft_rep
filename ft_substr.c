/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyuskiv <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 16:12:04 by yyuskiv           #+#    #+#             */
/*   Updated: 2025/11/25 16:12:09 by yyuskiv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i;
	size_t s_len;
	char *substr;

	if (!s)
		return (NULL);

	// Get original string length
	s_len = 0;
	while (s[s_len])
		s_len++;

	// If start is beyond the string, return empty string
	if (start >= s_len)
		len = 0;
	else if (len > s_len - start)
		len = s_len - start;

	// Allocate substring
	substr = (char *)malloc((len + 1) * sizeof(char));
	if (!substr)
		return (NULL);

	// Copy characters
	i = 0;
	while (i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';

	return (substr);
}
/*int	main(void)
  {
  char *str = "Hello, world!";
  char *sub;

  sub = ft_substr(str, 7, 5);
  if (sub)
  {
  printf("Substring: %s\n", sub);
  free(sub);
  }
  else
  printf("Memory allocation failed\n");
  return (0);
  }*/
