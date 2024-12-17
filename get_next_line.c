#include "get_next_line.h"

char *afternwl(char *str, int len)
{
	int i;
	int j;
	char *p;
	j = 0;
	i = 0;
	p = malloc(ft_strlen(str) - len + 1);
	// printf("nwl len > %d\n", ft_strlen(str));
	// printf("len all > %d\n", len);
	// printf("this total > %d\n", ft_strlen(str) - len + 1);
	while (str[i])
	{
		if (str[i] == '\n')
		{
			while (str[i])
			{
				p[j] = str[i];
				j++;
				i++;
			}
			p[j] = '\0';
			return (p + 1);
		}
	i++;
	}
	return NULL;
}

char *takeme(char *str)
{
	char *dog;
	int j;
	int i;

	i = 0;
	j = 0;
	if (newline(str) != -1)
		i = newline(str);
	else
		i = ft_strlen(str);
	dog = malloc(i + 1);
	while (str[j] && j < i)
		{
			dog[j] = str[j];
			j++;
		}
	dog[j] = '\0';
	return (dog);
}

char *get_next_line(int fd)
{
	int v = 1;
	char *buffer;
	static char *holder;
	char *str;
	char *all;
	str = "";
	
	str = join(holder, str);
	buffer = malloc(BUFFER_SIZE + 1);
	while (v > 0 && newline(str) == -1)
	{
		v = read(fd, buffer, BUFFER_SIZE);
		buffer[v] = '\0';
		str = join(str, buffer);
	}
	if (v == 0 && str[0] == '\0')
		return NULL;
	all = takeme(str);
	holder = afternwl(str, ft_strlen(all));
	free(buffer);
	return (all);
}
