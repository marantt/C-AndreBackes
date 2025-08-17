#include <stdio.h>
#include <stdlib.h>
#define ex1

/*
1 - Escreva um programa que escreva as mensagens 'Inicio do programa' e 'Fim' na tela, uma em cada linha, usando apenas um
printf.
*/

#ifdef ex1

int main () {
    printf("Inicio do programa\nFim.\n");
    return 0;
}

#endif

/*
2 - Escreva um programa que leia um numero inteiro e depois o imprima
*/

#ifdef ex2

int main() {
    int number;
    scanf("%d", &number);
    printf("O numero e: %d", number);
    return 0;
}

#endif


