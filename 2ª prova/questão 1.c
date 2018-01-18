#include<stdio.h>

void calcula(int *X, int *Y);

int main (){
int X,Y;
  printf("Entre com o valor das variaveis X e Y, respectivamente.\n\n");
  scanf("%d %d",&X,&Y);
  calcula(&X,&Y);
  printf("\n\tO novo valor de X e:  %d",X); 
  printf("\n\tO novo valor de Y e:  %d\n",Y);
system("pause");
return 0;
} 

void calcula(int *X, int *Y){
     int i,a=0,b=0;
       for(i=*X;i<=*Y;i++){
           a=a+i;
           b++;
       }
       *Y = *X * (*Y);
       *X = a/b;
}    
