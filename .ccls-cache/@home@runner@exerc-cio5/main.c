#include <stdio.h>
#include "converte.h"

int main() {
    char str[100];
    printf("Digite uma string: ");
    scanf("%99[^\n]", str); // Lê a string até encontrar uma quebra de linha ou até 99 caracteres

    converte_para_maiusculas(str);

    printf("String convertida para maiúsculas: %s\n", str);

    return 0;
}