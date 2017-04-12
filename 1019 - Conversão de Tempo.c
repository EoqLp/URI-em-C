#include <stdio.h>
 
 int main (void)
 {
	int N, h, m, s;

	scanf("%d", &N);
 
 	h = N / 3600;
 	m = (N % 3600) / 60;
 	s = (N % 3600) % 60;
 
	printf("%d:%d:%d\n", h, m, s);
 
 return 0;
 
}