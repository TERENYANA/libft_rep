/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyuskiv <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 16:08:35 by yyuskiv           #+#    #+#             */
/*   Updated: 2025/11/25 16:08:44 by yyuskiv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_strlen(const char *str)
{
	int len = 0;
	while (str[len] != '\0')
		len++;
	return len;
}

char *ft_strdup(const char *s1)
{
	char *new;
	int i = 0;

	new = (char *)malloc(ft_strlen(s1) + 1);
	if (!new)
		return NULL;

	while (s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	new[i] = '\0';

	return new;

}

/*int main(void)
  {
  char original[] = "Hello, world!";
  char *copy = ft_strdup(original);


  if (copy)
  {
  printf("Original: %s\n", original);
  printf("Copy    : %s\n", copy);
  free(copy);
  }
  else
  printf("Memory allocation failed\n");

  return 0;
  }*/


