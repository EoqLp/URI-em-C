#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x, quad, i;

    scanf("%d", &x);

    for(i=1; i<=x; i++){ 
        if(i % 2 == 0){
            quad = i * i;   
            printf("%d^2 = %d\n", i, quad);
        }
    }
    return 0;
}