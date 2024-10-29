#include "../inc/header.h"

int main(int argc, char **argv)
{
    int r;
    int s;
    t_data      *d;
    t_params    *p;

    r = -1;

    d = malloc(sizeof(t_data));
    if(!d)
        return(-1);

    p = malloc(sizeof(t_params));
    if(!p)
        return (-1);

    if (argc > 1 && argc < 4)
    {
        s = atoi(argv[1]);
        init_env(d, p, s);
        if(argc == 3 && !strcmp(argv[2], "-v"))
        {
            print_params(p);
            print_data(d);

            r = waddington_report(d, p);
            return (r);
        }

        if(argc == 2)
        {
            r = waddington_report(d, p);
            return (r);
        }
    }
    else
    {
        printf("Usage: %s <number of students>\n", argv[0]);
        printf("   Or: %s <number of students> <-v> for more output\n", argv[0]);
    }

	// init_env(d, p);
    // process_data();
    return (r);
}

