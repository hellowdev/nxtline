
#include "get_next_line.h"

int main()
{
    int fd2 = open("te.txt", O_RDWR);
    printf("\n------- call-----\n");
    printf("RETURN>> [%s]\n", get_next_line(fd2));
    printf("\n------------------------\n");
    printf("RETURN>> [%s]", get_next_line(fd2));
    printf("\n-----------------------\n");
    printf("RETURN>> [%s]", get_next_line(fd2));
    printf("\n---------------------\n");
    printf("RETURN>> [%s]", get_next_line(fd2));
    printf("\n--------------------\n");
    printf("RETURN>> [%s]", get_next_line(fd2));
    printf("\n-------------------\n");
    printf("RETURN>> [%s]", get_next_line(fd2));
    printf("\n------------------\n");
    printf("RETURN>> [%s]", get_next_line(fd2));
    printf("\n-----------------\n");
    printf("RETURN>> [%s]", get_next_line(fd2));
    
    
}