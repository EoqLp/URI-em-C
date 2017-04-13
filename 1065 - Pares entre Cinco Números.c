#include <stdio.h>

int main (void){

    int x1, x2, x3, x4, x5, cont = 0;

    scanf("%d%d%d%d%d", &x1, &x2, &x3, &x4, &x5);

    if(x1%2==0)
        cont++;
    if(x2%2==0)
        cont++;
    if(x3%2==0)
        cont++;
    if(x4%2==0)
        cont++;
    if(x5%2==0)
        cont++;

    printf("%d valores pares\n", cont);

    return 0;
}