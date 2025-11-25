/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyuskiv <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 15:55:37 by yyuskiv           #+#    #+#             */
/*   Updated: 2025/11/25 15:56:07 by yyuskiv          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*int main(void)
  {
  ft_putchar_fd('A', 1); // Should print 'A' to standard output
  ft_putchar_fd('\n', 1); // New line for better readability
  return 0;
  }*/
