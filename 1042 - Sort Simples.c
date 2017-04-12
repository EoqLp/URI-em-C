#include <stdio.h>

int main (void)
{

	int a, a1, b, b1, c, c1, aux;

	scanf("%d%d%d", &a, &b, &c);

	a1 = a;
	b1 = b;
	c1 = c;

	if(a > b){
		aux = b;
		b = a;
		a = aux;
	}

	if (a > c){
		aux = c;
		c = a;
		a = aux;
	}

	if (b > c){
		aux = c;
		c = b;
		b = aux;
	}

	printf("%d\n%d\n%d\n\n", a, b, c);
	printf("%d\n%d\n%d\n", a1, b1, c1);

	return 0;


}