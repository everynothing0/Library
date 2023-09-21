// returns the nearest integer value, which is less than or equal to the floating point number passed to it as an argument.
// not libft

//#include "lby.h"
//#include <math.h>
#include <stdio.h>
#include <unistd.h>

/*double	ft_pow(double base, double exponent)
{
	if (exponent == 0)
		return (1.0);
	if (exponent < 0)
	{
		base = 1.0 / base;
		exponent = -exponent;
	}
	if (exponent > 1)
	{
		double half_pow = ft_pow(base, exponent / 2);
		return (half_pow * half_pow);
	}
	return (base);
} */

int	ft_pow(double base, double exponent)
{
	double result = pow(base, exponent) + 1e-9;
	return (int)result;
}

double	ft_floor(double value)
{
	double integ_part = (double)((int)value);
	if (value >= 0.0)
	{
		if (value == integ_part || value == integ_part + 1.0)
			return (integ_part);
		else
			return (integ_part);
	}
	else
	{
		if (value == integ_part || value == integ_part - 1.0)
			return (integ_part);
		else
			return (integ_part - 1.0);
	}
}

int	main(void)
{
/*	int x = 3;
	double y = 2.1;
	double a = 2.5;
	double b = 3;
	double ans = ft_pow(x, y);
	double ab = ft_pow(a, b);
	printf("%f", ans);
	printf( "%f", ab);
	printf("%f", ft_pow(2, 0.5)); // result wait --> 1.414214
	printf("%f", ft_pow(-2.5, -3)); // result wait --> -0.064000
	return (0);

	double base = 2.0;
	double exponent = -3.0;
	double result = ft_pow(base, exponent);
	printf("%1f ^ %1f = %1f\n", base, exponent, result);
	return (0); */

	int x = ft_pow(4, 3);
	printf("%d\n", x);
	return (0);
}
