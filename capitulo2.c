#include <stdio.h>
#include <stdlib.h>
#define ex2

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

/*
3) Escreva um programa que leia um numero inteiro e depois imprima a mensagem 'Valor lido:', seguido do valor inteiro. Use apenas o comando printf ()
*/

#ifdef ex3

int main () {
    short int number;
    scanf("%d", &number);
    printf("Valor lido: %d", number);
    return 0;
    }

#endif // ex3

/*
4) Faca um programa que leia um numero inteiro e depois o imprima usando o operador "%f". Veja o que aconteceu
*/

#ifdef ex4

int main () {
    short int number;
    scanf("%d", &number);
    printf("Valor lido: %f", number);
    return 0;
    }

#endif // ex4

/*
5) Fa�a um programa que leia um valor do tipo float e depois o imprima usando o operador �%d�. Veja o que aconteceu.
*/

#ifdef ex5

int main () {
    float number;
    scanf("%f", &number);
    printf("Valor lido: %d", number);
    return 0;
    }

#endif // ex5

/*
6) Fa�a um programa que leia um valor do tipo double e depois o imprima na forma de nota��o cient�fica.
*/

#ifdef ex6

int main () {
    double number;
    scanf("%lf", &number);
    printf("Valor lido: %e", number);
    return 0;
    }

#endif // ex6

/*
7) Elabore um programa que leia um caractere e depois o imprima como um valor inteiro.
*/

#ifdef ex7

int main () {
    char letter;
    scanf("%c", &letter);
    printf("Letra escolhida: %d", letter);
    return 0;
    }

#endif // ex7

/*
8) Fa�a um programa que leia dois n�meros Ointeiros e depois os imprima na ordem inversa em que eles foram lidos.
*/

#ifdef ex8

int main () {
    int x,y;
    scanf("%d", &x);
    scanf("%d", &y);
    printf("Valores escolhidos: %d e %d", y,x);
    return 0;
    }

#endif // ex8

/*
9) Fa�a um programa que leia dois valores do tipo float. Use um �nico comando de leitura para isso. Em seguida, imprima os valores lidos na ordem
inversa em que eles foram lidos.
*/

#ifdef ex9

int main () {
    float x,y;
    scanf("%f%f", &x, &y);
    printf("Valores escolhidos: %.2f e %.2f", y,x);
    return 0;
    }

#endif // ex9

/*
10) Elabore um programa que solicite ao usu�rio entrar com o valor do dia, m�s e ano (inteiros).
Em seguida, imprima os valores lidos separados por uma barra (\).
*/

#ifdef ex10

int main () {
    int dd,mm,yy;
    printf("Por favor, digite o dia: \n");
    scanf("%d", &dd);
    printf("Por favor, digite o mes: \n");
    scanf("%d", &mm);
    printf("Por favor, digite o ano: \n");
    scanf("%d", &yy);
    printf("A data digitada foi: %d\\%d\\%d.\n", dd,mm,yy);
    return 0;
    }

#endif // ex10

/*
11) Elabore um programa que contenha uma constante qualquer do tipo float. Use o comando #define. Imprima essa constante.
*/

#ifdef ex11
#define pi 3.1415

int main () {
    printf("%.4f", pi);
    return 0;
    }

#endif // ex11

/*
12) Elabore um programa que contenha uma constante qualquer do tipo int. Use o comando
const. Imprima essa constante.
*/

#ifdef ex12

int main () {
    const int cub = 3;
    printf("%d", cub);
    return 0;
    }

#endif // ex12

/*
13) Fa�a um programa que leia um caractere do tipo char e depois o imprima entre aspas duplas. Assim, se o caractere lido for a letra A, dever�
ser impresso �A�.
*/

#ifdef ex13

int main () {
    char letter;
    scanf("%c", &letter);
    printf("\"%c\"\n", letter);
    return 0;
    }

#endif // ex13

/*
14) Fa�a um programa que leia tr�s caracteres do tipo char e depois os imprima um em cada linha.
Use um �nico comando printf() para isso.
*/

#ifdef ex14

int main () {
    char a,b,c;
    scanf("%c", &a);
    getchar();
    scanf("%c", &b);
    getchar();
    scanf("%c", &c);
    getchar();
    printf("%c\n%c\n%c", a,b,c);
    return 0;
    }

#endif // ex14

/*
15) Escreva um programa que leia tr�s vari�veis: char, int e float. Em seguida, imprima-as de tr�s maneiras diferentes: separadas por espa�os, por
uma tabula��o horizontal e uma em cada linha. Use um �nico comando printf() para cada opera��o de escrita das tr�s vari�veis.
*/

#ifdef ex15

int main () {
    char z;
    int x;
    float y;
    //scanf("%c", &z);
    z = getchar();
    scanf("%d%f", &x, &y);
    /*scanf("%c", &b);
    getchar();
    scanf("%c", &c);
    getchar();*/
    printf("\t%c\n\t%d\n\t%.2f", z,x,y);
    return 0;
    }

#endif // ex15
