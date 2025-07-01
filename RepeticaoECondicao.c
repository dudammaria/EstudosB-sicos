#include <stdint.h>

int main (){
//sistema de entrada e saida de valores na conta

    double CC = 1201.61;
    int num;
   while (num != 0){

    printf("---------------------\n");
    printf("Bem-Vindo a sua conta!\n");
    printf("1 - Saldo Atual\n");
    printf("2 - Transferir\n");
    printf("2 - Transferir\n");
    printf("2 - Transferir\n");
    printf("0 - Desejo sair\n");
    printf("O que deseja fazer? Selecione um número\n");
    printf("---------------------\n");
 
    scanf("%d", num);

    double saldo;

    switch (num)
    {
    case 1:
        printf("Seu saldo atual é: %2.f", CC );
        break;
    
    default:
        break;
    }
    
   }

    return 0;
}