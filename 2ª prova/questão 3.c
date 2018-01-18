#include<stdio.h>

int conta_palavras(char frase[]);

int main(){
    int num;
    char frase[101];
    printf("Entre com a frase.\n");
    scanf("%[^\n]",&frase);
    num = conta_palavras(frase);
    printf("O numero de palavras desta frase e: %d\n",num);
    system("pause");
    return 0;
}

int conta_palavras(char frase[]){
    int i,q=1;
    for(i=0;frase[i]!='\0';i++){
       if(frase[i]==' '){
         q++;
       }
    }
    return q;
}
   
