/* Capítulo 10 - Ponteiros*/

/* 01 - Escreva um programa que contenha duas variáveis inteiras.
Compare seus endereços e exiba o maior endereço*/

#include <stdio.h>

int main()
{
    int a, b;
    int *p1, *p2;
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    p1 = &a;
    p2 = &b;
    if (p1 > p2)
    {
        printf("O valor a esta no maior endereco\nEndereco: %p", p1);
    }
    else
    {
        printf("O valor b esta no maior endereco\nEndereco: %p", p2);
    }
    return 0;
}


/* 02 - Escreva um programa que contenha duas variáveis inteiras.
Leia essas variáveis do teclado. Em seguida, compare seus endereços
e exiba o conteúdo do maior endereço.*/

#include <stdio.h>

int main()
{
    int a, b;
    int *p1, *p2;
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    p1 = &a;
    p2 = &b;
    if (p1 > p2)
    {
        printf("Maior endereco: %p\nValor do endereco: %d", p1, *p1);
    }
    else
    {
        printf("Maior endereco: %p\nValor do endereco: %d", p2, *p2);
    }
    return 0;
}

/* 03 - Crie um programa que contenha um array de float com 10 elementos.
Imprima o endereço de cada posição desse array.*/

#include <stdio.h>

int main()
{
    float vet[10];
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("Digite o valor %d do vetor: ", i);
        scanf("%f", &vet[i]);
    }
    float *p;
    p = &vet[0];
    for ( i = 0; i < 10; i++)
    {
        printf("Enderecos da posicao %d: %p\n", i, p);
        p++;
    }
    return 0;    
}

/* 04 - Crie um programa que contenha uma matriz de float com três linhas e
três colunas. Imprima o endereço de cada posição dessa matriz*/

#include <stdio.h>

int main()
{
    float mat[3][3];
    float *p;
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Digite o valor [%d][%d]: ", i, j);
            scanf("%f", &mat[i][j]);
        }
    }
    p = &mat[0][0];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Posicao do valor [%d][%d]: %p", i, j, p);
            p++;
        }
    }
    return 0;
}

/* 05 - Crie um programa que contenha uma array de inteiros com cinco elementos.
Utilizando apenas aritmética de ponteiros, leia esse array do teclado e imprima
o dobro de cada valor lido.*/

#include <stdio.h>

int main()
{
    int vet[5], i, *p;
    for (i = 0; i < 5; i++)
    {
        printf("Digite o valor %d do vetor: ", i);
        scanf("%d", &vet[i]);
    }
    p = vet;
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", *(p + i) * 2);
    }
    return 0;
}

/* 06 - Crie um programa que contenha uma array com cinco elementos inteiros.
Leia esse array do teclado e imprima o endereço das posições contendo valores pares.*/

#include <stdio.h>

int main()
{
    int vet[5], i, *p;
    for (i = 0; i < 5; i++)
    {
        printf("Digite o valor %d do vetor: ", i);
        scanf("%d", &vet[i]);
    }
    p = vet;
    printf("Posicoes dos valores pares:\n");
    for (i = 0; i < 5; i++)
    {
        if (*(p + i) % 2 == 0)
        {
            printf("%p\n", p + i);
        }
    }
    return 0;
}

/* 07 - Elabora uma função que receba duas strings como parâmetros e verifique se a 
segunda string ocorre dentro da primeira. Use aritmética de ponteiros para acessar
os caracteres da string*/

/* 08 - Crie uma função que receba dois parametros: um vetor e um valor do mesmo tipo
do vetor. A função deverá preencher os elementos de vetor com esse valor. Não utilize
índices para percorrer o vetor, apenas aritmética de ponteiros*/

# include <stdio.h>

void valorvetor (int *vet, int tam, int valor);

int main()
{
    int n;
    printf("Digite o numero de elementos do vetor: ");
    scanf("%d", &n);
    int vet[n], valor;
    print("Digite o valor dos elementos do vetor: ");
    scanf("%d", &valor);
    valorvetor(vet, n, valor);
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", vet[i]);
    }
    return 0;
}

void valorvetor(int *vet, int tam, int valor)
{
    int *p;
    for (p = vet; p < vet + tam; p++)
    {
        *p = valor;
    }
}

/* 09 - Crie uma função que receba como parâmetro um vetor e o imprima. Não utilize
índices para percorrer o vetor, apenas aritmética de ponteiros.*/

#include <stdio.h>

void impvetor (int *vet, int tam);

int main()
{
    int n;
    printf("Digite o numero de elementos do vetor: ");
    scanf("%d", &n);
    int vet[n], i;
    for (i = 0; i < n; i++)
    {
        printf("Digite o valor %d do vetor: ", i);
        scanf("%d", &vet[i]);
    }
    impvetor(vet, n);
    return 0;    
}

void impvetor(int *vet, int tam)
{
    int *p;
    for (p = vet; p < vet + tam; p++)
    {
        printf("%d\n", *p);
    }
}

/* 10 - Considere a seguinte declaração: int a, *b, **c, ***d. Escreva um programa que
leia a variável a e calcule e exiba o dobro, o triplo e o quádruplo desse valor utilizando
apenas os ponteiros b, c e d. O ponteiro b deve ser usado para calcular o dobro, c, o triplo,
e d, o quádruplo.*/

#include <stdio.h>

int main()
{
    int a, *b, **c, ***d;
    printf("Digite um valor inteiro: ");
    scanf("%d", &a);
    printf("Valor original: %d\n", a);
    b = &a;
    *b = (*b) * 2;
    printf("Dobro: %d\n", *b);
    *b = (*b) / 2;
    c = &b;
    **c = (**c) * 3;
    printf("Triplo: %d\n", **c);
    **c = (**c) / 3;
    d = &c;
    ***d = (***d) * 4;
    printf("Quadruplo: %d\n", ***d);
    return 0;        
}