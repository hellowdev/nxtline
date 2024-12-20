/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychedmi <ychedmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 16:22:04 by ychedmi           #+#    #+#             */
/*   Updated: 2024/12/19 16:42:45 by ychedmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

char	*get_next_line(int fd);
char	*join(char *str1, char *str2);
int		newline(char *buff);
char	*takeme(char *holder);
int		ft_strlen(char *str);
int		newline(char *buff);
char	*afternwl(char *holder);
int		newline(char *buff);
void	*ft_free(char **p);

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif
#endif