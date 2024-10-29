#include "../inc/header.h"

static void init_params(t_params *p, int s)
{
    // read the top line of the file,
    // after the '=' and assign that number to
    // the stuct
    p->time_per_use = 5;
    p->students = s;

}

static int count_total(t_data *d)
{
    return (d->min_0 +
            d->min_3 +
            d->min_6 +
            d->min_9 +
            d->min_12);
}

static int lunch_count(t_data *d)
{
    return (d->min_0 * 0 +
            d->min_3 * 1 +
            d->min_6 * 1 +
            d->min_9 * 1 +
            d->min_12 * 1);
}
static int  total_uses_per_day(t_data *d)
{
    return (d->min_0 * 0 +
            d->min_3 * 1 +
            d->min_6 * 2 +
            d->min_9 * 3 +
            d->min_12 * 4);
}

// static int  lunch_minutes(t_data *d)
// {
//     we should get the 5 from the params, but here we don't have access to that info
//     return (d->lunch_count * 5);
// }

void    normalise_data(t_data *d, t_wadd *w)
{
    // printf("test %d, %d\n", (d->min_3) / (d->count), 1);
    w->n_min_0 = (float)d->min_0 / d->count * 100;
    w->n_min_3 = (float)d->min_3 / d->count * 100;
    w->n_min_6 = (float)d->min_6 / d->count * 100;
    w->n_min_9 = (float)d->min_9 / d->count * 100;
    w->n_min_12 = (float)d->min_12 / d->count * 100;
}

static void  init_data(t_data *d)
{
    // if there is an input file, us that

    // if there is data in the ../data/sample_data.csv, use that

    // else

    d->min_0 = 8;
    d->min_3 = 27;
    d->min_6 = 7;
    d->min_9 = 0;
    d->min_12 = 2;
    d->count = count_total(d);
    d->lunch_count = lunch_count(d);
    d->total_uses_per_day = total_uses_per_day(d);

    // d->lunch_minutes = lunch_minutes(d);
    // d->total_minutes = total_minutes(d);
}
void	init_env(t_data *d, t_params *p, int s)
{
    init_params(p, s);
    init_data(d);
}
// if there was a fie passed in, load that

// if there is sample data, load it into stuct.

// else
// load this data