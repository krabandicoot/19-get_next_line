/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpaux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 20:39:08 by kpaux             #+#    #+#             */
/*   Updated: 2022/06/23 20:39:11 by kpaux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	ft_putstr(char *str)
{
	int i; 

	i = 0;
	while (str[i])
	{
		write(1, &str[i],1);
		i++;
	}
}

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strjoin(char const *str1, char const *str2) //revoir cette partie. 
{
	char	*str;
	int		i;
	int		j;

	if (!str1 || !str2)
		return(NULL);
	str = malloc(sizeof * (ft_strlen(str1) + ft_strlen(str2) + 1));
	while (str1[i])
	{
		str[i] = str1[i];
		i++;
	}
	while (str2[j])
	{
		str[i + j] = str2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str); 
} 

int		ft_end_of_line (char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i]) == '\n')
			return(i);
		i++;
	}
	return (0);
}
