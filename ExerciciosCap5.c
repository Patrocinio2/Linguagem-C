/* Capítulo 05 - Comandos de Repetição*/

/* 01 - Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais
de 0 até N em ordem crescente.*/

#include<stdio.h>

int main ()
{
    int a, b;
    a = -1;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &b);
    while (a<b)
    {
    a = a + 1;
    // ou apenas a++
    printf("%d\n", a);
    }
    system("pause");
    return 0;
}

#include <stdio.h>>

int main()
{
    int controle, numero;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);
    controle = 0;
    for (controle = 0; controle <= numero; controle++)
    {
        printf("%d\n", controle);
    }
    return 0;
}

/* 02 - Faça um programa que leia um número inteiro positivo N e imprima todos os números naturais
de 0 até N em ordem decrescente.*/

#include<stdio.h>

int main()
{
    int controle, numero;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);
    controle = numero;
    for (controle = numero; controle >= 0; controle--)
    {
        printf("%d\n", controle);
    }
    return 0;
}

#include<stdio.h>

int main ()
{
    int a, b;
    a = 0;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &b);
    printf("%d\n", b);
    while (a<b)
    {
        b = b - 1;
        // ou apenas b--
        printf("%d\n", b);
    }
    system("pause");
    return 0;
}


/* 03 - Faça um programa que leia um número inteiro N e depois imprima os N primeiros números 
naturais ímpares.*/

#include <stdio.h>

int main()
{
    int numero, controle, impar;
    printf("Digite a quantidade de numeros impares que deve ser exibida: ");
    scanf("%d", &numero);
    impar = 1;
    for (controle = 1; controle<= numero; controle++)
    {
        printf("%d\n", impar);
        impar = impar + 2;
    }
    return 0;
}


/* 04 - Faça um programa que determine e mostre os cinco primeiros múltiplos de 3 considerando
números maiores que 0.*/

#include <stdio.h>

int main ()
{
    int a, controle;
    a = 1;
    for (controle = 1 ; controle <= 5; controle++)
    {
        printf("%d ", a*3);
        a = a + 1;
    }
    return 0;
}

#include <stdio.h>

int main ()
{
    int a = 1;
    const int n = 3;
    while (a < 6)
    {
    printf("%d\n", a*n);
    a = a + 1;
    }
    system("pause");
    return 0;
}

// 05 - Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.

#include <stdio.h>

int main()
{
    int controle, soma;
    controle = 0;
    soma = 0;
    for (controle=0; controle <= 48; controle = controle+2)
    {
        soma = soma + controle;
    }
    printf(" A soma dos 50 primeiros numeros pares e: %d\n", soma);
    return 0;
}


#include <stdio.h>

int main()
{
    int i, cont, soma = 0;
    for(i = 2, cont = 0; cont < 50; i = i + 2, cont + 1)
    {
        soma = soma + i;
    }
    printf("A soma dos 50 primeiros numeros pares e: %d\n", soma);
    system("pause");
    return 0;
}

/* 06 - Faça um programa que mostre uma contagem regressiva na tela, iniciando em 10 e terminando
em 0. Mostre a mensagem "FIM!" após a contagem.*/

#include <stdio.h>

int main()
{
    int a, controle;
    a = 10;
    for (controle = a; controle >= 0; controle--)
        {
        printf("%d\n", a);
        a = a - 1;
    }
    printf("FIM!");
    return 0;
}

#include <stdio.h>

int main()
{
    int contagem = 10;
    while (contagem > -1)
    {
    printf("%d\n\n", contagem);
    contagem = contagem -1;
    }
    printf("FIM!\n");
    system("pause");
    return 0;    
}


/* 07 - Elabore um programa que peça ao usuário para digitar 10 valores. Some esses valores e 
apresente o resultado na tela.*/

#include <stdio.h>

int main()
{
    int controle = 0;
    float n;
    float soma = 0;
    printf("Digite dez valores: ");
    for(controle = 0; controle < 10; controle++)
    {
        scanf("%f", &n);
        soma = soma + n;
    }
    printf("A soma dos valores digitados e: %.2f\n", soma);
    system("pause");
    return 0;
}

/* 08 - Faça um programa que leia 10 inteiros e imprima sua média.*/

#include <stdio.h>

int main ()
{
    int cont, n, media, soma = 0;
    printf("Digite dez valores: ");
    for(cont = 0; cont < 10; cont++)
    {
        scanf("%d", &n);
        soma = soma + n;
    }
    media = soma/cont;
    printf("A media dos valores digitados e: %d\n", media);
    system("pause");
    return 0;
}

// 09 - Escreva um programa que leia 10 números e escreva o menor valor lido e o maior valor lido.

#include <stdio.h>

int main() 
{
    int num, i, maior, menor;
    printf("Digite o 1o numero inteiro: ");
    scanf("%d", &num);
    maior = num;
    menor = num;
    for (i = 2; i <= 10; i++) {
        printf("Digite o %do numero inteiro: ", i);
        scanf("%d", &num);
        if (num > maior) {
            maior = num;
        }
        if (num < menor) {
            menor = num;
        }
    }
    printf("O maior numero digitado foi: %d\n", maior);
    printf("O menor numero digitado foi: %d\n", menor);
    return 0;
}


/* 10 - Faça um programa que leia 10 inteiros positivos, ignorando não positivos, e 
imprima sua média*/

#include <stdio.h>

int main()
{
    int cont, n, soma = 0;
    float media;
    for(cont = 0; cont < 10; )
    {
        printf("Digite um numero positivo: ");
        scanf("%d", &n);
        if(n > 0){ // se numero eh positivo
            soma += n;
            // contador so eh incrementado quando numero eh positivo
            cont++;
        }
    }
    media = soma / 10;
    printf("media = %f", media);
    system("pause");
    return 0;
}


/* 11 - Faça um algoritmo que leia um número inteiro positivo e imprima seus divisores.
Exemplo: Os divisores do número 66 são: 1, 2, 3, 6, 11, 22, 33 e 66.*/

#include <stdio.h>

int main ()
{
    int n, controle;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);
    printf("Os divisores de %d sao: ", n);
    for (controle=1; controle<=n; controle++)
    {
        if (n%controle==0)
        {
            printf("%d ", controle);
        }
    }
    return 0;
}


/* 12 - Escreva um programa que leia um número inteiro e calcule a soma de todos os divisores
desse número, com exceção dele próprio. Exemplo: A soma dos divisores de 66 é 1+2+3+6+11+22+33 = 78*/

#include <stdio.h>

int main()
{
    int n, controle, soma;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);
    soma = 0;
    for (controle = 1; controle < n; controle++)
    {
        if (n%controle==0)
        {
            soma = soma + controle;
        }
    }
    printf("A soma dos divisores de %d com excecao dele mesmo e: %d\n\n", n, soma);
    system("pause");
    return 0;
}

/* 13 - Faça um programa que exiba a soma de todos os números naturais abaixo de 1.000 que
são múltiplos de 3 ou 5.*/

#include <stdio.h>

int main()
{
    int controle, soma;
    soma = 0;
    for (controle=0; controle<1000; controle++)
    {
        if (controle%3==0 || controle%5==0)
        {
            soma = soma + controle;
        }
    }
    printf("A soma de todos os multiplos de 3 ou 5 abaixo de 1000 e: %d\n", soma);
    return 0;
}

/* 14 - Escreva um programa que leia um número inteiro, maior ou igual a zero, do usuário.
Imprima o enésimo termo da sequência de Fibonacci. Essa sequência começa no termo de ordem zero,
e, a partir do segundo termo, seu valor é dado pela soma dos dois termos anteriores. Alguns termos
dessa sequência são: 0, 1, 2, 3, 5, 8, 13, 21, 34.*/

#include <stdio.h>

int main()
{
    int num, controle, fib, fib1, fib2;
    fib1 = 1;
    fib2 = 2;
    printf("Digite um numero inteiro maior ou igual a zero: ");
    scanf("%d", &num);
    if (num==0)
    {
        printf("O valor do %d termo da sequencia de Fibonacci é: 0", num);
    }
    else if (num==1)
    {
        printf("O valor do %d termo da sequencia de Fibonacci é: %d", num, fib1);
    }
    else if (num==2)
    {
        printf("O valor do %d termo da sequencia de Fibonacci é: %d", num, fib2);
    }
    for (controle=3; controle<=num; controle++)
    {
        fib = fib1 + fib2;
        fib1 = fib2;
        fib2 = fib;
    }
    printf("O valor do %d termo da sequencia de Fibonacci é: %d", num, fib);
    return 0;
}

/* 15 - Elabora um programa que faça a leitura de vários números inteiros até que se digite um
número negativo. O programa tem de retornar o maior e o menor número lido.*/

#include <stdio.h>

int main ()
{
    int n, maior, menor;
    while (n>=0)
    {
        printf("Digite um numero: ");
        scanf("%d", &n);
        if (n>=maior)
        {
        maior=n;
        }
        if (n<=menor && n>0)
        {
            menor=n;
        }
    }
    printf("O maior valor lido foi %d e o menor foi %d\n", maior, menor);
    return 0;
}

/* 16 - Em matemática, o número harmônico designado por Hn define-se como o enésimo termo
da série harmônica. Ou seja: Hn = 1 + 1/2 + 1/3 + 1/4 ... + 1/n
Apresente um programa que calcule o valor de qualquer Hn.*/

#include <stdio.h>

int main ()
{
    int n;
    float soma, controle;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);
    for (controle=1; controle<=n; controle++)
    {
        soma = soma + 1/controle;
    }
    printf("O %do termo da serie harmonica e: %f\n", n, soma);
    system("pause");
    return 0;
}

/* 17 - Escreva um programa que leia um número inteiro positivo N e em seguida imprima N linhas
do chamado triângulo de Floyd:
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
16 17 18 19 20 21*/

#include <stdio.h>

int main()
{
    int num, cont = 1;

    do
    {
        printf("Digite um numero de linhas do triangulo: ");
        scanf("%d", &num);
    } while (num <= 0);
    
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", cont);
            cont++;
        }
        printf("\n");
    }
    return 0;
}

/* 18 - Faça um programa que receba um número inteiro maior do que 1 e verifique se o número
fornecido é primo ou não.*/

#include <stdio.h>

int main ()
{
    int primo, controle;
    printf("Digite um numero inteiro maior do que 1: ");
    scanf("%d", &primo);
    if (primo<=1)
    {
        printf("O numero deve ser maior do que 1");
        return 0;
    }
    for (controle=2; controle < primo; controle++)
    {
        if (primo%controle==0)
        {
            printf("O numero %d nao e primo.\n", primo);
            return 0;
        }
    }
    printf("O numero %d e primo.", primo);
    return 0; 
}

/* 19 - Faça um programa que calcule e escreva o valor de S:
S = 1/1 + 3/2 + 5/3 + 7/4 + ... + 99/50*/

#include <stdio.h>

int main()
{
    float soma, num, den;
    int controle;
    num, den = 1;
    soma = 0;
    for (controle = 1; controle <= 50; controle++)
    {
        soma = soma + num/den;
        num = num + 2;
        den = den + 1;
    }
    printf("O valor de S e: %f\n", soma);
    return 0;
}

/* 20 - Faça um programa que leia um valor inteiro e positivo N, calcule e mostre o valor E,
conforme a fórmula a seguir:
E = 1/1! + 1/2! + 1/3! + ... + 1/N!*/

#include <stdio.h>

int main()
{
    int n, controle;
    float e, nfloat;
    printf("Digite um valor inteiro e positivo: ");
    scanf("%d", &n);
    for (size_t i = 0; i < count; i++)
    {
        /* code */
    }
    
}

/* 21 - Escreva um programa que leia certa quantidade de números, imprima o maior deles e quantas
vezes o maior número foi lido. A quantidade de números a serem lidos deve ser fornecida pelo usuário.*/

#include <stdio.h>

int main()
{
    int qtd, contador, controle;
    contador = 0;
    float maior, num;
    printf("Digite a quantidade de numeros a serem lidos: ");
    scanf("%d", &qtd);
    printf("Digite os numeros: ");
    scanf("%f", &maior);
    for (controle = 1; controle < qtd; controle++)
    {
        scanf("%f", &num);
        if (num > maior)
        {
            maior = num;
            contador = 1;
        }
        else if (num == maior)
        {
            contador++;
        }
    }
    printf("O maior numero digitado foi: %.2f\n", maior);
    printf("O numero %.2f foi digitado %d vezes.\n", maior, contador);
    return 0;
}