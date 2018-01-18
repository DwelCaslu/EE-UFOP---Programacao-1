#include<stdio.h>
int main (){
    int i,j,mat[8][8],cont=0;
    for(i=0;i<8;i++){
       for(j=0;j<8;j++){
          system("cls");
          printf("\nEntre com o elemento que ocupa a posicao (%d,%d)\n",i+1,j+1);
          scanf("%d",&mat[i][j]);
       }
    }
    for(i=0;i<8;i++){
       for(j=0;j<8;j++){
          if((mat[i][j]==mat[j][i]) && i!=j){
            cont++;
          }
       }
    }
    if(cont==56){
      printf("A matriz e simetrica\n");
    }
    else{
      printf("A matriz nao e simetrica\n");
    }
    system ("pause");
    return 0;
}
         
