#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x, y, i, aux, soma=0;

    scanf("%d%d", &x, &y);

    if(x>y){
        aux=x;
        x=y;
        y=aux;
    }
        for(i=x+1; i<=y-1; i++){
            if(i % 2 != 0){
                soma+=i;
            }
        }
        printf("%d\n", soma);
    return 0;
}