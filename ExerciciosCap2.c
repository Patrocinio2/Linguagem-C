/* Capítulo 02 - Lendo e escrevendo nas variáveis*/

/* 01 - Elabora um programa que escreva as mensagens "Início do programa" e "Fim"
na tela, uma em cada linha, usando apenas um comando printf() */

#include <stdio.h>
int main()
{
    printf("Inicio de programa\nFim\n");
    system("pause");
    return 0;
}

// 02 - Escreva um programa que leia um número inteiro e depois o imprima

#include <stdio.h>
int main ()
{
    int x = 10;
    printf("%i\n",x);
    system("pause");
    return 0;
}

/* 03 - Escreva um programa que leia um número inteiro e depois imprima a
mensagem "Valor lido:", seguido do valor inteiro.
Use apenas um comando printf() */

#include <stdio.h>
int main ()
{
    int x = 10;
    printf("Valor lido: %i\n", x);
    system("pause");
    return 0;
}

/* 04 - Faça um programa que leia um número inteiro e depois imprima usando o operador "%f".
Veja o que aconteceu.*/

#include <stdio.h>
int main ()
{
    int x = 10;
    printf("%f\n", x);
    system("pause");
    return 0;
}

/* 05 - Faça um programa que leia um valor do tipo float e depois imprima usando o operador "%d".
Veja o que aconteceu.*/

#include <stdio.h>
int main ()
{
    float x = 10.5;
    printf("%d\n", x);
    system("pause");
    return 0;
}

/* 06 - Faça um programa que leia uma valor do tipo double e depois o imprima na
forma de notação científica.*/

#include <stdio.h>
int main()
{
    double x = 10.1234567890;
    printf("%e\n", x);
    system("pause");
    return 0;
}

/* 07 - Elabora um programa que leia um caractere e depois o imprima
como um valor inteiro.*/

#include <stdio.h>
int main()
{
    char y = 'b';
    printf("%d\n", y);
    system("pause");
    return 0;
}

// 08 - Faça um programa que leia dois números inteiros e depois os imprima como um valor inteiro.

#include <stdio.h>
int main()
{
    int x = 10;
    int y = 15;
    printf("%d %d\n", x, y);
    system("pause");
    return 0;
}

/* 09 - Faça um programa que leia dois valores do tipo float. Use um único comando de leitura
para isso. Em seguida, imprima os valores lidos na ordem inversa em que eles foram lidos.*/

#include <stdio.h>

int main ()
{
    float x, y;
    printf("Digite dois valores com casa decimal: ");
    scanf("%f%f", &x, &y);
    printf("%f %f\n",y,x);
    system("pause");
    return 0;
}

/* 10 - Elabora um programa que solicite ao usuário entrar com o valor do dia, mês e ano (inteiros).
Em seguida, imprima os valores lidos separados por uma barra(\)*/

#include <stdio.h>

int main()
{
    int dia, mes, ano;
    printf("Digite utilizando valores inteiros dia, mes e ano:");
    scanf("%d%d%d", &dia, &mes, &ano);
    printf("%d/%d/%d\n", dia, mes, ano);
    system("pause");
    return 0;
}

/* 11 - Elabora um programa que contenha uma constante qualquer do tipo float. Use o comando
#define. Imprime essa constante.*/

#include <stdio.h>
#define x 5.666

int main()
{
    printf("%f\n", x);
    system("pause");
    return 0;
}

/* 12 - Elabore um programa que contenha uma constante qualquer do tipo int. Use o comando const.
Imprima essa constante.*/

#include <stdio.h>

int main()
{
    const int x = 10;
    printf("%d\n", x);
    system("pause");
    return 0;
}

/* 13 - Faça um programa que leia um caracter do tipo char e depois o imprima entre aspas duplas.
Assim, se o caractere lido for a letra A, deverá ser impresso "A".*/

#include <stdio.h>

int main()
{
    char c;
    printf("Digite um caractere: ");
    scanf("%c", &c);
    printf("\"%c\"\n", c);
    system("pause");
    return 0;
}

/* 14 - Faça um programa que leia três caracteres do tipo char e depois os imprima um em cada linha.
Use um único comando printf() para isso.*/

#include <stdio.h>

int main()
{
    char a, b, c;
    printf("Digite tres caracteres: ");
    scanf("%c %c %c", &a, &b, &c);
    printf("%c\n%c\n%c\n", a, b, c);
    system("pause");
    return 0;
}

/* 15 - Escreva um programa que leia três variáves: char, int e float. Em seguida, imprima-as
de três maneira diferentes: separadas por espaços, por uma tabulação horizontal e uma em cada linha.
Use um único comando printf() para cada operação de escritas das três variáveis.*/

#include <stdio.h>

int main ()
{
    char c;
    int d;
    float f;
    printf("Digite um caractere, um numero inteiro e um numero com casa decimal: ");
    scanf("%c %d %f", &c, &d, &f);
    printf("%c %d %f\n", c, d, f);
    printf("%c\t%d\t%f\t\n", c, d, f);
    printf("%c\n%d\n%f\n", c, d, f);
    system("pause");
    return 0;
}