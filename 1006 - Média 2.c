#include <stdio.h>

int main (void){
	
	double a, b, c, med;

	scanf("%lf%lf%lf", &a, &b, &c);

	med = (a * 2 + b * 3 + c * 5) / 10;

	printf("MEDIA = %.1lf\n", med);

	return 0;

}