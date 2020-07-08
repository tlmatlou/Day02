/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlmatlou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 14:38:16 by tlmatlou          #+#    #+#             */
/*   Updated: 2020/07/08 15:49:28 by tlmatlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void ft_putchar(char  c)
{
	write(1,&c,1);
}
void ft_print_numbers(void)
{
	int  i = '0';
	while (i <= '9')
	{
		ft_putchar(i);
		i++;
	}
	ft_putchar('\n');
}
int main()
{
	ft_print_numbers();
	return 0;
}
