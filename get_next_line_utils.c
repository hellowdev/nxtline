#include "get_next_line.h"
#include <string.h>

char *join(char *str1, char *str2)
{
	
	int i;
	int j;
	char *p;
	int n = 0;
	int t = ft_strlen(str2);
	j = ft_strlen(str1);
	i = 0;
	// static char *n;
	if(!str1)
		return getret(t + 1, str2);
	if (!str2)
		return getret(j + 1, str1);
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