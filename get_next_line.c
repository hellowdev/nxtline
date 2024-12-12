#include "get_next_line.h"
#include <string.h>

int nwline(char *str)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
		{
			//printf("this is nwline%d\n", i);
			return i + 1;
		}
		i++;
	}
	
return i;
}
int nr(char *str)
{
	int i = 0;
	if (!str)
		return 0;

	while (str[i])
	{
		if(str[i] == '\n')
			return -1;
	i++;
	}
	return i;
}

char *getret(int i, char *y)
{
	char *z;
	int j;
	int n;
	j = 0;
	n = 0;
	
	// if (!y)
	// 	return (NULL);
	z = malloc(i);
	if (!z)
		return (NULL);
	while (n < i)
	{
		z[n] = y[j];
		j++;
		n++;
	}
	z[n] = '\0';
	return (z);
}
char *afternw(int x, char *k)
{
	int i;
	int j;
	char *rtn;
	j = 0;
	i = 0;
	int total;
	total = (ft_strlen(k) - x);
	while (k[i])
	{
		if(k[i - 1] == '\n')
		{
			rtn = getret(total, k + i);
			printf("i >> %d\n", i);
			return (rtn);
		}
	i++;
	}
	return (NULL);
}
char *get_next_line(int fd)
{
	int sz;
	static char *k;
	char *x;
    char *p;
    int i;
	i = 0;
	sz = 1;
	p = malloc(BUFFER_SIZE + 1);
	printf("KA >>>> %s\n", k);
	if(!p)
		return NULL;
	while (sz != 0 && nr(k) != -1)
	{
		sz = read(fd, p, BUFFER_SIZE);
		p[sz] = '\0';
		k = join(k, p);
		if(nr(k) != -1)
		{
			i += sz;
		}
		else
			i = nwline(k);
	}
	x = getret(i, k);
	
	k = afternw(i, k);
	printf("this is i if >> %d\n", i);
	return (x);
}


