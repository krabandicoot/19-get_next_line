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