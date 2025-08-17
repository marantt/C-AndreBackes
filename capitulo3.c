#include <stdio.h>
#include <stdlib.h>
#define ex6

/*
1) Faça um programa que leia um número inteiro e retorne seu antecessor e seu sucessor.
*/

#ifdef ex1

    int main(){
        int a;
        scanf("%d", &a);
        printf("Sucessor: %d\nAntecessor: %d\n", a+1, a-1);
        return 0;
    }

#endif

/*
2) Faça um programa que leia um número real e imprima a quinta parte desse número.
*/

#ifdef ex2

    int main(){
        float a;
        scanf("%f", &a);
        printf("Quinta parte: %f\n", a/5);
        return 0;
    }

#endif

/*
3) Faça um programa que leia três valores inteiros e mostre sua soma.
*/

#ifdef ex3

    int main(){
        int a,b,c;
        scanf("%d%d%d", &a, &b, &c);
        printf("Soma: %d\n", a+b+c);
        return 0;
    }

#endif // ex3

/*
4) Leia quatro valores do tipo float. Calcule e exiba a média aritmética desses valores.
*/

#ifdef ex4

    int main(){
        float a,b,c,d,soma;
        scanf("%f%f%f%f", &a, &b, &c, &d);
        soma = a+b+c+d;
        printf("Media aritmetica: %.2f\n", soma/4);
        return 0;
    }

#endif // ex4

/*
5) Faça um programa que calcule o ano de nascimento de uma pessoa a partir de sua idade e do ano atual.
*/

#ifdef ex5

    int main(){
        int age, yy;
        printf("Digite sua idade: ");
        scanf("%d", &age);
        printf("Digite o ano em que estamos: ");
        scanf("%d", &yy);
        printf("Voce nasceu em: %d.\n", yy-age);
        return 0;
    }

#endif // ex5

/*
6) Leia uma velocidade em km/h (quilômetros por hora) e apresente convertida em m/s (metros por segundo). A fórmula
de conversão é M = K/3.6, sendo K a velocidade em km/h e M em m/s.
*/

#ifdef ex6

int main(){
        float km;
        float mt;
        printf("Digite a velocidade em km/h: ");
        scanf("%f", &km);
        mt = km/3.6;
        printf("Esta velocidade equivale a %.2f m/s.\n", mt);
        return 0;
    }

#endif // ex6
