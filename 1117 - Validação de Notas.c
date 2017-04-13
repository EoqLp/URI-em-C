#include <stdio.h>

int main(int argc, char const *argv[])
{
    float x, med, soma = 0;
    int cont = 0;

    do{
        scanf("%f", &x);
        if(x <= 10.0 && x >= 0.0)
        {
            cont++;
            soma+=x;
        }   
        else
            printf("nota invalida\n");
    }while(cont < 2);

    med = soma / 2;
    printf("media = %.2f\n", med);


    return 0;
}