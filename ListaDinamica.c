#include <stdio.h>
#include <stdlib.h>

//typedef permite dar nomes a um objeto já existente 
//struct define um tipo de estrutura ou uma variavel de uma estrutura
typedef struct NO{
    int dado;
    struct NO * prox;

}NO;

typedef struct LISTA{
    NO* ini;
    NO* fim;
}LISTA;

LISTA l;

void insereNoInicio(int elemento){
    NO *ptr = (NO*) malloc(sizeof(NO));
    ptr -> dado = elemento;
    ptr  ->prox = NULL;

    if(l.ini == NULL){
        l.fim = ptr;
    } else{
        ptr ->prox = l.ini;
    }
    l.ini = ptr;
}

void insereNoFim (int elemento){
    NO *ptr = (NO*) malloc(sizeof(NO));
    ptr -> dado = elemento;
    ptr  ->prox = NULL;

    if(l.ini == NULL)
    {
        l.ini = ptr;
    }else{
        l.fim -> prox = ptr;
    }
    l.fim = ptr;
}

void imprimir (){
    NO* ptr = l.ini;
    printf("Inicio -> ");
    while (ptr != NULL){
        printf("%d ", ptr -> dado);
        ptr = ptr -> prox;
    }
    printf("<- Fim");
}

void menu (){
    //código do menu de navegacao do usuario
}

int main(){
    int op, dado;
    l.ini = NULL;
    l.fim = NULL;

    do{
        system ("cls"); //linux: system(clear);
        menu ();
        scanf("%d", &op);
        fflush(stdin);
        system ("cls"); //linux: system(clear);

        switch (op)
        {
        case 0:
            break;
        case 1://insercao no inicio
            printf("");
            scanf("%d", &dado);
            insereNoInicio(dado);
            break;

        case 2://insercao no final
            printf("");
            scanf("%d", &dado);
            insereNoFim(dado);
            break;
        case 3://impressao do conteudo
            imprimir();
            break;
        default:
            printf("");
            break;
        }
    }while (op != 0);
            
}