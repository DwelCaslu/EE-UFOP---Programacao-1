// Fazer um prorama que recebe o ano de nascimento e o ano atual
// e imprima a idade em anos, meses , e dias. 
#include<stdio.h>
int main(){
    int id,anoa,anon,mes;
    printf("Digite seu ano de nascimento\n");
    scanf("%d",&anon);
    printf("Digite o ano atual\n");
    scanf("%d",&anoa);
    id=anoa-anon;
    printf("A sua idade em anos e: %d .\n",id);
    printf("A sua idade em meses e: %d \n",id*12);
    printf("A sua iade em semanas e: %d \n",(id*12)*4);
    system("pause>>null");
    return 0;
}
    
