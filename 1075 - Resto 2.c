#include <stdio.h>

int main (void){

    int i, N;

    scanf("%d", &N);

    for(i=0; i<=10000; i++){
        if(i%N==2)
            printf("%d\n", i);
    }

return 0;
}