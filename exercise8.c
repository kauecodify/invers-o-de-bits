#include <stdio.h>

int main() {
    int num1, num2, soma, subtracao, multiplicacao, divisao, resultado_final;

    printf("Digite o primeiro número inteiro positivo: ");
    scanf("%d", &num1);

    printf("Digite o segundo número inteiro positivo: ");
    scanf("%d", &num2);

    soma = num1 + num2;

    subtracao = soma - num2;

    multiplicacao = soma * subtracao;

    divisao = multiplicacao / num1;

    // Exibir o valor final
    printf("O valor final é: %d\n", divisao);

    return 0;
}