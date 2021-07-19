/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aechafii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 10:02:25 by aechafii          #+#    #+#             */
/*   Updated: 2021/06/30 10:02:42 by aechafii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int	count;
	int	temp;

	count = -1;
	while (count++ < --size)
	{
		temp = tab[count];
		tab[count] = tab[size];
		tab[size] = temp;
	}
}
