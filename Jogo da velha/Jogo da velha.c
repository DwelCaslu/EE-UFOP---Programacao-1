#include<stdio.h>
#define N 3
void escreveTabuleiro(char tab[N][N]);
int main(){
int i,j,k,x,y,jogada=0,confere=1,opcao=0,cont=0;
char tab[N][N]={' ',' ',' ',' ',' ',' ',' ',' ',' '},carrega[50]; 
for(i=0;i<50;i++){
   carrega[i]=' ';
}        
do{
    do{
     if(opcao==0){           
       printf("\t\tO JOGO VAI COMECAR !\n");
       printf("\tEntre com os numeros da linha e da coluna para jogar.\n");
       printf("\tDe acordo com a figura abaixo:\n\n\n\t");
       for(j=0;j<4;j++){
           if(j==0){             
              printf("\t    %d",j);
           }
           else{
              printf("\t  %d",j);
           }
       }
       printf("\n\n");    
       for(i=0;i<3;i++){                                      
             printf("\t\t    %d         \xBA\t      \xBA\t   ",i+1);
             printf("\n");
             if(i<2){
               printf("\t\t\tออออออ\xCEอออออออ\xCEออออออ\n");
             }         
       }
       printf("\n\n\n");
       printf("\t\tO para o jogador 1\n\t\tX para o jogador 2\n\n\n");
       printf("\t\t");
       opcao--;
       system("pause");
       }
     }
     while(opcao==0);
     if(opcao==-1){
       opcao++;
     }                                   
     if(opcao==1){
       for(i=0;i<N;i++){
          for(j=0;j<N;j++){
              tab[i][j]=' ';
          }
      }
      for(i=0;i<50;i++){
   carrega[i]=' ';
}              
      jogada=0;
      confere=1;
      opcao=0;
    }              
    do{           
         escreveTabuleiro(tab);
         if((tab[0][0]=='O' && tab[0][1]=='O' && tab[0][2]=='O')||
            (tab[1][0]=='O' && tab[1][1]=='O' && tab[1][2]=='O')||
            (tab[2][0]=='O' && tab[2][1]=='O' && tab[2][2]=='O')||
            (tab[0][0]=='O' && tab[1][0]=='O' && tab[2][0]=='O')||
            (tab[0][1]=='O' && tab[1][1]=='O' && tab[2][1]=='O')||
            (tab[0][2]=='O' && tab[1][2]=='O' && tab[2][2]=='O')||
            (tab[0][0]=='O' && tab[1][1]=='O' && tab[2][2]=='O')||
            (tab[0][2]=='O' && tab[1][1]=='O' && tab[2][0]=='O')){
                printf("\n\n\n\n\a\t\tFim! O jogador 1 foi o vencedor!\n");
                confere--;
                system("pause>>null");
                break;
         }
        else if((tab[0][0]=='X' && tab[0][1]=='X' && tab[0][2]=='X')||
                (tab[1][0]=='X' && tab[1][1]=='X' && tab[1][2]=='X')||
                (tab[2][0]=='X' && tab[2][1]=='X' && tab[2][2]=='X')||
                (tab[0][0]=='X' && tab[1][0]=='X' && tab[2][0]=='X')||
                (tab[0][1]=='X' && tab[1][1]=='X' && tab[2][1]=='X')||
                (tab[0][2]=='X' && tab[1][2]=='X' && tab[2][2]=='X')||
                (tab[0][0]=='X' && tab[1][1]=='X' && tab[2][2]=='X')||
                (tab[0][2]=='X' && tab[1][1]=='X' && tab[2][0]=='X')){
               printf("\n\n\n\n\a\t\tFim! O jogador 2 foi o vencedor!\n");
               confere--;
               system("pause>>null");
               break;
        }
        else{ 
            jogada++;
            if(jogada==10){
              printf("\n\n\n\n\a\t\tA partida terminou empatada!\n");
              confere--;
              system("pause>>null");
              break;
            }
            else{              
               if(jogada%2!=0){
                 printf("\n\nJogador 1 ==> "); 
               }
               else{
                  printf("\n\nJogador 2 ==> ");
                 }
               printf("\nLinha: ");
               scanf("%d",&x);
               printf("\nColuna: ");
               scanf("%d",&y);
               if((x<1||x>3)||(y>3||y<1)||(tab[x-1][y-1]=='X' ||tab[x-1][y-1]=='O')){
                  do{
                     escreveTabuleiro(tab);                                       
                     printf("Jogada invalida!\n");
                     printf("Jogue novamente.\n");
                     printf("\nLinha: ");
                     scanf("%d",&x);
                     printf("\nColuna: ");
                     scanf("%d",&y);
                  }
                  while(((x<1||x>3)||(y>3||y<1))||((tab[x-1][y-1]=='X' ||tab[x-1][y-1]=='O')));
               }
               if(jogada%2==0){
                  tab[x-1][y-1]='X';
               }
               else{
                  tab[x-1][y-1]='O';
               }
            }
        }
    }
    while(confere==1);
    system("cls");
  printf("\t\tDeseja jogar outra partida?\n\t\tDigite:\n");
  printf("\t\t\t1 para sim\n\t\t\t2 para nao\n\t\t\t    ");
  scanf("%d",&opcao);
  if(opcao==1){         
      for(i=0;i<50;i++){               
         system("cls");                
         carrega[i]='|';
         if(i<49){
           printf("\n\n\n\n\n\n\t\t\tCarregando.....\n");
         }
         else{
            printf("\n\n\n\n\n\n\n");
         }  
         printf("\t   ____________________________________________________\n\t   [");
         for(j=0;j<50;j++){
            printf("%c",carrega[j]);
         }
         printf("] %d por cento\n",(i+1)*2);
         printf("\t   ----------------------------------------------------\n");                                              
      }
      printf("\n\t\t\tConcluido!\n\n\n\t\t");
      system("pause");
  }      
}
while(opcao!=2);
system("cls");
printf("\n\n\n\n\n\t\t\t\tGAME OVER !\n"); 
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t Jogo feito por Lukinhas\n");
printf("\n\t\t\t\t%c Copyright",184);
printf("\n\t\t\t\t    ");          
system("pause>>null");
return 0;
}
//////////////////////////////////////////////////////////////////////////////// 
void escreveTabuleiro(char tab[][N]){
     int i,j=0;
     system("cls");
     printf("\n");
     printf("\t  \xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0  JOGO DA VELHA"
               "  \xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\xB0\n\n\n\n");
     printf("\t\t");          
     for(i=0;i<3;i++){                           
        printf("\t  %c   \xBA\t  %c   \xBA\t  %c",tab[i][j],tab[i][j+1],tab[i][j+2]);
        printf("\n");
        if(i<2){
          printf("\t\t\tออออออ\xCEอออออออ\xCEออออออ\n");
        }
        printf("\t\t");           
     }
     printf("\n"); 
}
////////////////////////////////////////////////////////////////////////////////              
                               
