/*
Inversão de String e Remoção de Espaços Escreva um programa que solicite ao usuário para digitar uma frase. 
O programa deve:
Remover todos os espaços em branco da frase.
Reverter a frase sem espaços e exibi-la na tela.
Implementar uma função que verifique se a frase resultante é um palíndromo 
(ou seja, se lida ao contrário é igual à original).
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void palind(char *frase, char *aux){
    int cont = 0;
    for (int i = 0; frase[i] != '\0'; i++){
        if (frase[i] != aux[i]){
            cont++;
        }
    }
    if (cont == 0){
        printf("\neh um palindromo!!\n");
    } else{
        printf("\nnao eh um palindromo!!\n");
    }
}

int main(){
    char frase[255];
    char aux[255];
    int k = 0;
    int j = 0;

    puts("Insira uma frase: ");
    fgets(frase, sizeof(frase),stdin);
    printf("\n");

    for (int i = 0; frase[i] != '\n'; i++){
        if (frase[i] == ' ') continue;
        frase[k] = frase[i];
        k++;
    }
    frase[k] = '\0';

    for (int i = (k - 1); i >= 0; i--){
        aux[j] = frase[i];
        j++;
    }
    aux[j] = '\0';

    printf("a frase invertida e: %s\n",aux);

    palind(frase,aux);

    return 0;
}
