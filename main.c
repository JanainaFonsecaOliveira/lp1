
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
    char nome[50];
    int quantidade;
    float valor;
} Ferramenta;
    void ListarFerramentas(Ferramenta *ferramenta, int indicedovetorferramentaparainserirosdados){
        int i;
        int indice = indicedovetorferramentaparainserirosdados;
        for (i=0;i<indice; i++){
            printf("ID: ");
            printf("%d\t",i);
            printf("Ferramenta: ");
            printf("%s\t",ferramenta[i].nome);
            printf("Quantidade: ");
            printf("%d\t",ferramenta[i].quantidade);
            printf("Valor:\t");
            printf("%f\n",ferramenta[i].valor);
        }
    }
void InserirFerramentas(Ferramenta *ferramenta, int indicedovetorferramentaparainserirosdados){
        int indice = indicedovetorferramentaparainserirosdados;
        printf("Inserir Ferramentas\n");
        printf("Nome Ferramenta:\n");
        fflush(stdin);
        gets(ferramenta[indice].nome);
        //fgets(ferramenta[indice].nome, 50, stdin);
        printf("Quantidade:\n");
        fflush(stdin);
        scanf("%d", &ferramenta[indice].quantidade);
        printf("Valor:\n");
        fflush(stdin);
        scanf("%f", &ferramenta[indice].valor);
        //printf("Ferramenta : %s Inserida com Sucesso \tQuantidade: %d \tValor: %f",ferramenta[0].nome, ferramenta[0].quantidade, ferramenta[0].valor);
        //printf("Ferramenta : %s Inserida com Sucesso \tQuantidade: %d \tValor: %f",ferramenta[1].nome, ferramenta[1].quantidade, ferramenta[1].valor);
        fflush(stdin);
        //ListarFerramentas(&ferramenta,indice);

    }

int Excluirferramentas(Ferramenta *ferramenta,  int *indicedovetorferramentaparainserirosdados){
        int indice = 101;
        int i;
        int ultimoindice = &indicedovetorferramentaparainserirosdados;
        printf("Qual ferramenta devo excluir? digite o id dela\n");
        fflush(stdin);
        scanf("%d", &indice);
        for(i=indice;i<ultimoindice;i++){
            strcpy(ferramenta[indice].nome, ferramenta[indice+1].nome);
            ferramenta[indice].quantidade = ferramenta[indice+1].quantidade;
            ferramenta[indice].valor = ferramenta[indice+1].valor;
        }
        *indicedovetorferramentaparainserirosdados = *indicedovetorferramentaparainserirosdados - 1;
        return 1;
    }
    void EditarFerramenta(Ferramenta ferramenta){}

void main(){
// Menu de opções
    int repetir = 0, op, i;
//inserir ferramentas automaticamente



//    printf("<1> Inserir Ferramentas\n");
//    printf("<2> Listar Ferramentas\n");
//    printf("<3> Excluir Ferramentas\n");
//    printf("<4> Editar Ferramenta\n");
//    printf("<5> Sair\n");
///////////////////////////////////////////////////
    int indicedovetorferramentaparainserirosdados = 0;
while (repetir != 5){
    Ferramenta ferramenta[100];
//////////////////////////////////////

///////////////////////////////////

    op = 0;
    while ((op<1) || (op>6)){ //opcoes para verificacao
      printf("\nA opcao deve esta entre 1 e 5.\n");
      printf("<1> Inserir Ferramentas\n");
      printf("<2> Listar Ferramentas\n");
      printf("<3> Excluir Ferramentas\n");
      printf("<4> Editar Ferramenta\n");
      printf("<5> Sair\n");
      printf("Digite opcao: ");
      scanf("%d",&op);
    } printf("\n");
     int Dif,Ok;

     if (op == 1){
        InserirFerramentas(&ferramenta, indicedovetorferramentaparainserirosdados);
        indicedovetorferramentaparainserirosdados++;
        //printf("\n%d",indicedovetorferramentaparainserirosdados);
       }

     if (op == 2){
        printf("Listar Ferramentas\n");
        ListarFerramentas(&ferramenta,indicedovetorferramentaparainserirosdados);
       }

     if (op == 3){
            printf("Excluir Ferramentas\n");
            if (indicedovetorferramentaparainserirosdados > 0){
                Excluirferramentas(&ferramenta,&indicedovetorferramentaparainserirosdados);
            }
            else  printf("\nNao existem dados para serem excluidos\n");
     }

     if (op == 4){
            printf("Editar Ferramentas\n");
        //EditarFerramenta(Ferramenta ferramenta);
     }

     if (op == 5){ //sair do programa
        repetir = 5;
        printf("Dados sendo gravados \n");
     }


 }
}
