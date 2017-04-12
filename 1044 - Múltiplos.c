#include <stdio.h>

int main(void){
	int a, b, aux;

	
	scanf("%d%d", &a, &b);

	if(b>a){
	aux = b;
	b = a;
	a = aux;
}

	if(a%b==0)
	printf("Sao Multiplos\n");
	else
	printf("Nao sao Multiplos\n");

return 0;
	
}