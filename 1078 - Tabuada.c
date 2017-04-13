#include <stdio.h>

int main(void)
{
    int prod, i, N;

    scanf("%d", &N);
    N < 1000;
    N > 2;

    for(i=1;i<=10; i++){
        prod = i * N;
        printf("%d x %d = %d\n", i, N, prod);
    }
    return 0;
}