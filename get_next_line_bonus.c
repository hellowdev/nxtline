/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychedmi <ychedmi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 16:20:12 by ychedmi           #+#    #+#             */
/*   Updated: 2024/12/20 20:17:09 by ychedmi          ###   ########.fr       */
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
				return (ft_free(&str));
			while (str[i])
				p[j++] = str[(i++) + 1];
			p[j] = '\0';
			free(str);
			return (p);
		}
		i++;
	}
	ft_free(&str);
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
#include <stdio.h>
char	*get_next_line(int fd)
{
	int			v;
	char		*buffer;
	static char	*str;
	char		*all;
	
	if (!str || (fd != str[fd]))
		str = takeme("");

		
	printf("check before > [%s]\n", str);
	printf("str fd>> [%d]\n", str[9]);
	printf("str fd>> [%d]\n", str[fd + BUFFER_SIZE]);
	// printf("str - 1>> %d\n", str[-1]);
	v = 1;
	buffer = malloc(BUFFER_SIZE + 1);
	while (v > 0 && newline(str) == -1)
	{
		v = read(fd, buffer, BUFFER_SIZE);
		if (v < 0 || !buffer)
			return (ft_free(&str), ft_free(&buffer));
		buffer[v] = '\0';
		str = join(str, buffer);
	}
	
	printf("after join > [%s]\n", str);
	
	ft_free(&buffer);
	if (!str || (v == 0 && str[0] == '\0'))
		return (ft_free(&str));
	all = takeme(str);
	// printf("fd 2 >> %d\n", str[fd]);
	
	if (!all)
		return (ft_free(&str));
	// if (fd != str[fd + BUFFER_SIZE])
		str[fd] = *afternwl(str);
	printf("fd 3> [%d]\n", str[fd]);
	printf("after nwl> [%s]\n", str);
	return (all);
}
