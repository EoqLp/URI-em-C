#include <stdio.h>

int main(void){
	
	int cod, qt;
	float total;

	scanf("%d%d", &cod, &qt);

	if(cod == 1)
		total = qt * 4.00;
	if(cod == 2)
		total = qt * 4.50;
	if(cod == 3)
		total = qt * 5.00;
	if(cod == 4)
		total = qt * 2.00;
	if(cod == 5)
		total = qt * 1.50;
	printf("Total: R$ %.2f\n", total);

	return 0;
	
}