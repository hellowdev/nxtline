#include "get_next_line.h"
#include <string.h>

char *join(char *str1, char *str2)
{
	int i;
	int j;
	char *p;
	int n;
	n = 0;
	int t;
	t = ft_strlen(str2);
	j = ft_strlen(str1);
	i = 0;
	// if(!str1)
	// 	return ret(str2);
	// if (!str2)
	// 	return ret(str1);
	p = malloc(t + j + 1);
	while (str1[i])
	{
		p[i] = str1[i];
		i++;
	}
	while (str2[n])
		p[i++] = str2[n++];
	p[i] = '\0';
	return (p);
}
int newline(char *buff)
{
	int i;
	i = 0;

	while (buff[i])
	{
		if (buff[i] == '\n')
			return i + 1;
	i++;
	}
	return (-1);
}
int counttonwl(char *buff)
{
	int i;
	i = 0;
	while (buff[i])
	{
		if(buff[i] == '\n')
			return (i);
	i++;
	}
	return (i);
}
int ft_strlen(char *str)
{
	int i;
	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

// int main()
// {
// 	char dst[] = "123456789";
// 	// char test1[] = "xxmy hello";
	
// 	// char dst[] = "world";
// 	// char sym = '\n';
// 	printf("%d\n", nstring(dst));
// 	printf("%d\n", nstring(dst));
// 	// printf("%s\n", dst);
// }