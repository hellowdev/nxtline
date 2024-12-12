#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
char *get_next_line(int fd);
char *join(char *str1, char *str2);
char *getret(int i, char *y);
int nr(char *str);
int nwline(char *str);
char *afternw(int x, char *y);
int ft_strlen(char *str);
#endif
#ifndef BUFFER_SIZE
#define BUFFER_SIZE 5
#endif
