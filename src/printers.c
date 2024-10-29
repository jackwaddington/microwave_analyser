#include "../inc/header.h"

void    print_line(char *c)
{
    int i;

    i = 8;
    while(i--)
        printf("%s", c);
    printf("\n");
}

void    print_params(t_params *p)
{
    printf("PARAMETERS:\n");
    printf("    time_per_use = %d\n", p->time_per_use);
    print_line("-");
}
void    print_data(t_data *d)
{
    printf("DATA:\n");
    printf("    min_0  = %d\n", d->min_0);
    printf("    min_3  = %d\n", d->min_3);
    printf("    min_6  = %d\n", d->min_6);
    printf("    min_9  = %d\n", d->min_9);
    printf("    min_12 = %d\n", d->min_12);
    printf("    count  = %d\n", d->count);
    printf("    lunch_count = %d\n", d->lunch_count);
    printf("    total_uses_per_day = %d\n", d->total_uses_per_day);
    print_line("-");
}
void    print_wadd(t_wadd *w)
{
    printf("WADDINGTON or is this normalised??:\n");
    printf("    n_min_0  = %f\n", w->n_min_0);
    printf("    n_min_3  = %f\n", w->n_min_3);
    printf("    n_min_6  = %f\n", w->n_min_6);
    printf("    n_min_9  = %f\n", w->n_min_9);
    printf("    n_min_12 = %f\n", w->n_min_12);
    printf("    n_count  = %f\n", w->n_count);
    print_line("-");
}
