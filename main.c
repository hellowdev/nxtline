
#include "get_next_line.h"

int main()
{
    int fd2 = open("te.txt", O_RDWR);
    // printf("%s", get_next_line(fd2));
    // printf("%s", get_next_line(fd2));
    // printf("%s", get_next_line(fd2));
    // printf("%s", get_next_line(fd2));
    // printf("\n-------first call-----\n");
    printf("%s", get_next_line(fd2));
    // printf("-------first call-----");
    // printf("\n-------second call-----\n");
    printf("%s", get_next_line(fd2));
    // printf("-------seconde call-----");
    
    
    // system("leaks a.out");
    
    
}