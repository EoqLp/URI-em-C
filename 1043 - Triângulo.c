#include <stdio.h>
#include <math.h>

int main (void)
{

	double a, b, c, area, per, aux;

	scanf("%lf%lf%lf", &a, &b, &c);

	if(a<b){
		aux = b;
		b = a;
		a = aux;
	}

	if(c>a){
		aux = c;
		c = a;
		a = aux;
	}

	if(a>=b+c){
		area = (a+b)*c /2;
		printf("Area = %.1lf\n", area);
	}
	else{
		per = a + b + c;
		printf("Perimetro = %.1lf\n", per);
	}


return 0;
}