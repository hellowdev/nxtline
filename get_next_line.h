#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
char *get_next_line(int fd);
char *join(char *str1, char *str2);
int newline(char *buff);
char *takeme(char *holder);
int ft_strlen(char *str);
int newline(char *buff);
char *afternwl(char *holder);
int counttonwl(char *buff);
int newline(char *buff);
#endif
#ifndef BUFFER_SIZE
#define BUFFER_SIZE 5
#endif
