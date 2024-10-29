#include "../inc/header.h"

int waddington_report(t_data *d, t_params *p)
{
    int lunch_minutes = d->lunch_count * p->time_per_use;
    int total_minutes = d->total_uses_per_day * p->time_per_use;
    int lm = lunch_minutes;
    int i = 1;

    t_wadd *w = malloc(sizeof(t_wadd));

    normalise_data(d, w);

    print_wadd(w);


    print_line("=");
    printf("Waddington Report\n");
    print_line("=");
    // print_params(p);
    // print_data(d);

    printf("!! we need to normalise the data, to talk about it being per 100\n");
    printf("Students: %d\n", p->students);
    printf("Lunch minutes: %d\n", lunch_minutes);
    printf("Total minutes: %d\n", total_minutes);
    print_line("=");
    while(lm < 120)
    {
        printf("If we have %d microwave, ", i);
        printf("it will take %d minutes to heat up our lunches\n", lm);
        i++;
    }

printf("normalise data\n");
printf("calculate minutes based on number of students \n");
printf("model for number of microwaves \n");


    return (42);
}   