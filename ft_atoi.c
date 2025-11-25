/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyuskiv <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 15:42:20 by yyuskiv           #+#    #+#             */
/*   Updated: 2025/11/25 15:44:56 by yyuskiv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int atoi(const char *str)
{
	int i;
	int sign;
	int result;

	i = 0;
	sign = 1;
	result = 0;

	// Ignorer les espaces blancs initiaux
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;

	// Gérer le signe
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}

	// Convertir les chiffres en entier
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

/*int main(int argc, char *argv[])
  {
  if (argc != 2)
  {
  printf("Usage: %s <string>\n", argv[0]);
  return (1);
  }
  printf("%d\n", atoi(argv[1]));
  return 0;
  }*/
