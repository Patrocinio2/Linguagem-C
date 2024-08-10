/* Capítulo 03 - As operações que podemos fazer com as variáveis*/

// 01 - Faça um programa que leia um número inteiro e retorne seu antecessor e seu sucessor.

#include <stdio.h>

int main()
{
    int x;
    printf("Digite um numero inteiro: ");
    scanf("%d", &x);
    printf("%d %d\n", x - 1, x + 1);
    system("pause");
    return 0;
}

// 02 - Faça um programa que leia um número real e imprima a quinta parte desse número.

#include <stdio.h>

int main()
{
    float x = 10;
    printf("x/5 = %f\n", x/5);
    system("pause");
    return 0;
}

// 03 - Faça um programa que leia três valores inteiros e mostre sua soma.

#include <stdio.h>

int main()
{
    int a = 2, b = 3, c = 4;
    printf("a + b + c = %d\n", a+b+c);
    system("pause");
    return 0;
}

// 04 - Leia quatro valores do tipo float. Calcule e exiba a média aritmética desses valores.

#include <stdio.h>

int main()
{
    float a = 2, x = 5, y = 7, z = 9; 
    printf("Media de a, x, y, z = %f\n", (a+x+y+z)/4);
    system("pause");
    return 0;
}

/* 05 - Faça um programa que calcule o ano de nascimento de uma pessoa a partir de sua idade
e do ano atual.*/

#include <stdio.h>

int main()
{
    int ano, idade;
    printf("Informe a idade que voce tera em 2023: ");
    scanf("%d", &idade);
    printf("Voce nasceu em %d\n", 2023-idade);
    system("pause");
    return 0;
}

/* 06 - Leia a velocidade em km/h e apresente convertida em m/s. A fórmula de conversão
é M = K/36, sendo K a velocidade em km/h e M em m/s.*/

#include <stdio.h>

int main()
{
    float km, m;
    printf("Digite a velocidade em quilometros por hora: ");
    scanf("%f", &km);
    printf("A velocidade em metros por segundo e de: %f\n", km/36);
    system("pause");
    return 0;
}

/* 07 - Faça um programa que leia um valor em reais e a cotação do dólar. Em seguida, imprima
o valor correspondente em dólares.*/

#include <stdio.h>

int main()
{
    float real, cotacao;
    printf("Digite o valor em reais e a cotacao do dolar: ");
    scanf("%f%f", &real, &cotacao);
    printf("O valor de R$ %f na cotacao de %f e igual a: %f\n", real, cotacao, real/cotacao);
    system("pause");
    return 0;
}

/* 08 - Leia um valor que represente uma temperatura em graus Celsius e apresente-a convertida
em graus Fahrenheit. A fórmula de conversão é F = C * (9.0/5.0) + 32.0, sendo F a temperatura
em Fahrenheit e C a temperatura em Celsius.*/

#include <stdio.h>

int main()
{
    float C, F;
    printf("Digite a temperatura em graus Celsius: \n");
    scanf("%f", &C).
    F = C * (9.0/5.0) + 32.0;
    printf("%f graus Celsius corresponder a %f graus Fahrenheit.", C, F);
    system("pause");
    return 0;
}

/* 09 - Leia um ângulo em graus e apresente-o convertido em radianos. A fórmula de conversão
é R = G * pi/180, sendo G o ângulo em graus e R em radianos e pi = 3.141592.*/

#include <stdio.h>
#define pi 3.141592

int main()
{
    float graus, rad;
    printf("Digite o valor do angulo em graus: ");
    scanf("%f", &graus);
    rad = graus * (pi/180);
    printf("%f graus correspondem a %f radianos.\n", graus, rad);
    system("pause");
    return 0;
}

/* 10 - A importância de R$ 780000.00 será dividida em três ganhadores de um concurso, sendo que
I - O primeiro ganhador receberá 46% do total.
II - O segundo receberá 32% do total.
III - O terceiro receberá o restante.
Calcule e imprima a quantia recebida por cada um dos ganhadores.*/

#include <stdio.h>
#define premio 780000

int main()
{
    float g1, g2, g3;
    g1 = premio * 0.46;
    g2 = premio * 0.32;
    g3 = premio - g1 - g2;
    printf("Considerando um premio de 780 mil reais.\n");
    printf("O primeiro ganhador recebera o valor de %f mil reais.\n", g1);
    printf("O segundo ganhador recebera o valor de %f mil reais.\n", g2);
    printf("E o terceiro ganhador receber o valor de %f mil reais.\n", g3);
    system("pause");
    return 0;
}

/* 11 - Leia o valor do raio de um círculo. Calcule e imprima a área do círculo correspondente.
A área do círculo é A = pi * raio², sendo pi = 3.141592.*/

#include <stdio.h>
#define pi 3.141592

int main()
{
    float r, A;
    printf("Digite o valor do raio do circulo: ");
    scanf("%f", &r);
    A = pi*(r*r);
    printf("A area de um circulo com raio de %f e de: %f\n", r, A);
    system("pause");
    return 0;
}
 
/* 12 - Leia a altura e o raio de um cilindro circular e imprima o volume desse cilindro. O volume 
de um cilindro circular é calculado por meio da seguinte fórmula:
V = pi * raio² * altura, em que pi = 3.141592.*/

#include <stdio.h>
#define pi 3.141592

int main()
{
    float a, r, v;
    printf("Digite o raio e a altura de um cilindro circular: ");
    scanf("%f%f", &r, &a);
    v = pi*r*r*a;
    printf("O volume do cilindro e de: %f\n", v);
    system("pause");
    return 0;
}

/* 13 - Sejam a e b os catetos de um triângulo cuja hipotenusa h é obtida pela equação:
h = raiz(a² + b²)
Faça um programa que leia os valores de a e b, e calcule o valor da hipotenusa através da fórmula
dada. Imprima o resultado.*/

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, h;
    printf("Digite o valor dos catetos do triangulo: ");
    scanf("%f%f", &a, &b);
    h = sqrt(a*a + b*b);
    printf("A hipotenusa do triangulo cujos catetos sao %f e %f tem o valor de: %f\n", a, b, h);
    system("pause");
    return 0;
}


/* 14 - Faça um programa que converta uma letra maiúscula em letra minúscula. Use a tabela
ASCII para isso.*/

#include <stdio.h>

int main()
{
    char c;
    printf("Digite uma letra maiuscula: ");
    scanf("%c", &c);
    printf("%c\n", c+32);
    system("pause");
    return 0;
}

/* 15 - Faça um programa para ler um número inteiro positivo de três dígitos. Em seguida,
calcule e mostre o número formatado pelos dígitos invertidos do número lido.
Ex: Número lido = 123 - Número gerado = 321. */

#include <stdio.h>

int main()
{
    int numero, c, d, u;
    printf("Digite um numero inteiro de tres digitos: ");
    scanf("%d", &numero);
    c = numero / 100;
    d = (numero % 100) / 10;
    u = numero % 10;
    printf("%d%d%d", u, d, c);
    system("pause");
    return 0;
}

/* 16 - Escreva um programa que leia um número inteiro e mostre a multiplicação e a divisão desse
número por dois (utilize os operadores de deslocamento de bits)*/

#include <stdio.h>

int main() {
    int numero, multiplicacao, divisao;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    multiplicacao = numero << 1; // Multiplica por 2 usando operador de deslocamento para a esquerda
    divisao = numero >> 1; // Divide por 2 usando operador de deslocamento para a direita

    printf("Multiplicacao por 2: %d\n", multiplicacao);
    printf("Divisao por 2: %d\n", divisao);

    return 0;
}

// 17 - Escreva um programa que leia um número inteiro e mostre o seu complemento bit a bit.

#include <stdio.h>

int main()
{
    int numero;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    printf("Numero: %d\nComplemento bit a bit: %d\n", numero, ~numero);
    system("pause");
    return 0;
}

/* 18 - Elabora um programa que leia dois números inteiros e exiba o deslocamento, à esquerda e
à direita, do primeiro número pelo segundo.*/

#include <stdio.h>

int main()
{
    int a, b;
    printf("Digite dois numeros inteiros: ");
    scanf("%d%d", &a, &b);
    printf("Deslocamento a esquerda: %d\nDeslocamento a direita: %d\n", a<<b, a>>b);
    system("pause");
    return 0;
}

/* 19 - Elabora um programa que leia dois números inteiros e exiba o resultado das operações de
"ou exclusivo", "ou bit a bit" e "e bit a bit" entre eles.*/

#include <stdio.h>

int main()
{
    int a, b;
    printf("Digite dois numeros inteiros: ");
    scanf("%d%d", &a, &b);
    printf("Primeiro numero digitado: %d\nSegundo numero digitado: %d\n", a, b);
    printf("Ou exclusivo: %d\n", a^b);
    printf("Ou bit a bit: %d\n", a|b);
    printf("E bit a bit: %d\n", a&b);
    system("pause");
    return 0;
}