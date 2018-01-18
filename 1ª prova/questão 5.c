//entra com um numero n, e imprime soma s, s=1/n + 2/n-1 + 3/n-2 + ......+ n/1.

#include<stdio.h>
int main(){
    int i,j;
    float s=0,n;
    printf("Entre com o valor de n.\n");
    scanf("%f",&n);
    for(i=0,j=n+1;i<n+1,j>0;i++,j--){
       s=s+(float)i/j;
    }
    printf("A soma final sera: %.2f\n",s);
    system("pause");
    return 0;
}                           
