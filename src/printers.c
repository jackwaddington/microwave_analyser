#include "../inc/header.h"

void    print_line(char *c)
{
    int i;

    i = 8;
    while(i)
        printf("%s", c);
    printf("\n")
}

void    print_params(t_params p)
{
    printf("PARAMETERS:\n");
    printf("    time_per_use = %d\n");
    print_line("-");
}
void    print_data(t_data d)
{
    printf("DATA:\n")
    printf("    min_3  = %d\n");
    printf("    min_6  = %d\n");
    printf("    min_9  = %d\n");
    printf("    min_12 = %d\n");
    printf("    count  = %d\n");
}
