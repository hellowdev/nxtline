/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychedmi <ychedmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 15:48:16 by ychedmi           #+#    #+#             */
/*   Updated: 2024/12/19 17:00:23 by ychedmi          ###   ########.fr       */
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
