#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#define ex15
#define pi 3.141592

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

/*
Faça um programa que leia um valor em reais e a cotação do dólar. Em seguida, imprima o valor correspondente em dólares.
*/

#ifdef ex7

    int main(){
            float real, cot, dollar;

            printf("Digite o valor em reais: ");
            scanf("%f", &real);
            printf("Digite a cotacao atual do dolar: ");
            scanf("%f", &cot);

            dollar = real/cot;

            printf("R$ %.2f equivalem a $ %.2f.\n", real, dollar);
            return 0;
        }

#endif // ex7

/*
8) Leia um valor que represente uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit. A fórmula
de conversão é: F = C * (9.0/5.0) + 32.0, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius.
*/

#ifdef ex8

    int main(){
            int c, f;

            printf("Digite a temperatura em graus C: ");
            scanf("%d", &c);

            f = (c*9/5)+32;

            printf("A temperatura convertida para graus F e de: %d", f);
            return 0;
        }

#endif // ex8

/*
9) Leia um ângulo em graus e apresente-o convertido em radianos. A fórmula de conversão é R = G * π/180, sendo G o
ângulo em graus e R em radianos e π = 3.141592.
*/

#ifdef ex9

    int main(){
            float grau, rad;

            printf("Digite o angulo em graus: ");
            scanf("%f", &grau);

            rad = grau*pi/180;

            printf("O grau convertido em radianos e: %f", rad);
            return 0;
        }

#endif // ex9

/*
10) A importância de R$ 780.000,00 será dividida entre três
ganhadores de um concurso, sendo que:

i. O primeiro ganhador receberá 46% do total.
ii. O segundo receberá 32% do total.
iii. O terceiro receberá o restante.

Calcule e imprima a quantia recebida por cada
um dos ganhadores.
*/

#ifdef ex10

    int main(){
            const float prize = 780000.00;
            float fwin, swin, twin;

            fwin = prize*0.46;
            swin = prize*0.32;
            twin = prize*0.22;

            printf("O primeiro ganhador recebeu: R$ %.2f.\nO segundo ganhador recebeu: R$ %.2f.\nO terceiro ganhador recebeu: R$ %.2f.\n", fwin, swin, twin);
            return 0;
        }

#endif // ex10

/*
11) Leia o valor do raio de um círculo. Calcule e imprima a área do círculo correspondente. A área do círculo é A = π* raio2

sendo π = 3.141592.
*/

#ifdef ex11
#include <math.h>

    int main(){
            float rad, area;

            printf("Digite o valor do raio do circulo: ");
            scanf("%f", &rad);

            //area = pi*(rad*rad);
            area = pi*pow(rad,2);

            printf("A area do circulo e de: %.2f.\n", area);
            return 0;
        }

#endif // ex11

/*
12) Leia a altura e o raio de um cilindro circular e imprima o volume desse cilindro. O volume de um cilindro circular é
calculado por meio da seguinte fórmula:
V = pi * raio2 * altura
em que π = 3.141592
*/

#ifdef ex12

    int main(){
          float cilh,cilr,vol;

          printf("Digite a altura do cilindro: ");
          scanf("%f", &cilh);
          printf("Digite o raio do cilindro: ");
          scanf("%f", &cilr);

          vol = pi * pow(cilr,2)* cilh;

          printf("O volume do cilindro e: %f.\n", vol);
          return 0;
    }

#endif // ex12

/*
Sejam a e b os catetos de um triângulo cuja hipotenusa h é
obtida pela equação:
h = raiz a2+b2
Faça um programa que leia os valores de a e b, e
calcule o valor da hipotenusa através da
fórmula dada. Imprima o resultado.
*/

#ifdef ex13

    int main(){
        float cata,catb,hip;

        printf("Digite os catetos do triangulo:\n");
        scanf("%f%f", &cata, &catb);

        hip = sqrt(pow(cata,2)+pow(catb,2));

        printf("A hipotenusa do triangulo e: %f.\n", hip);
        return 0;
    }

#endif // ex13

/*
14) Faça um programa que converta uma letra maiúscula em letra minúscula. Use a tabela ASCII para isso.
*/

#ifdef ex14

    int main(){
        char letter, up;

        printf("Digite uma letra: ");
        letter = getchar();

        if(islower(letter)){
            up = letter-32;
        }else{
            up = letter+32;
            }

        printf("%c.\n",up);
        return 0;
        }

#endif // ex14

/*
15) Faça um programa para ler um número inteiro positivo de três dígitos. Em seguida, calcule e mostre o número formado
pelos dígitos invertidos do número lido.
*/

#ifdef ex15

    int main(){
        int a;

        printf("Digite um numero inteiro de tres digitos: ");
        scanf("%d", &a);


    }

#endif // ex15
