#include <stdio.h>
#include <stdlib.h>

void main(){
//define a estrutura ferramenta sem definir a quantidade

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
//definindo as fun��es
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

    void Excluirferramentas(Ferramenta ferramenta){}
    void EditarFerramenta(Ferramenta ferramenta){}
// Menu de op��es
    int repetir = 0, op, i;
//    printf("<1> Inserir Ferramentas\n");
//    printf("<2> Listar Ferramentas\n");
//    printf("<3> Excluir Ferramentas\n");
//    printf("<4> Editar Ferramenta\n");
//    printf("<5> Sair\n");
///////////////////////////////////////////////////
    int indicedovetorferramentaparainserirosdados = 0;
while (repetir != 5){
    Ferramenta ferramenta[100];
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
        //Excluirferramentas(Ferramenta ferramenta);
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