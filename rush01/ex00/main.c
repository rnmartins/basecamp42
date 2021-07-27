#include "libprint.h"
#include "libutils.h"
#include "solve.h"

int	main(int argc, char *argv[])
{
	if (argc == 2)
		solve(4, custom_atoi(argv[1]));
	else
		ft_putstr("Error\n");
	return (0);
}