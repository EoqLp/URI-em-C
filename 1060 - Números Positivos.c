#include <stdio.h>

int main (void){

    int x1, x2, x3, x4, x5, x6, cont = 0;

    scanf("%d%d%d%d%d%d", &x1, &x2, &x3, &x4, &x5, &x6);

    if(x1>0)
        cont++;
    if(x2>0)
        cont++;
    if(x3>0)
        cont++;
    if(x4>0)
        cont++;
    if(x5>0)
        cont++;
    if(x6>0)
        cont++;

    printf("%d valores positivos\n", cont);

    return 0;
}