#include <stdio.h>

int main(int argc, char const *argv[])
{
    int g, i, e=0, x, vg=0, vi=0, grenal=0;

    do{
        grenal++;
        scanf("%d%d", &i, &g);
        if(i>g)
            vi++;
        else if(g>i)
            vg++;
        else
            e++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &x);

    }while(x==1);

    printf("%d grenais\n", grenal);
    printf("Inter:%d\n", vi);
    printf("Gremio:%d\n", vg);
    printf("Empates:%d\n", e);

    if(vi>vg)
        printf("Inter venceu mais\n");
    else if(vi<vg)
        printf("Gremio venceu mais\n");
    else
        printf("Nao houve vencedor\n");

    return 0;
}