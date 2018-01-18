// recebe o codigo do curso,numero de vagas, e o numero de candidatos
//imprime o numero de candidatos por vaga de cada curso,a maior relacao candidato vaga, junto com o curso, e o total de candidatos
// termina quando o usuario digita um curso com codigo igual a 0
#include<stdio.h>
int main(){
    int codigo,vagas,cand,cod_maior=0,total=0;
    float cand_vaga,maior_candvaga=0;
    printf("Entre com os dados dos cursos.\n");
    printf("Digite o codigo, o numero de vagas oferecidas para esse curso,\ne o numero de candidatos incritos nesse curso,respectivamente.\n");
    printf("Ao terminar digite 0 como codigo de um curso\n");
    do {
       scanf("%d %d %d",&codigo,&vagas,&cand);
       if(codigo!=0){
           cand_vaga=(float)cand/vagas;
           printf("O curso cujo codigo e: %d, tem uma relacao de %.2f candidatos por vaga\n",codigo,cand_vaga); 
           if(cand_vaga>maior_candvaga){ 
             maior_candvaga=cand_vaga;
             cod_maior=codigo;
           }
           printf("\n\nEntre com as informacoes do proximo curso,se houver\n Caso contrario,digite 0\n\n");
           total=total+cand;
           system("pause");
       }
           system("cls");
    }
    while(codigo!=0);
    if(cod_maior==0){
         printf("\n\n\nNao foi digitado nenhum dado.\n");
    }
    else{
         printf("\n\n\nA maior relacao candidato vaga foi de %.2f candidatos por vaga\n",maior_candvaga);
         printf(" No curso cujo codigo e: %d\n",cod_maior);
         printf(" O total de candidatos inscritos para o vestibular foi de: %d\n",total);
    }
    system("pause>>null");
    return 0;
}
                  
