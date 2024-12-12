
#include "get_next_line.h"

int main()
{
    int fd2 = open("te.txt", O_RDWR);
    // printf("%s", get_next_line(fd2));
    // printf("%s", get_next_line(fd2));
    // printf("%s", get_next_line(fd2));
    // printf("%s", get_next_line(fd2));
    printf("\n-------first call-----\n");;
    printf("RETURN ==== %s", get_next_line(fd2));
    printf("\n-------seconde call-----\n");
    printf("RETURN ==== %s", get_next_line(fd2));
    printf("\n-------3 call-----\n");
    printf("RETURN ==== %s", get_next_line(fd2));
    printf("\n-------4 call-----\n");
    printf("RETURN ==== %s", get_next_line(fd2));
    printf("\n-------5 call-----\n");
    printf("RETURN ==== %s", get_next_line(fd2));
    printf("---");
    // system("leaks a.out");
    
    
}