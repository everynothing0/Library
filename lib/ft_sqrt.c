// Not libft
// takes a single argument, here in double and returns its square root also in double there.
// Newton Raphson
//double	sqrt(double arg)

#include "lby.h"

int	ft_sqrt(int nb)
{
	int	previous;
	int	square_root;

	square_root = nb / 2;
	previous = 0;
	if (nb <= 0)
		return (0);
	while (square_root != previous)
	{

