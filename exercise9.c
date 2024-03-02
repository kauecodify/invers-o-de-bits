#include <stdio.h>

int main() {
    int num1, num2, resto_divisao, soma, resultado_final;

    //dois números inteiros
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

    resto_divisao = num1 % num2;
    soma = num1 + num2;
    resultado_final = resto_divisao * soma;

    // Exibir o valor final
    printf("O valor final é: %d\n", resultado_final);

    return 0;
}