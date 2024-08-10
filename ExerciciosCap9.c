// Capítulo 09 - Funções

/* 9.4.1 - Passagens por valor*/

/* 1 - Escreva uma função que receba por parametro dois números inteiros e retorne o maior deles.*/

#include <stdio.h>

int maior(int x, int y);

int main()
{
    int x, y, maior;
    printf("Digite um numero inteiro: ");
    scanf("%d", &x);
    printf("Digite outro número inteiro: ");
    scanf("%d", &y);
    maior = maior(x, y);
    printf("O maior numero digitado foi %d\n", maior);
    return 0;
}

int maior(int x, int y)
{
    int x;
    int y;
    int z;
    {
        if (x > y)
        {
            z = x;
        }
        else
            z = y;
    } 
    return z;
}

/* 2 - Faça uma função que receba um número inteiro de 1 a 12 e imprima em tela o mês e a sua
quantidade de dias de acordo com o número digitado pelo usuário. Exemplo: Entrada = 4,
Saída = Abril*/

#include <stdio.h>

enum meses {janeiro = 1, fevereiro, marco, abril, maio, junho, julho, agosto, setembro, outubro, \
novembro, dezembro};

int mes(int m);

int main()
{
    int m;
    printf("Digite o valor correspondente ao mes: ");
    scanf("%d", &m);
    mes(m);
    return 0;
}

int mes(int m)
{
    switch (m)
    {
        case janeiro:
        printf("Janeiro - 31 dias\n");
        break;
    case fevereiro:
        printf("Fevereiro - 28 dias\n");
        break;
    case marco:
        printf("Marco - 31 dias\n");
        break;
    case abril:
        printf("Abril - 30 dias\n");
        break;
    case maio:
        printf("Maio - 31 dias\n");
        break;
    case junho:
        printf("Junho - 30 dias\n");
        break;
    case julho:
        printf("Julho - 31 dias\n");
        break;
    case agosto:
        printf("Agosto - 31 dias\n");
        break;
    case setembro:
        printf("Setembro - 30 dias\n");
        break;
    case outubro:
        printf("Outubro - 31 dias\n");
        break;
    case novembro:
        printf("Novembro - 30 dias\n");
        break;
    case dezembro:
        printf("Dezembro - 31 dias\n");
        break;
    default:
        printf("Numero invalido\n");
        break;
    }
}

/* 3 - Escreva uma função que receba por parametro um temperatura em graus Fahrenheit e a retorne
convertida em graus Celsius. A fórmula de conversão é C = (F - 32.0) * (5.0/9.0)*/

#include <stdio.h>

int conversor(float f);

int main()
{
    float c, f;
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &f);
    c = conversor(f);
    printf("%.0f graus Celsius.", c);
    return 0;
}

int conversor(float f)
{
    float c;
    c = (f - 32.0) * (5.0/9.0);
    return c;
}

/* 4 - Escreva uma função que receba por parametro a altura e o raio de um cilindro circular e
retorne o volume desse cilindro. O volume de um cilindo circular é calculado por meio da seguinte
fórmula: V = pi * raio² * altura, em que pi = 3,1414592*/

#include <stdio.h>

int volume(float h, float r);

int main()
{
    float h, r, v;
    printf("Digite a altura do cilindro: ");
    scanf("%f", &h);
    printf("Digite o raio do cilindro: ");
    scanf("%f", &r);
    v = volume(h, r);
    printf("O volume do cilindro e: %.2f", v);
    return 0;
}

int volume(float h, float r)
{
    float const pi = 3.1414592;
    float v;
    v = pi * (r*r) * h;
    return v;
}

/* 5 - Escreva uma função para o cálculo do volume de uma esfera V = (4/3) * (pi * r³), em que o 
valor do raio r deve ser passado por parametro.*/

#include <stdio.h>

float volume(float r);

int main()
{
    float v, r;
    printf("Digite o valor do raio da esfera: ");
    scanf("%f", &r);
    v = volume(r);
    printf("O volume da esfera e de: %.2f", v);
    return 0;
}

float volume(float r)
{
    float const pi = 3.1414592;
    float v;
    v = (4.0 / 3.0) * (pi * (r * r * r));
    return v;
}

/* 6 - Escreva uma função que receba o peso (quilos) e a altura (metros) de uma pessoa. Calcule
e retorne o IMC dessa pessoa: IMC = peso / (altura²)*/

#include <stdio.h>

float calc(float p, float h);

int main()
{
    float peso, altura, imc;
    printf("Digite o seu peso: ");
    scanf("%f", &peso);
    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    imc = calc(peso, altura);
    printf("IMC: %.2f", imc);
    return 0;
}

float calc(float p, float h)
{
    float imc;
    imc = p / (h*h);
    return imc;
}

/* 7 - Elabore uma função que receba três números inteiros como parametro, representando horas,
minutos e segundos. A função deve retorna esse horário convertido em segundos.*/

#include <stdio.h>

int calcseg(int h, int m, int s);

int main()
{
    int h, m, s, soma;
    printf("Digite o horario no formato (HH:MM:SS): ");
    scanf("%d:%d:%d", &h, &m, &s);
    soma = calcseg(h, m, s);
    printf("O horario digitado corresponde a %d segundos.\n", soma);
    return 0;
}

int calcseg(int h, int m, int s)
{
    int segh, segm, seg;
    segh = (h * 60) * 60;
    segm = m * 60;
    seg = segh + segm + s;
    return seg;
}

/* 8 - Elabora uma função para verificar se um número é um quadrado perfeito. Um quadrado perfeito
é um número inteiro não negativo que pode ser expresso como o quadrado de outro número inteiro.
Exemplos: 1, 4, 9*/

#include <stdio.h>
#include <math.h>

int quad(int num);

int main()
{
    int num, resultado;
    printf("Digite um numero inteiro nao negativo: ");
    scanf("%d", &num);
    resultado = quad(num);
    if (resultado == 1)
    {
        printf("O %d e um quadrado perfeito.", num);
    }
    else
    {
        printf("O %d nao e um quadrado perfeito.", num);
    }
    return 0;    
}

int quad(int num)
{
    int raiz = (int) sqrt(num);
    if (raiz * raiz == num)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}


/* 9 - Elabora uma função que receba três notas de uma aluno como parametros e uma letra. Se a
letra for "A", a função deverá calcular a média aritmética das notas do aluno; se for "P", deverá
calcular a média ponderada, com pesos 5, 3 e 2. Retorne a média calculada para o programa principal.*/

#include <stdio.h>

float mediafinal(float a, float b, float c, char m);

int main()
{
    float nota[3];
    char media;
    for (int i = 0; i < 3; i++)
    {
        printf("Digite a nota da prova %d: ", i);
        scanf("%f", &nota[i]);
    }
    getchar();
    printf("Digite A para media aritmetica e P para media ponderada: ");
    scanf("%c", &media);
    float notafinal;
    notafinal = mediafinal(nota[0], nota[1], nota[2], media);
    printf("\nNota final: %.2f\n", notafinal);
    return 0;
}

float mediafinal(float a, float b, float c, char m)
{
    float media;
    if (m == 'A')
    {
        media = (a + b + c) / 3;
    }
    else if (m == 'P')
    {
        media = (5 * a + 3 * b + 2 * c) / 10;
    }
    return media;
}


/* 10 - Escreva uma função que receba dois valores inteiros e um símbolo. Esse símbolo
representará a operação que se deseja efetuar com os números. Assim, se o símbolo for "+", deverá
ser realizada um adição, se for "-", uma subtração, se for"/", uma divisão, e, se for "*", será
efetuada uma multiplicação. Retorne o resultado da operação para o programa principal.*/

#include <stdio.h>

float calc(float x, float y, char op);

int main()
{
    float x, y, resultado;
    char op;
    printf("Digite o primeiro valor: ");
    scanf("%f", &x);
    printf("Digite o segundo valor: ");
    scanf("%f", &y);
    getchar();
    printf("+ Adicao\n- Subtracao\n/ Divisao\n* Multiplicacao\nDigite\
 o simbolo da operacao desejada: ");
    scanf("%c", &op);
    resultado = calc(x, y, op);
    printf("Resultado: %.2f", resultado);
    return 0;
}

float calc(float x, float y, char op)
{
    float resultado;
    if (op == '+')
    {
        resultado = x + y;
    }
    else if (op == '-')
    {
        resultado = x - y;
    }
    else if (op == '/')
    {
        resultado = x / y;
    }
    else if (op == '*')
    {
        resultado = x * y;
    }
    return resultado;
}

/* 11 - Escreva uma função que receba por parametros dois valores inteiros x e y e calcule e
retorne o resultado de x elevado a y para o programa principal. Não use nenhuma função
pronta para isso.*/

#include <stdio.h>

int calc(int x, int y);

int main()
{
    int x, y, resultado;
    printf("O programa ira calcular o valor de x elevado a y.\n");
    printf("Digite x: ");
    scanf("%d", &x);
    printf("Digite y: ");
    scanf("%d", &y);
    resultado = calc(x,y);
    printf("%d elevado a %d = %d", x, y, resultado);
    return 0;
}

int calc(int x, int y)
{
    int soma = 0;
    for (int i = 1; i < y; i++)
    {
        soma = soma + x * x;
    }
    return soma; 
}

/* 12 - Escreva uma função que receba um número inteiro positivo e retorne o maior fator
primo desse número.*/

#include <stdio.h>

int primo(int x);
int maiorfator(int x);

int main()
{
    int x, maior;
    printf("Digite um numero: ");
    scanf("%d", &x);
    maior = maiorfator(x);
    printf("Maior fator primo: %d\n", maior);
    return 0;
}

int primo(int x)
{
    int i, div;
    div = 0;
    for (i = 1; i <= x; i++)
    {
        if (x % i == 0)
        {
            div++;
        }
        if (div > 2)
        {
            break;
        }
    }
    if (div > 2)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int maiorfator(int x)
{
    int fator, i, aux;
    fator = 1;
    for (i = 2; i < x; i++)
    {
        aux = primo(i);
        if (aux == 1)
        {
            if (x % i == 0)
            {
                fator = i;
            }    
        }
        if (i >= x / 2)
        {
            break;
        }    
    }
    return fator;
}
/* Existe um erro de lógica... o programa retorna 1 como fator primo, entretanto 1 não é um número primo. Código tirado do github*/

/* 13 - Escreva uma função que receba um número inteiro positivo n. Calcule e retorne o
somatório de 1 até n: 1 + 2 + 3 + ... + n.*/

#include <stdio.h>

int calc (int n);

int main()
{
    int n, soma;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);
    soma = calc(n);
    printf("O valor da soma n: 1 + 2 + 3 ... + n e %d\n", soma);
    return 0;
}

int calc (int n)
{
    int soma = 0;
    for (int i = 1; i <= n; i++)
    {
        soma = soma + i;
    }
    return soma;
}

/* 14 - Escreva uma função que receba um número inteiro positivo n. Calcule e retorne o seu
fatorial n!*/

#include <stdio.h>

int fat (int x);

int main()
{
    int x, fatorial;
    printf("Digite um numero: ");
    scanf("%d", &x);
    fatorial = fat(x);
    printf("O fatorial de %d e igual a %d", x, fatorial);
    return 0;
}

int fat (int x)
{
    int resultado = 1;
    int i;
    for (i = x; i >= 1; i--)
    {
        resultado = resultado * i;
    }
    return resultado;
}

/* 15 - Elabora uma função que receba como parametro uma valor inteiro n e gere como saída
n linhas com pontos de exclamação, conforme o exemplo a seguir, em que usamos n = 5.
!
!!
!!!
!!!!
!!!!!*/

#include <stdio.h>

int mario (int n);

int main()
{
    int n;
    printf("Digite o numero de linhas: ");
    scanf("%d", &n);
    mario(n);
    return 0;
}

int mario (int n)
{
    for (int i = 1; i <= n; i++)
    {
        // Imprimir blocos
        for (int k = 1; k <= i; k++)
        {
            printf("!");
        }
        printf("\n");
    }
}

/* 16 - Elabora uma função que receba como parametro um valor inteiro n e gere como saída
um triangulo lateral formado por asteriscos conforme o exemplo a seguir, em que usamos
n = 4.
*
**
***
****
***
**
*  */

#include <stdio.h>

int mario (int n);

int main()
{
    int n;
    printf("Digite o numero de linhas: ");
    scanf("%d", &n);
    mario(n);
    return 0;
}

int mario (int n)
{
    for (int i = 1; i <= n; i++)
    {
        // Imprimir blocos
        for (int k = 1; k <= i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = n - 1; i >= 1 ; i--)
    {
        for (int k = i; k >= 1; k--)
        {
            printf("*");
        }
        printf("\n");
    }
}


/* 17 - Faça uma função que receba um inteiro N como parametro. Calcule e retorne o resultado
da seguinte série S.
S = 2/4 + 5/5 + 10/6 + ... + N²+1/N+3*/

#include <stdio.h>

float serie(int n);

int main()
{
    int n;
    float resultado;
    printf("Digite um numero: ");
    scanf("%d", &n);
    resultado = serie(n);
    printf("Serie S = %.2f\n", resultado);
    return 0;
}

float serie(int n)
{
    float soma;
    soma = 0;
    for (int i = 1; i <= n; i++)
    {
        soma = soma + ((float)(i * i + 1) / (i + 3));
    }
    return soma;
}


/* 18 - Faça uma função que receba como paramatero o valor de um angulo em graus e calcule o
valor do seno desse angulo usando a respectiva série de Taylor.
Sen x = somatorio(5, n=0) ((-1) elevado a n / (2n+1)!) * x elevado a 2n+1) = x - x³/3! +
x elevado a 5 /5!...  em que x é o valor do angulo em radiados. Considere pi=3.1414592 e n variando
de 0 a 5.*/

#include <stdio.h>
#include <math.h>
#define pi 3.1414592

float sen(float x);
int fat (int y);

int main()
{
    float ang;
    printf("Digite o angulo em graus: ");
    scanf("%f", &ang);
    float seno;
    seno = sen(ang);
    printf("O seno de %d e: %.f", ang, seno);
    return 0;
}

int fat (int y)
{
    int resultado = 1;
    int i;
    for (i = y; i >= 1; i--)
    {
        resultado = resultado * i;
    }
    return resultado;
}

float sen(float x)
{
    float rad;
    float seno = 0;
    rad = x * (pi / 180);
    for (int i = 0; i <= 5; i++)
    {
        seno = seno + (pow(-1, i) / fat(2 * i + 1)) / pow(rad, 2 * i + 1);
    }
    return seno;
}

/* 19 - Faça uma função que receba como parametro o valor de um angulo em graus e calcule o 
cosseno desse angulo usando a respectiva série de Taylor.
Cos x = somatorio(5, n=0) ((-1) elevado a n / (2n)!) * x elevado a 2n) = x - x²/2! +
x elevado a 4 /4!...   em que o valor de x é o valor do angulo em radianos. Considere
pi=3.1414592 e n variando de 0 a 5.*/

#include <stdio.h>
#include <math.h>
#define pi 3.1414592

float cossen(int x);
int fat (int y);

int main()
{
    float ang;
    printf("Digite o angulo em graus: ");
    scanf("%d", &ang);
    float cosseno;
    cosseno = cossen(ang);
    printf("O cosseno de %d e: %f", ang, cosseno);
    return 0;
}

int fat (int y)
{
    int resultado = 1;
    int i;
    for (i = y; i >= 1; i--)
    {
        resultado = resultado * i;
    }
    return resultado;
}

float cossen(int x)
{
    float rad;
    float cosseno = 0;
    rad = x * (pi / 180);
    for (int i = 0; i <= 5; i++)
    {
        cosseno = cosseno + (pow(-1, i) / fat(2 * i)) / pow(rad, 2 * i );
    }
    return cosseno;
}


/* 20 - Faça uma função que calcule e retorne o número neperiano e, e = 2,71828183, usando
a série a seguir:
e = somatorio(n, n=0) 1/n! = 1/0! + 1/1! + 1/2! + 1/3!....*/

#include <stdio.h>

int fat(int y);
float nep(int e);

int main()
{
    int e;
    printf("Digite a quantidade de termos para calcular o numero neperiano: ");
    scanf("%d", &e);
    float resultado;
    resultado = nep(e);
    printf("Numero neperiano: %f", resultado);
    return 0;
}

float nep(int e)
{
    float nep;
    nep = 0;
    for (int i = 0; i <= e; i++)
    {
        nep = nep + (1.0 / fat(i));
    }
    return nep;
}

int fat(int y)
{
    int resultado = 1;
    int i;
    for (i = y; i >= 1; i--)
    {
        resultado = resultado * i;
    }
    return resultado;
}

/* 9.4.2 - Passagem por referência*/

/* 01 - Escreva uma função que, dado um número real passado como parametro, retorne a parte 
inteiro e a parte fracionária desse número por referencia.*/

#include <stdio.h>

void funcaop(float z, int*inteiro, float*fracionado);

int main()
{
    float num, fracao;
    int inteiro;
    printf("Digite um numero real: ");
    scanf("%f", &num);
    funcaop(num, &inteiro, &fracao);
    printf("Parte inteira: %d\nParte Fracionaria: %.2f\n", inteiro, fracao);
    return 0; 
}

void funcaop(float z, int*inteiro, float*fracionado)
{
    *inteiro = z;
    *fracionado = z - *inteiro;
}


/* 02 - Escreva uma função para o cálculo do volume e da área de uma esfera
V = 4 / 3 (pi + r³)  -  A = 4pi * r²
em que pi = 3,1414592. O valor do raio r deve ser passado por parametro, e os valores calculados
devem ser retornados por referencia*/

#include <stdio.h>
#define pi 3.1414592

void esfera (float r, float *area, float *volume);

int main()
{
    printf("Calculo da Area e Volume da Esfera\n");
    float raio, volume, area;
    printf("Digite o valor do raio: ");
    scanf("%f", &raio);
    esfera(raio, &area, &volume);
    printf("Esfera com raio %.2f:\nVolume: %.2f\nArea: %.2f\n", raio, volume, area);
    return 0;
}

void esfera (float r, float *area, float *volume)
{
    *area = 4 * pi * (r * r);
    *volume = (4.0 / 3.0) * ((pi * (r * r * r)));
}

/* 03 - Faça uma função que receba um array de 10 elementos e retorne a sua soma*/

#include <stdio.h>

int somavetor(int *vet, int tam);

int main()
{
    int vet[10], soma;
    for (int i = 0; i < 10; i++)
    {
        printf("Digite o valor %d: ", i);
        scanf("%d", &vet[i]);
    }
    soma = somavetor(vet, 10);
    printf("A soma dos valores do vetor e: %d", soma);
    return 0; 
}

int somavetor(int *vet, int tam)
{
    int soma = 0;
    for (int i = 0; i < tam; i++)
    {
        soma = soma + vet[i];
    }
    return soma;    
}

/* 04 - Escreva uma função que receba um array contendo a nota de 10 alunos e retorne a média
dos alunos*/

#include <stdio.h>

float mediavet(float *vet, int tam);

int main()
{
    float vet[10], media;
    for (int i = 0; i < 10; i++)
    {
        printf("Digite a nota %d: ", i);
        scanf("%f", &vet[i]);
    }
    media = mediavet(vet, 10);
    printf("Media das notas: %.2f", media);
    return 0;    
}

float mediavet(float *vet, int tam)
{
    float soma = 0;
    float media;
    for (int i = 0; i < tam; i++)
    {
        soma = soma + vet[i];
    }
    media = soma / 10;
    return media;    
}

/* 05 - Escreva uma função que calcule o desvio-padrão d de um vetor V contendo n numeros
d = raiz quadrada(1/n-1 somatorio(n-1, i=0)(V[i]-n)) em que m é a media desse vetor*/

#include <stdio.h>
#include <math.h>

float desviop(float *vet, int tam);

int main()
{
    int n;
    printf("Digite a quantidade de numeros do vetor V: ");
    scanf("%d", &n);
    float vet[n], desvio;
    for (int i = 0; i < n; i++)
    {
        printf("Digite o valor %d: ", i);
        scanf("%f", &vet[i]);
    }
    desvio = desviop(vet, n);
    printf("Desvio padrao: %f\n", desvio);
    return 0;
}

float desviop(float *vet, int tam)
{
    float media, soma, desvio;
    int i;
    soma = 0;
    for (i = 0; i < tam; i++)
    {
        soma = soma + vet[i];
    }
    media = soma / tam;
    soma = 0;
    for (i = 0; i < tam; i++)
    {
        soma = soma + pow((vet[i] - media), 2);
    }
    desvio = sqrt(soma / tam);
    return desvio;
}

/* 06 - Crie uma função que receba uma matriz A contendo cinco linhas e cinco colunas. Calcule na
propria matriz A a sua transposta (se B é a matriz transposta de A, então A[i][j] = B[j][i])*/

#include <stdio.h>

void mattrans(int mat[][5], int n);

int main()
{
    int i, j, mat[5][5];
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("Digite o valor da linha %d e coluna %d: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    mattrans(mat, 5);
    printf("Matriz transposta: \n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}

void mattrans(int mat[][5], int n)
{
    int i, j, temp;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            temp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = temp;
        }   
    }   
}

/* 07 - Crie uma função que receba uma matriz A contendo 10 linhas e 10 colunas e retorne a soma
dos seus elementos.*/

#include <stdio.h>

int somamat(int mat[][10], int n);

int main()
{
    int mat[10][10], i, j, soma;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            printf("Digite o valor da linha %d e coluna %d: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    soma = somamat(mat, 10);
    printf("Soma dos elementos da matriz: %d", soma);
    return 0;
}

int somamat(int mat[][10], int n)
{
    int i, j, soma;
    soma = 0;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            soma = soma + mat[i][j];
        }
    }
    return soma;
}

/* 08 - Crie uma função que receba, por parametro, uma matriz A contendo seis linhas e seis colunas.
Essa função deve retornar, por referencia, a soma dos elementos da sua diagonal principal e da sua
diagonal secundaria.*/

#include <stdio.h>

void somadiagonal(int mat[][6], int n, int *somaprincipal, int *somasecundaria);

int main()
{
    int mat[6][6], i, j, somap, somas;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            printf("Digite o valor da linha %d e coluna %d: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    somadiagonal(mat, 6, &somap, &somas);
    printf("Soma da Diagonal Principal: %d\n", somap);
    printf("Soma da Diagonal Secundaria: %d\n", somas);
    return 0;
}

void somadiagonal(int mat[][6], int n, int *soma_p, int *soma_s)
{
    int i, j;
    *soma_p = 0;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            if (j == i)
            {
                *soma_p = *soma_p + mat[i][j];
            }    
        } 
    }
    *soma_s = 0;
        for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            if (j + i == 5)
            {
                *soma_s = *soma_s + mat[i][j];
            }    
        } 
    }
}

/* 09 - Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura deve conter
o numero de matricula do aluno, seu nome e as notas de tres provas. Agora, escreva uma função que
receba um vetor de tamanho N dessa estrutura. Essa função deve retornar o indice do aluno que
possui a maior média geral entre os alunos.*/

#include <stdio.h>

struct aluno
{
    char nome[50];
    int matricula;
    float prova[3];
};

void funcaoindice (struct aluno vet[], int n);

int main()
{
    int n;
    printf("Digite a quantidade de alunos: ");
    scanf("%d", &n);
    getchar();
    struct aluno aluno[n];
    int i, j;
    for (i = 0; i < n; i++)
    {
        printf("Nome: ");
        fgets(aluno[i].nome, 50, stdin);
        printf("Matricula: ");
        scanf("%d", &aluno[i].matricula);
        getchar();
        for (j = 0; j < 3; j++)
        {
            printf("Nota da prova %d: ", j);
            scanf("%f", &aluno[i].prova[j]);
        }
        getchar();
        printf("\n");
    }
    funcaoindice(aluno, n);
    return 0;    
}

void funcaoindice (struct aluno vet[], int n)
{
    float soma = 0;
    float media = 0;
    int indice = 0;
    int i, j;
    for (i = 0; i < n; i++)
    {
        soma = 0;
        for (j = 0; j < 3; j++)
        {
            soma = soma + vet[i].prova[j];
        }
        if (media <= soma/3)
        {
            media = soma/3;
            indice = i;
        } 
    }
    printf("O aluno com maior media esta no indice %d\n", indice);
}


/* 10 - Escreva uma função que receba uma string e retorne se ela é um palíndromo (1) ou não (0)*/

/* 11 - Escreva uma função que receba uma string e converta todos os seus caracteres em maíuscula.
Dica: subtraia 32 dos caracteres cujo código ASCII está entre 97 e 122*/

#include <stdio.h>

void conversor(char *string);

int main()
{
    char str[50];
    printf("Digite a string com caracteres minusculos: ");
    fgets(str, 50, stdin);
    conversor(str);
    printf("%s\n", str);
    return 0;
}

void conversor(char *string)
{
    int i;
    for (i = 0; string[i] != '\0'; i++)
    {
        if (string[i] >= 97 && string[i] <= 122)
        {
            string[i] = string[i] - 32;
        }
    }
}

/* 12 - Escreva uma função que receba como parametro um vetor contendo N valores inteiros. Essa
função deve retornar, por referencia, dois valores: a soma dos numeros pares e impares.*/

#include <stdio.h>

void somavetor(int vet[], int n, int *somapar, int *somaimpar);

int main()
{
    int x;
    printf("Digite a quantidade de numeros do vetor: ");
    scanf("%d", &x);
    int vet[x];
    for (i = 0; i < x; i++)
    {
        printf("Digite o valor %d do vetor: ", i);
        scanf("%d", &vet[i]);
    }
    int somapar, somaimpar;
    somavetor(vet, x, &somapar, &somaimpar);
    printf("Soma dos numeros pares do vetor: %d\n", somapar);
    printf("Soma dos numeros impares do vetor: %d\n", somaimpar);
    return 0;
}

void somavetor(int vet[], int n, int *somapar, int *somaimpar)
{
    int i;
    *somapar = 0;
    *somaimpar = 0;
    for (i = 0; i < n; i++)
    {
        if (vet[i] % 2 == 0)
        {
            *somapar = *somapar + vet[i];
        }
        else
        {
            *somaimpar = *somaimpar + vet[i];
        }
    }
}

/* 13 - Crie uma função que receba um vetor de tamanho N e ordene os seus valores.*/

#include <stdio.h>

void insertionsort(int vet[], int n);

int main()
{
    int n;
    printf("Digite a quantidade de valores no vetor: ");
    scanf("%d", &n);
    int vet[n], i;
    for (i = 0; i < n; i++)
    {
        printf("Digite o valor %d do vetor: ", i);
        scanf("%d", &vet[i]);
    }
    insertionsort(vet, n);
    for (i = 0; i < n; i++)
    {
        printf("%d ", vet[i]);
    }
    return 0;
}

void insertionsort(int vet[], int n)
{
    int i, j, chave;
    for (i = 1; i < n; i++)
    {
        chave = vet[i];
        j = i - 1;
        while (j >= 0 && vet[j] > chave)
        {
            vet[j+1] = vet[j];
            j = j - 1;
        }
        vet[j+1] = chave;
    }
}

/* 14 - Elabora uma função que receba por parametros os coeficientes de uma equação de segundo grau.
Em seguida, calcule e mostre as raízes dessa equação, lembrando que as raízes são calculadas como
x = -b +- raiz de delta / 2 * a
em que delta = b² - 4 * a * c
e ax² + bx + c = 0 representa um equação de segundo grau. A variável a tem que ser diferente de zero.
Caso seja igual, imprima a mensagem "Não é equação de segundo grau. Do contrario imprima:
Se delta < 0, não existe real. Imprima a mensagem "Não existe raiz"
Se delta = 0, existe raiz real. Imprima a raiz e a mensagem "Raiz única"
Se delta > 0, existem duas raízes reais. Imprime as raízes.*/

#include <stdio.h>
#include <math.h>

void equacao(float a, float b, float c);

int main()
{
    float a, b, c;
    printf("Considerando a equacao ax2 + bx + c = 0.\n");
    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);
    equacao(a, b, c);
    return 0;
}

void equacao(float a, float b, float c)
{
    float delta, x1, x2;
    delta = pow(b, 2) - 4 * a * c;
    x1 = (-b + sqrt(delta)) / (2 * a);
    x2 = (-b - sqrt(delta)) / (2 * a);
    if (a == 0)
    {
        printf("Nao e equacao de 2 grau.\n");
    }
    else if (delta < 0)
    {
        printf("Não existe raiz\n");
    }
    else if (delta == 0)
    {
        printf("Raiz unica\nRaiz: %.2f", x1);
    }
    if (delta > 0)
    {
        printf("Raiz 1: %.2f\nRaiz 2: %.2f", x1, x2);
    }
}

/* 15 - Elabore uma função que receba um vetor contendo N valores e retorne por referencia
o maior e o menor elemento desse vetor*/

#include <stdio.h>

int maiormenorvet (int *vetor, int n, int *maior, int *menor);

int main()
{
    int n;
    printf("Digite a quantidade de elementos do vetor: ");
    scanf("%d", &n);
    int vet[n], i;
    for (i = 0; i < n; i++)
    {
        printf("Digite o valor %d do vetor: ", i);
        scanf("%d", &vet[i]);
    }
    int maior, menor;
    maiormenorvet(vet, n, &maior, &menor);
    printf("Maior valor: %d\nMenor valor: %d", maior, menor);
    return 0;    
}

int maiormenorvet (int *vetor, int n, int *maior, int *menor)
{
    *maior = vetor[0];
    *menor = vetor[0];
    int i;
    for (i = 0; i < n; i++)
    {
        if (*maior < vetor[i])
        {
            *maior = vetor[i];
        }
        else if (*menor > vetor[i])
        {
            *menor = vetor[i];
        }
    }
}

/* 16 - Elabore uma função que receba um vetor contendo N valores e retorne por referencia
o maior elemento do vetor e o número de vezes que esse elemento ocorreu no vetor*/

#include <stdio.h>

void qtdmaiorvet(int *vet, int n, int *maior, int *qtd);

int main()
{
    int n;
    printf("Digite a quantidade de elementos no vetor: ");
    scanf("%d", &n);
    int vet[n], i;
    for (i = 0; i < n; i++)
    {
        printf("Digite o valor %d do vetor: ", i);
        scanf("%d", &vet[i]);
    }
    int maior, qtd;
    qtdmaiorvet(vet, n, &maior, &qtd);
    printf("Maior valor: %d\nVezes que o elemento ocorre: %d", maior, qtd);
    return 0;
}

void qtdmaiorvet(int *vet, int n, int *maior, int *qtd)
{
    int i;
    *qtd = 1;
    *maior = vet[0];
    for (i = 0; i < n; i++)
    {
        if (*maior < vet[i])
        {
            *maior = vet[i];
            *qtd = 1;
        }
        else if (*maior == vet[i])
        {
            (*qtd)++;
        }
    }
}

/* 9.4.3 - Recursão */

/* 01 - Escreva uma função recursiva que calcule a soma dos primeros n cubos
S = 1³ + 2³ + ... + n³*/

#include <stdio.h>

int cubo(int n);

int main()
{
    int n, soma;
    printf("Soma dos primeiros n cubos\n");
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    soma = cubo(n);
    printf("Soma dos primeiros %d cubos: %d", n, soma);
    return 0;
}

int cubo(int n)
{
    int soma = 0;
    if (n == 1)
    {
        return (n * n * n);
    }
    soma = (n * n * n); 
    return soma + cubo(n - 1);
}

/* 02 - Crie uma função recursiva que receba um numero inteiro N e retorne o somatorio dos numeros
de 1 a N*/

#include <stdio.h>

int soman(int n);

int main()
{
    int n, soma;
    printf("Soma dos primeiros n numeros\n");
    printf("Digite a quantidade de numeros: ");
    scanf("%d", &n);
    soma = soman(n);
    printf("Soma: %d", soma);
    return 0;
}

int soman(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n + soman(n - 1);
}

/* 03 - Crie uma função recursiva que receba um numero inteiro N e imprima todos os numeros
naturais de 0 até N em ordem crescente*/

#include <stdio.h>

void imprimec(int n);

int main()
{
    int n;
    printf("Digite o numero n: ");
    scanf("%d", &n);
    imprimec(n);
    return 0;
}

void imprimec(int n)
{
    if (n == 0)
    {
        printf("%d ", n);
        return;
    }
    imprimec(n - 1);
    printf("%d ", n);
}

/* 04 - Crie uma função recursiva que receba um numero inteiro N e imprima todos os numeros
naturais de 0 até N em ordem decrescente*/

#include <stdio.h>

void imprimed(int n);

int main()
{
    int n;
    printf("Digite o numero n: ");
    scanf("%d", &n);
    imprimed(n);
    return 0;
}

void imprimed(int n)
{
    if (n < 0)
    {
        return;
    }
    printf("%d ", n);
    imprimed(n - 1);
}


/* 05 - Crie uma funcao recursiva que retorne a soma dos elementos de um vetor de inteiros*/

#include <stdio.h>

int somavet(int *vet, int n);

int main()
{
    int n;
    printf("Digite a quantidade de elementos do vetor: ");
    scanf("%d", &n);
    int vet[n], soma;
    for (int i = 0; i < n; i++)
    {
        printf("Digite o valor %d do vetor: ", i);
        scanf("%d", &vet[i]);
    }
    soma = somavet(vet, n);
    printf("Soma dos elementos do vetor: %d\n", soma);
    return 0;
}

int somavet(int *vet, int n)
{
    
    if (n == 0)
    {
        return vet[0];
    }
    return vet[n] + somavet(vet, n - 1);
}


/* 06 - Crie uma função recursiva que retorne a média dos elementos de um vetor de inteiros*/

#include <stdio.h>

float vetmedia(float *vet, int n, int x);

int main()
{
    int n;
    printf("Digite a quantidade de elementos do vetor: ");
    scanf("%d", &n);
    float vet[n];
    for (int i = 0; i < n; i++)
    {
        printf("Digite o valor %d do vetor: ", i);
        scanf("%f", &vet[i]);
    }
    float media;
    media = vetmedia(&vet, n - 1, n);
    printf("Media do vetor: %.2f", media);
    return 0;
}

float vetmedia(float *vet, int n, int x)
{
    if (n == 0)
    {
        return (float) vet[n] / x;
    }
    float soma;
    soma = (float) vet[n] / x;
    return soma + vetmedia(vet, n - 1, x);
}


/* 07 - Escreva uma função recursiva que receba por parametro dois valores inteiros x e y e
calcule e retorne o resultado de x elevado a y para o programa principal*/

#include <stdio.h>

int exp(int a, int b);

int main()
{
    int x, y, resultado;
    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de y: ");
    scanf("%d", &y);
    resultado = exp(x, y);
    printf("a elevado a b: %d", resultado);
    return 0;
}

int exp(int a, int b)
{
    if (b == 1)
    {
        return a;
    }
    return a * exp(a, b - 1);
}

/* 08 - A multiplicacao de dois numeros inteiros pode ser feita através de somas sucessivas
(por exemplo, 2*3 = 2 + 2 + 2). Crie uma função recursiva que calcule a multiplicacao por
somas sucessivas de dois inteiros*/

#include <stdio.h>

int multi(int a, int b);

int main()
{
    int a, b, resultado;
    printf("Digite o valor de a: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    resultado = multi(a, b);
    printf("a x b: %d", resultado);
    return 0;
}

int multi(int a, int b)
{
    if b == 1
    {
        return a;
    }
    return a + multi(a, b - 1);
}

/* 09 - Escreva uma função recursiva que receba um numero inteiro positivo n. Calcule e retorne
o seu fatorial n!
n! = n * (n-1) * (n-2) * ... * 1  */

#include <stdio.h>

int fat (int n);

int main()
{
    int n, fatorial;
    printf("Digite o valor do numero fatorial: ");
    scanf("%d", &n);
    fatorial = fat(n);
    printf("Fatorial de %d: %d", n, fatorial);
    return 0;
}

int fat(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * fat(n - 1);
}

/* 10 - Escreva uma função recursiva que receba um numero inteiro, maior ou igual a zero, e
retorne o enesimo termo da sequencia de Fibonacci. Essa sequencia começa no termo de ordem zero
e, a partir do segundo termo, seu valor é dado pela soma dos dois termos anteriores. Alguns
termos dessa sequencia sao: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34.*/

/* 11 - Escreva um função recursiva que receba um valor inteiro e o retorne invertido.
Exemplo:
Número Lido: 123
Número retornado: 321*/

#include <stdio.h>

void inverter(int n);

int main()
{
    int n;
    printf("Digite o numero: ");
    scanf("%d", &n);
    inverter(n);
    return 0;
}

void inverter(int n)
{
    if (n == 0)
    {
        return;
    }
    printf("%d", n % 10);
    inverter(n / 10);
}

/* 12 - Escreva uma função recursiva que receba um valor inteiro em base decimal e o imprima
em base binaria.*/

/* 13 - Escreva uma função recursiva que calcule o valor da série S descrita a seguir para um
valor n maior do que zero a ser fornecido como parametro para ela:
S = 2 + 5/2 + 10/3 + ... + 1+n²/n */

#include <stdio.h>

float series(int n);

int main()
{
    int n;
    printf("Serie S: 2 + 5/2 + 10/3 + 17/4 + ... + 1+n*n/n");
    printf("Digite o enesimo termo da serie S: ");
    scanf("%d", &n);
    float resultado;
    resultado = series(n);
    printf("Serie S: %f", resultado);
    return 0;
}

float series(int n)
{
    if (n == 1)
    {
        return 2;
    }
    float soma;
    soma = (1.0 + n * n) / n;
    return soma + series(n - 1);
}

/* 14 - Crie uma função recursiva que retorne o menor elemento em um vetor*/

/* 15 - Em matemática, o numero harmonico designado por Hn define-se como o enesimo termo
da serie harmonica. Ou seja:
Hn = 1 + 1/2 + 1/3 + 1/4 + ... + 1/n
Escreva uma função recursiva que calcule o valor de qualquer Hn.*/

# include <stdio.h>

float harmonico (int n);

int main()
{
    int n;
    printf("Digite o enesimo termo da serie harmonica: ");
    scanf("%d", n);
    float serie;
    serie = harmonico(n);
    printf("Serie harmonica com %d termos: %.4f", n, serie);
    return 0;
}

float harmonico (int n)
{
    if (n == 1)
    {
        return 1;
    }
    float soma;
    soma = 1 / n;
    return soma + harmonico(n - 1);
}