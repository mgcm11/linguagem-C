#include<stdio.h>

int main(){
    float n1,n2,so,su,mt,dv;

    printf("digite um numero e tecle enter\n");
    scanf("%f",&n1);

    printf("digite outro numero e tecle entre\n");
    scanf("%f",&n2);

    so=n1+n2;
    su=n1-n2;
    mt=n1*n2;
    dv=n1/n2;

printf("\n-------------------------------------------------------\n");
printf("\n-------------------Veja os resultados------------------\n");
printf("\n- Soma: %2.2f                                             -\n",so);
printf("\n- Subtraçao: %2.2f                                        -\n",su);
printf("\n- Mutiplicaçao: %2.2f                                     -\n",mt);
printf("\n- Divisao: %2.2f                                          -\n",dv);
printf("\n-------------------------------------------------------\n");

return 0;

}