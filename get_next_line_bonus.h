/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-mas <aait-mas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 14:09:01 by aait-mas          #+#    #+#             */
/*   Updated: 2021/12/10 05:00:23 by aait-mas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include<fcntl.h>
# include<stdlib.h>
# include<stdio.h>
# include<unistd.h>

char	*ft_strjoin(char *s1, char *s2);
int		ft_strchr(char *s, int c);
char	*ft_substr(char *s, unsigned int start, size_t len);
int		ft_strlen(char *s);
char	*ft_strdup(char *s1);
char	*get_next_line(int fd);

#endif
