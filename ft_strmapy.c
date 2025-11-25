/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyuskiv <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 16:10:36 by yyuskiv           #+#    #+#             */
/*   Updated: 2025/11/25 16:10:42 by yyuskiv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
static size_t ft_strlen(const char *s)
{
	size_t i = 0;
	while (s[i])
		i++;
	return (i);
}
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int i;
	char *result;
	if (!s || !f)
		return NULL;
	result = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!result)
		return NULL;
	i = 0;
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return result;
}

// for test
char to_upper(unsigned int i, char c)
{
	(void)i;
	if (c >= 'a' && c <= 'z')
		return c - 32;
	return c;
}

/*int main(void)
  {
  char *original = "Hello World";
  char *result = ft_strmapi(original, to_upper);
  if (result)
  {
  printf("Original: %s\n", original);
  printf("Result:   %s\n", result);
  free(result);
  }
  }*/
