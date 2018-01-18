// recebe o salario
//De acordo com a opcao escolhida, ele calcula e imprime o imposto a ser descontado no salario do usuario,
//uo novo salario do usuario apos o aumento
//ou a classificação do usuario, com relacao ao valor do seu salario
// imprime opcao invalida caso o usuario digite uma
#include<stdio.h>
int main(){
    int i,j,opcao;
    float salario,imposto,novo;
    printf("Escolha a opcao desejada.\nMenu de opcoes:\n");
    printf("\t1.  Imposto\n\t2.  Novo salario\n\t3.  Classificacao\n\n\tDigite a opcao desejada.\n\t\t");
    scanf("%d",&opcao);
    printf("Entre com o valor do seu salario\n");
    scanf("%f",&salario);
    system("cls");
    switch(opcao){
          case 1:
               if(salario<=965.67){
                 imposto=0.08*salario;
               }
               else if(salario>965.67 && salario<=1609.45){
                    imposto=0.09*salario;
               }
               else if (salario>1609.45 && salario<=3218.9){
                    imposto=0.11 * salario;
               }
               else{
                    imposto=354.08;
               }
               printf("O imposto a ser pago, tem o valor de R$%.2f\n",imposto);
               break;
          case 2:
               if(salario<=450){
                 novo=salario+100;
               }
               else if(salario>450 && salario<=750){
                    novo=salario+75;
               }
               else if (salario>750 && salario<=1500){
                    novo=salario+50;
               }
               else{
                    novo=salario+25;
               }
               printf("O novo salario tem o valor de R$%.2f\n",novo);
               break;
          case 3:
               if(salario<=550){
                 printf("Sua classificacao e: Remuneracao baixa\n");
               }
               else if (salario>550 && salario<=1500){
                 printf("Sua classificacao e: Remuneracao media\n");
               }
               else{
                 printf("Sua classificacao e: Remuneracao alta\n");   
               }
               break;
          default: printf("Opcao invalida\n");
               break;
    }
    system("pause>>null");
    return 0;
}
                   
                       
