/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlmatlou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/08 16:45:34 by tlmatlou          #+#    #+#             */
/*   Updated: 2020/07/10 08:49:26 by tlmatlou         ###   ########.fr       */
/*                                                                            */
	/* ************************************************************************** */
#include<unistd.h>
		
	void ft_putchar(char c)
	{
		write(1,&c,1);

	}
	void ft_is_negative(int i)
	{
		char p = 'P';
		char n = 'N';
		
		if(i>0)
		{
			//write(1,"P",1);
			ft_putchar(p);
		}
		else 
			//write(1,"N",1);
		ft_putchar(n);
}

int main(void)
{
	ft_is_negative(4);
	return 0;
}
