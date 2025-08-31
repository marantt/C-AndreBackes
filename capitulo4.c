#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define ex6

/*
1 - Faca um programa que leia dois números e mostre qual deles
e o maior. 
*/

#ifdef ex1

    int main() {
        int fnumb, snumb;

        printf("Digite dois numeros inteiros:\n");
        scanf("%d%d", &fnumb, &snumb);

        if (fnumb > snumb)
            printf("O maior e: %d", fnumb);
            else
            printf("O maior e: %d", snumb);

        return 0;
    }

#endif

/*
2 - Faca um programa que leia dois números e mostre o maior
deles. Se, por acaso, os dois números forem iguais, imprima a
mensagem “Números iguais”.
*/

#ifdef ex2 

    int main () {
        int fnumb, snumb;

        printf("Digite dois numeros inteiros: ");
        scanf("%d%d", &fnumb, &snumb);

        if (fnumb > snumb)
            printf("O maior e: %d", fnumb);
            else if (fnumb == snumb)
            printf("Numeros iguais.");
            else
            printf("O maior e: %d", snumb);

        return 0;
            
    }

#endif

/*
3 - Faca um programa que leia um número inteiro e verifique se
esse número é par ou ímpar.
*/

#ifdef ex3

    int main () { 
        int numb, resto;

        printf("Digite um numero inteiro: ");
        scanf("%d", &numb);
        
        resto = numb%2;

        if (resto == 0)
            printf("O numero e par.\n");
            else
            printf("O numero e impar.\n");
        
        return 0;
    }

#endif

/*
4 - Faca um programa que leia o salário de um trabalhador e o
valor da prestação de um empréstimo. Se a prestação:
• For maior que 20% do salário, imprima: “Empréstimo
não concedido.”
• Caso contrário, imprima: “Empréstimo concedido.”
*/

#ifdef ex4

    int main () {
        float sal, prest, salperc;

        printf("Digite o salario: ");
        scanf("%f", &sal);
        printf("Digite o valor da prestacao: ");
        scanf("%f", &prest);

        salperc = sal*0.20;

        if (prest > salperc)
            printf("Emprestino nao concedido.\n");
            else
            printf("Emprestimo concedido.\n");

        return 0;
    }

#endif 

/*

5 - Faca um programa que leia um número e, caso ele seja
positivo, calcule e mostre:
• O número digitado ao quadrado.
• A raiz quadrada do número digitado.

*/

#ifdef ex5

    int main () {
        float numb;
        
        do{
            printf("Digite um numero positivo: ");
            scanf("%f", &numb);
        }while(numb < 0);

        printf("O numero ao quadrado: %.2f.\nA raiz quadrada do numero digitado: %.2f.", pow(numb,2), sqrt(numb));

        return 0;
    }

#endif

/*

6 - Faca um programa que receba a altura e o sexo de uma pessoa
e calcule e mostre seu peso ideal, utilizando as seguintes
fórmulas (em que “h” corresponde à altura):
• Homens: (72,7 * h) – 58
• Mulheres: (62,1 * h) – 44,7

*/

#ifdef ex6

    int main () {
        float h, peso;
        int g;

        printf("Digite sua altura: ");
        scanf("%f", &h);

        do{
            printf("Digite 1 se for masculino e 0 se for feminino: ");
            scanf("%d", &g);
            
            if(g != 1 && g != 0)
                printf("O numero digitado e invalido.\n");
        }while (g != 1 && g != 0);
    
        if (g == 1) 
            peso = (72.7 * h) - 58;
            else
            peso = (62.1 * h) - 44.7;

        printf("O seu peso ideal e: %.2f.", peso);

        return 0;
        
        
    }

#endif