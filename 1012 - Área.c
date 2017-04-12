#include <stdio.h>
#include <math.h>

int main(void){
	
	double at, ac, atr, aq, ar;
	double a, b, c, pi = 3.14159;

	scanf("%lf%lf%lf", &a, &b, &c);

	at = a * c / 2;
	ac = pow(c,2) * pi;
	atr = (a+b) * c / 2;
	aq = pow(b,2);
	ar = b * a;

	printf("TRIANGULO: %.3lf\n", at);
	printf("CIRCULO: %.3lf\n", ac);
	printf("TRAPEZIO: %.3lf\n", atr);
	printf("QUADRADO: %.3lf\n", aq);
	printf("RETANGULO: %.3lf\n", ar);


	return 0;
	
}