#include <stdio.h>


int main(void){
	
	int X;
	float Y, aux, gasto;

	scanf("%d", &X);
	scanf("%f", &Y);

	aux = X;
	gasto = aux / Y;

	printf("%.3f km/l\n", gasto);

	return 0;

}
