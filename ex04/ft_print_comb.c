/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlmatlou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 12:14:11 by tlmatlou          #+#    #+#             */
/*   Updated: 2020/07/09 12:50:07 by tlmatlou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
void ft_putchar(char c)
{
	write(1,&c,1);
}
void ft_print_comb(void)
{
	char a = '0';
	while(a <= '9')
	{
		a++;
		ft_putchar(a);
	}
	//ft_putchar(a);
}
int main()
{
	ft_print_comb();
	return 0;
}
