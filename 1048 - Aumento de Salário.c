#include <stdio.h>

int main ()
{

	double x, per, new, rea;
	int perc;

	scanf("%lf", &x);

	if(x >= 0  && x <= 400.00)
	{
		rea = x * 15/100;
		new = x + rea;
		perc = 15;
	}
	else if(x > 400 && x <= 800)
	{
		rea = x*12/100;
		new = x + rea;
		perc = 12;
	}
	else if(x > 800 && x <= 1200)
	{
		rea = x*10/100;
		new = x + rea;
		perc = 10;
	}
	else if(x > 1200 && x <= 2000)
	{
		rea = x*7/100;
		new = x + rea;
		perc = 7;
	}
	else if(x > 2000)
	{
		rea = x*4/100;
		new = x + rea;
		perc = 4;
	}

	printf("Novo salario: %.2lf\n", new);
	printf("Reajuste ganho: %.2lf\n", rea);
	printf("Em percentual: %d %%\n", perc);

	return 0;

}