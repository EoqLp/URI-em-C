#include <stdio.h>
 
int main(void)
{
     
    char nome;
    double sal_fixo, sal_final, tot_venda, comissao;
            
    scanf("%s", &nome);
    scanf("%lf", &sal_fixo);
    scanf("%lf", &tot_venda);
                 
   	comissao = tot_venda * 15 / 100;
    sal_final = sal_fixo + comissao;
                 
    printf("TOTAL = R$ %.2lf\n", sal_final);
                 
    return 0 ;
}