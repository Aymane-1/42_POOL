/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aechafii <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 11:15:37 by aechafii          #+#    #+#             */
/*   Updated: 2021/07/11 15:15:31 by aechafii         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	else if (str[0] == '\0')
		return (0);
	else if (str[0] == '\0' && to_find[0] == '\0')
		return (0);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (str + i);
			j++;
		}
		i++;
	}
	return (0);
}
