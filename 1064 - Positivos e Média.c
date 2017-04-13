#include <stdio.h>

int main ()
{

    double x, pos = 0, media;
    int i, soma = 0;

    for(i = 1; i <= 6; i++){
        scanf("%lf", &x);
        if(x>=0){
        soma +=1;
        pos += x;
        media = pos / soma;
        }
    }
    
    printf("%d valores positivos\n", soma);
    printf("%.1lf\n", media);


    return 0;

}