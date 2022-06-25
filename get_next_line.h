/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpaux <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 20:39:18 by kpaux             #+#    #+#             */
/*   Updated: 2022/06/23 20:39:20 by kpaux            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

# define BUFFER_SIZE

size_t	ft_strlen(char *str);
char	ft_putstr(char *str)
int		ft_end_of_line (char *str);
char	*ft_strjoin(char const *str1, char const *str2);


#endif
