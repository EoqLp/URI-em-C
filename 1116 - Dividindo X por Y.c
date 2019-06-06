#include <stdio.h>

int main(){

   int x, y, i, z;
   float res;

    scanf("%d", &z);
    
    for(i=1; i<=z; i++){
        scanf("%d%d", &x, &y);
        if(y!=0){
            res = (float) x/y;
            printf("%.1f\n", res);
        }else{
            printf("divisao impossivel\n");
        }
    }

    return 0; 
}