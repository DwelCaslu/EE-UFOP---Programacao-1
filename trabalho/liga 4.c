#include<stdio.h>
#define N 6
#define M 7

void escreveTabuleiro(char tab[N][M]);

int ganhou(char tab[N][M], int jogador);

int estaCheio(char tab[N][M]);

int leJogada(int jogador);

void executaJogada(char tab[N][M], int jogador, int coluna);

int jogadaValida(char tab[N][M],int coluna);

int main(){
int i,j,confere=1,jogador,stat_vn=0,stat_en=0,jogada=0,coluna;
char tab[N][M];
 for(i=0;i<N;i++){
   for(j=0;j<M;j++){                          
       tab[i][j]='.';
   }
}
escreveTabuleiro(tab); 
do{
    jogada++;
    if(jogada%2!=0){
      jogador=1;
      printf("\n\n\t\t\t\t1> "); 
    }
    else{
       jogador=2;
       printf("\n\n\t\t\t\t2> ");
    }
    do{
      if(confere==0){
        escreveTabuleiro(tab);
        printf("\n\t\t\t\tJogada Invalida!\n\t\t\t\tTente Novamente.\n");            
        if(jogada%2!=0){
          printf("\n\t\t\t\t1> "); 
        }
        else{
          printf("\n\t\t\t\t2> ");
        }
       }
       coluna=leJogada(jogador);
       confere=jogadaValida(tab,coluna);
    }
    while(confere==0);
    executaJogada(tab,jogador,coluna);
    escreveTabuleiro(tab); 
    stat_vn=stat_vn+ganhou(tab,jogador);
    stat_en=stat_en+estaCheio(tab);
    if(stat_en==1){
       printf("\n\n\t\t\t\tEmpate!\n");
    } 
    if(stat_vn==1 && jogada%2!=0){
      printf("\n\n\t\t\t\tFim! 1\n");
    }
    else if(stat_vn==1 && jogada%2==0){
           printf("\n\n\t\t\t\tFim! 2\n");
    }
}
while(stat_vn==0 && stat_en==0);
system("pause>>null");
return 0;
}
 
////////////////////////////////////////////////////////////////////////////////
/*A função escreve tabuleiro tem a função de imprimir o tabuleiro, e atualizar a tela,
por isso ela limpa a tela e imprime o tabuleiro em seguida, à cada jogada.*/ 

void escreveTabuleiro(char tab[N][M]){
     int i,j;
     system("cls");
     printf("\n\t\t \xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0  LIGA 4"
               "  \xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\n\n\n\n");
     printf("\n\t\t\t\t");
     printf("_____________");
     printf("\n\t\t\t\t");
     for(i=0;i<M;i++){             
         printf("%d ",i+1);
     }
     printf("\n");
     for(i=0;i<N;i++){
        printf("\t\t\t\t");                            
        for(j=0;j<M;j++){
           printf("%c ",tab[i][j]);
        }
     printf("\n");
     }
     printf("\t\t\t\t");
     printf("-------------\n");
}

//////////////////////////////////////////////////////////////////////////////// 
/*A função ganhou recebe o tabuleiro e confere se alguém ganhou, ou seja , se no tabuleiro
há quatro caracteres consecutivos e iguais, em qualquer direção, que não sejam pontos.O 
primeiro for verifica a horizontal.O segundo for verifica a vertical.O terceiro verifica
as diagonais inclinadas p/ esquerda, e o quarto for verifica as diagonais inclinadas p/ esquerda*/ 
                            
int ganhou(char tab[N][M], int jogador){
    int i,j;
    for(i=0;i<N;i++){
       for(j=0;j<(M-2);j++){
           if ((tab[i][j]!='.' && tab[i][j+1]!='.' && tab[i][j+2]!='.' && tab[i][j+3]!='.') && 
              (tab[i][j]==tab[i][j+1] && tab[i][j]==tab[i][j+2] && tab[i][j]==tab[i][j+3])){                       
              return 1;
           }
       }
    }
    for(i=0;i<(N-2);i++){
       for(j=0;j<M;j++){
           if ((tab[i][j]!='.' && tab[i+1][j]!='.' && tab[i+2][j]!='.' && tab[i+3][j]!='.') && 
              (tab[i][j]==tab[i+1][j] && tab[i][j]==tab[i+2][j] && tab[i][j]==tab[i+3][j])){
              return 1;
           }
       }
    }
    for(i=0;i<(N-3);i++){
       for(j=0;j<(M-3);j++){
           if ((tab[i][j]!='.' && tab[i+1][j+1]!='.' && tab[i+2][j+2]!='.' && tab[i+3][j+3]!='.') && 
              (tab[i][j]==tab[i+1][j+1] && tab[i][j]==tab[i+2][j+2] && tab[i][j]==tab[i+3][j+3])){
              return 1;
           }
       }
    }
    for(i=0;i<(N-2);i++){
       for(j=(M-4);j<M;j++){
           if ((tab[i][j]!='.' && tab[i+1][j-1]!='.' && tab[i+2][j-2]!='.' && tab[i+3][j-3]!='.') && 
              (tab[i][j]==tab[i+1][j-1] && tab[i][j]==tab[i+2][j-2] && tab[i][j]==tab[i+3][j-3])){
              return 1;
           }
       }
    }
    return 0;
}
                                                                                                                    
////////////////////////////////////////////////////////////////////////////////   
/* A função está cheio vai receber o tabuleiro e conferir se na primeira linha do tabuleiro,todos os "espaços",
 já foram preenchidos. Portanto ela determina se o tabuleiro está cheio,e se houve ou não, um empate no jogo.*/
 
int estaCheio(char tab[N][M]){
int i,j,cont_pontos=0;
   for(j=0;j<7;j++){
      if(tab[0][j]!='.'){
        cont_pontos++;                
      }
   }
   if (cont_pontos==7){
     return 1;
   }
   else {
     return 0;
   } 
} 
////////////////////////////////////////////////////////////////////////////////
/*A função leJogada lê o que foi digitado pelo jogador, e retorna o valor da jogada 
para a função main, para que o jogo possa prosseguir*/

int leJogada(int jogador){
    int col;
    scanf("%d",&col);
    return col;
}

//////////////////////////////////////////////////////////////////////////////// 
/*A função jogada válida, confere se o número digitado pelo jogador é maior que 7 
ou menor que 1, caso seja a jogada é inválida, confere também se a coluna na qual o jogador
quer fazer sua jogada, ainda há espaço, podendo isso caracterizar a jogada como valida ou não*/

int jogadaValida(char tab[N][M],int coluna){
   int i,j;
   if(coluna!=1 && coluna !=2 && coluna !=3 && coluna !=4 && coluna !=5 && coluna !=6 && coluna !=7){
      return 0;
   }
   else if(tab[0][coluna -1]!= '.'){
      return 0;
   }
   return 1;
}

////////////////////////////////////////////////////////////////////////////////
/*A função executaJogada, recebe o valor da coluna que o usuário quer realizar sua jogada,
 e modifica o tabuleiro, realizando a jogada do usuário na linha que for possível.*/
 
void executaJogada(char tab[N][M], int jogador, int coluna) {
        int i;
        char pecas[2] = {'O','X'};
        coluna--;
        for (i = N; i >= 0; i--) {
            if (tab[i][coluna] == '.') {
              tab[i][coluna] = pecas[jogador - 1];
              break;
            }
        }
}
//////////////////////////////////////////////////////////////////////////////// 
