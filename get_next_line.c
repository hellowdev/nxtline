#include "get_next_line.h"
#include <string.h>

char *afternwl(char *between)
{
	char *sauce;
	int i;
	i = 0;
	int newlineh = newline(between);
	int total = strlen(between) - newlineh;
	sauce = malloc(total + 1);
	

	while (between[i] && i < total)
	{
		sauce[i] = between[newlineh];
		i++;
		newlineh++;
	}
	
	sauce[i] = '\0';
	// printf("sauce >> %s\n", sauce);
	return (sauce);
}


char *takeme(char *holder)
{
	char *dog;
	int j;
	int i;
	j = 0;
	if (newline(holder) != -1)
	{
		i = newline(holder);
		dog = malloc(newline(holder) + 1);
	}
	else
	{
		i = counttonwl(holder);
		dog = malloc(counttonwl(holder));
	}
	while (holder[j] && j < i)
		{
			dog[j] = holder[j];
			j++;
		}
	dog[j] = '\0';
	return (dog);
}

char *get_next_line(int fd)
{
	int i;
	int v = 1;
	char *buffer;
	static char *x;
	char *holder;

	holder = "";
	buffer = malloc(BUFFER_SIZE + 1);
	i = 0;
	while (v != 0 && newline(holder) == -1)
	{
		v = read(fd, buffer, BUFFER_SIZE);
		buffer[v] = '\0';
		holder = join(holder, buffer);
		// printf(" i  %d\n", i);
	}
	// x = malloc(strlen(holder));
	// afternwl(holder);
	x = afternwl(holder);
	holder = takeme(holder);
	// printf("sauce >>>  %s\n", x);
	// holder = join(x, holder);
	// printf("sauce >>>  %s\n", x);
	// printf(" >. %s\n", holder);
	return (holder);
}
