#include <stdio.h>

int main() { char caractere;

printf("Digite um caractere: ");
scanf("%c", &caractere);
//Inverte todos os bits
caractere = ~caractere;

//II:Mantem apenas o bit mais significativo (MSB)/(LSB) como 1.
caractere |= 0x81; // 0x81 = 10000001 binário (MSB e (~) LSB como 1)

//III:bits para a esquerda em 1 posição
caractere <<= 1;

// Exibe o valor final
printf("Valor final: %d\n", caractere);

return 0;

}