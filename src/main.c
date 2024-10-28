#include "../inc/header.h"

int main(int argv, char **argv)
{
    t_data      *data;
    t_params    *params;

    data = malloc(sizeof(t_data));
    if(!data)
        return(NULL);
    params = malloc(sizeof(t_params));
        return (NULL);

	init_env(data, params);
    process_data();

}

