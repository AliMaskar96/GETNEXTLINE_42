/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-mas <aait-mas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 14:06:54 by aait-mas          #+#    #+#             */
/*   Updated: 2021/12/10 05:00:03 by aait-mas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*malgitch_n(char **s)
{
	char	*temp;

	if (*s && **s != '\0')
	{
		temp = *s;
		*s = NULL;
		return (temp);
	}
	else
	{
		free(*s);
		*s = NULL;
		return (NULL);
	}
}

char	*lgit_n(char **s)
{
	char	*line;
	int		i;
	char	*temp;

	i = ft_strchr(*s, '\n');
	line = ft_substr(*s, 0, i + 1);
	temp = *s;
	*s = ft_substr(*s, i + 1, (ft_strlen(*s) - i));
	free(temp);
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*str[1024];
	char		buffer[BUFFER_SIZE + 1];
	int			ret;

	if (fd < 0 || BUFFER_SIZE < 0)
		return (NULL);
	if (str[fd] == NULL)
	{
		str[fd] = ft_strdup("");
		if (!str[fd])
			return (NULL);
	}
	while (ft_strchr(str[fd], '\n') == -1)
	{
		ret = read(fd, buffer, BUFFER_SIZE);
		if (ret == 0 || ret == -1)
			break ;
		buffer[ret] = '\0';
		str[fd] = ft_strjoin(str[fd], buffer);
	}
	if (ft_strchr(str[fd], '\n') == -1)
		return (malgitch_n(&str[fd]));
	return (lgit_n(&str[fd]));
}
