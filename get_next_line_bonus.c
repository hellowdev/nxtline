/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychedmi <ychedmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 13:12:04 by ychedmi           #+#    #+#             */
/*   Updated: 2024/12/25 13:14:28 by ychedmi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*afternwl(char *str)
{
	int		i;
	int		j;
	char	*p;

	j = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
		{
			p = malloc(ft_strlen(str) - i + 1);
			if (!p)
				return (free(str), NULL);
			while (str[i])
				p[j++] = str[(i++) + 1];
			p[j] = '\0';
			free(str);
			return (p);
		}
		i++;
	}
	free(str);
	return (NULL);
}

char	*takeme(char *str)
{
	char	*dog;
	int		j;
	int		i;

	i = 0;
	j = 0;
	if (newline(str) != -1)
		i = newline(str);
	else
		i = ft_strlen(str);
	dog = malloc(i + 1);
	if (!str || !dog)
		return (NULL);
	while (str[j] && j < i)
	{
		dog[j] = str[j];
		j++;
	}
	dog[j] = '\0';
	return (dog);
}

char	*get_next_line(int fd)
{
	int			v;
	char		*buffer;
	static char	*str[OPEN_MAX];
	char		*all;

	if (!str[fd])
		str[fd] = takeme("");
	v = 1;
	buffer = malloc(BUFFER_SIZE + 1);
	while (v > 0 && newline(str[fd]) == -1)
	{
		v = read(fd, buffer, BUFFER_SIZE);
		if (v < 0 || !buffer)
			return (free(str[fd]), str[fd] = NULL, free(buffer), NULL);
		buffer[v] = '\0';
		str[fd] = join(str[fd], buffer);
	}
	free(buffer);
	if (!str[fd] || (v == 0 && str[fd][0] == '\0'))
		return (free(str[fd]), str[fd] = NULL, NULL);
	all = takeme(str[fd]);
	if (!all)
		return (free(str[fd]), str[fd] = NULL, NULL);
	str[fd] = afternwl(str[fd]);
	return (all);
}
