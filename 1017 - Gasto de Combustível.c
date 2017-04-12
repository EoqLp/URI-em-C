#include <stdio.h>

 int main(void)
{

	int tempo, velMedia;
	double litros;


	scanf("%d", &tempo);
	scanf("%d", &velMedia);
 	
	litros = tempo * velMedia / 12.000;

	printf("%.3lf\n", litros);
 
	return 0;
}