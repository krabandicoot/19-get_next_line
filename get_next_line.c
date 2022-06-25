/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpaux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 20:39:01 by kpaux             #+#    #+#             */
/*   Updated: 2022/06/23 20:39:03 by kpaux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_free(char **str)
{
	size_t	i;
	while (i)
	{
		i--;
		free(str[i]);
	}
	free (str);
	return (0);
}

char	*get_next_line(int	fd)
{
	char		*line;
	static char	*rem

	fd = open("numbers.dict", O_RDONLY);
	i = 0;

	if (fd < 0 || BUFFER_SIZE < 0)
		return (NULL);
	rem = 
	{
		line = get_next_line(fd);
		ft_putstr(line);
		i++;
	}
}

