#include<stdio.h>
#include<string.h>

struct dados{
       char    nome[101];
       int     idade[1];
       float   altura[1];
       int     peso[1];
       char    origem[51];
};

int main(){
    struct dados info[3];
    int i,comp;
    char procura[]="Minas Gerais";
    printf("\n  Os nomes dos estados de origem deverao ser digitados\napenas com as letras iniciais maiusculas");
    for(i=0;i<3;i++){
       printf("\n\nEntre com os dados da candidata %d\n\n",i+1);
       printf("Nome:  ");
       scanf(" %[^\n]",&info[i].nome);
       printf("Idade:  ");
       scanf("%d",&info[i].idade);
       printf("Altura:  ");
       scanf("%f",&info[i].altura);
       printf("Peso:  ");
       scanf("%d",&info[i].peso);
       printf("Origem:  ");
       scanf(" %[^\n]",&info[i].origem);
       system("cls");
    }
    printf("\nAs candidatas de Minas Gerais, com idade entre 13 e 19 anos sao:\n");
    for(i=0;i<3;i++){
       comp = strcmp(info[i].origem,procura);
       if(comp == 0 && (info[i].idade > 12 && info[i].idade < 20 )){
          printf(" %s \n",info[i].nome);
       }
    }
    system("pause");
    return 0;
}
