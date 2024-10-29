#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>	

// colours

struct s_params{
	int time_per_use;
	int students;
} typedef t_params;

struct s_data{
	int	min_0;
	int	min_3;
	int	min_6;
	int	min_9;
	int	min_12;
	float	n_min_0;
	float	n_min_3;
	float	n_min_6;
	float	n_min_9;
	float	n_min_12;
	int	count;
	int	lunch_count;
	int	total_uses_per_day;
}	typedef t_data;

struct s_wadd{
	float	n_min_0;
	float	n_min_3;
	float	n_min_6;
	float	n_min_9;
	float	n_min_12;
	float	n_count;
}	typedef t_wadd;



	void	init_env(t_data *d, t_params *p, int s);
	int		waddington_report(t_data *d, t_params *p);
	void	normalise_data(t_data *d, t_wadd *w);


	// printers
	void	print_params(t_params *p);
	void	print_data(t_data *d);
	void	print_line(char *c);

	void	print_wadd(t_wadd *w);
