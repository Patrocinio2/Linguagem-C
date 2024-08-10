/* Capítulo 04 - Comandos de Controle Condicional*/

// 1 - Faça um programa que leia dois números e mostre qual deles é o maior.

#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num1);
    printf("Digite outro numero inteiro diferente :");
    scanf("%d", &num2);
    if (num1 > num2)
        printf("O %d e maior do que %d.\n", num1, num2);
    else
        printf("O %d e maior do que %d.\n", num2, num1);
    system("pause");
    return 0;
}

/* 2 - Faça um programa que leia dois números e mostre o maior deles. Se por acaso forem iguais,
imprima a mensagem "Números Iguais".*/

#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    if (num1 == num2)
        printf("Os numeros sao iguais.\n");
        else
        {
            if (num1 > num2)
            printf("O %d e maior do que %d.\n", num1, num2);
            else
            printf("O %d e maior do que %d.\n", num2, num1);
        }
    system("pause");
    return 0;
}

// 3 - Faça um programa que leia um número inteiro e verifique se esse número é par ou ímpar.

#include <stdio.h>

int main()
{
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    if (num%2 == 0)
    printf("O numero %d e par.\n", num);
    else
    printf("O numero %d e impar.\n", num);
    system("pause");
    return 0;
}

/* 4 - Faça um programa que leia o salário de um trabalhador e o valor da prestação de um empréstimo.
Se a prestação:
- For maior que 20% do salário, imprima: "Empréstimo não concedido"
- Caso contrário, imprima: "Empréstimo concedido"*/

#include <stdio.h>

int main ()
{
    float emp, sal;
    printf("Digite o valor da prestacao do emprestimo solicitado: ");
    scanf("%f", &emp);
    printf("Digite o valor do seu salario: ");
    scanf("%f", &sal);
    if (emp > sal/5)
    printf("Emprestimo nao concedido.\n");
    else
    printf("Emprestimo concedido."\n);
    system("pause");
    return 0;
}

/* 5 - Faça um programa que leia um número e , caso ele seja positivo, calcule e mostre:
- O número digitado ao quadrado
- A raiz quadrada do número inteiro.*/

#include <stdio.h>
#include <math.h>

int main()
{
    float x;
    printf("Digite um numero: ");
    scanf("%f", &x);
    if (x > 0)
    {
    printf("%.2f ao quadrado: %.2f \n", x, x*x);
    printf("A raiz quadrade de %.2f: %.2f \n", x, sqrt(x));
    }
    else
    printf("O numero nao e positivo.\n");
    system("pause");
    return 0;
}

/* 6 - Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre seu peso ideal,
utilizando as seguintes fórmulas (em que h corresponde à altura)
- Homens: (72,7 * h) - 58
- Mulheres: (62,1 * h) - 44,7*/

#include <stdio.h>

int main()
{
    float h;
    char sexo;
    printf("Digite sua altura: ");
    scanf("%f", &h);
    printf("Digite h para homem ou m para mulher: ");
    scanf(" %c", &sexo);
    if (sexo=='h')
    printf("Seu peso ideal e %.2f\n", (72.8*h)-58);
    else
    printf("Seu peso ideal e %.2f\n", (62.1*h)-44.7);
    system("pause");
    return 0;
}

/* 7 - Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado possui uma taxa
diferente de imposto sobre o produto. Faça um programa em que o usuário entre com o valor e o estado
de destino de produto e o programa retorne o preço final do produto acrescido do imposto do estado
em que ele será vendido. Se o estado não for válido, mostrará uma mensagem de erro.
- MG - 7%
- SP - 12%
- RJ - 15%
- MS - 8%*/

#include<stdio.h>

int main ()
{
    float valor;
    int estado;
    printf("Digite o valor do produto: ");
    scanf("%f", &valor);
    printf("Digite 1 para MG, 2 para SP, 3 para RJ e 4 para MS: ");
    scanf(" %d", &estado);
    if (estado == 1)
    printf("O preco final do produto e de: %.2f\n", valor*1.07);
    else if (estado == 2)
    printf("O preco final do produto e de: %.2f\n", valor*1.12);
    else if (estado == 3)
    printf("O preco final do produto e de: %.2f\n", valor*1.15);
    else if (estado == 4)
    printf("O preco final do produto e de: %.2f\n", valor*1.08);
    else
    printf("O estado nao e valido.\n");
    getchar();
    return 0;
}


/* 8 - Escreva um programa que, dada a idade de um nadador, classifique-o em umas das
seguintes categorias:
Infantil A - 5-7
Infantil B - 8-10
Juvenil A - 11-13
Juvenil B - 14-17
Sênior - maiores de 18 anos*/

#include<stdio.h>

int main()
{
    int idade;
    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);
    if (idade>=5 && idade<=7)
    printf("Categoria Infantil A\n");
    else if(idade>=8 && idade<=10)
    printf("Categoria Infantil B\n");
    else if(idade>=11 && idade<=13)
    printf("Categoria Juvenil A\n");
    else if(idade>=14 && idade<=17)
    printf("Categoria Juvenil B\n");
    else if(idade>=18)
    printf("Categoria Senior\n");
    else
    printf("A idade minima e de 5 anos.\n");    
    system("pause");
    return 0;
}

/* 9 - Faça um programa que leia a altura e o peso de uma pessoa. De acordo com a tabela a seguir,
verifique e mostre qual a classificação da pessoa.
Altura                                      Peso
                     Até 60         Entre 60 e 90(inclusive)         Acima de 90
Menor que 1,20          A                     D                           G
1,20-1,70               B                     E                           H
Maior que 1,70          C                     F                           I*/

#include<stdio.h>

int main()
{
    float altura, peso;
    printf("Digite o sua altura e seu peso: ");
    scanf("%f%f", &altura, &peso);
    if (altura<1.2 && peso<=60)
    printf("A sua classificacao e A\n");
    else if (altura<1.2 && (peso>60 && peso<=90))
    printf("A sua classificacao e D\n");
    else if (altura<1.2 && peso>90)
    printf("A sua classificacao e G\n");
    else if ((altura>=1.2 && altura<=1.7) && peso<=60)
    printf("A sua classificacao e B\n");
    else if ((altura>=1.2 && altura<=1.7) && (peso<60 && peso>=90))
    printf("A sua classificacao e E\n");
    else if ((altura>=1.2 && altura<=1.7) && peso>90)
    printf("A sua classificacao e H\n");
    else if (altura>1.7 && peso<=60)
    printf("A sua classificacao e C\n");
    else if (altura>1.7 && (peso<60 && peso>=90))
    printf("A sua classificacao e F\n");
    else
    printf("A sua classificacao e I\n");
    system("pause");
    return 0;
}

/* 10 - Faça um programa que leia três números inteiros positivos e efetue o cálculo de uma das 
seguintes médias de acordo com um valor número digitado pelo usuário e mostrado na tabela a seguir:
1 - Geométrica = x*y*z
2 - Ponderada = (x + 2 * y + 3 * z) / 6
3 - Harmônica = 1 / (1/x + 1/y + 1/z)
4 - Aritmética = (x + y + z) / 3 */

#include <stdio.h>

int main()
{
    int x, y, z, escolha;
    float media;

    printf("Digite tres numeros inteiros positivos: ");
    scanf("%d%d%d", &x, &y, &z);

    printf("Escolha o tipo de media a ser calculado:\n");
    printf("1 - Geometrica\n");
    printf("2 - Ponderada\n");
    printf("3 - Harmonica\n");
    printf("4 - Aritmetica\n");
    scanf("%d", &escolha);

    switch (escolha)
    {
        case 1:
            media = x * y * z;
            printf("A media geometrica e %.2f\n", media);
            break;

        case 2:
            media = (x + 2 * y + 3 * z) / 6.0;
            printf("A media ponderada e %.2f\n", media);
            break;

        case 3:
            media = 1 / (1.0 / x + 1.0 / y + 1.0 / z);
            printf("A media harmonica e %.2f\n", media);
            break;

        case 4:
            media = (x + y + z) / 3.0;
            printf("A media aritmetica e %.2f\n", media);
            break;

        default:
            printf("Opcao invalida\n");
            break;
    }
    system("pause");
    return 0;
}

/* 11 - Faça um programa que informe o mês de acordo com o número digitado pelo usuário
Exemplo: Entrada = 4. Saída = Abril*/

#include<stdio.h>

int main()
{
    int mes;
    printf("Digite o numero do mes correspondente: ");
    scanf("%d", &mes);
    switch (mes)
    {
    case 1: printf("Janeiro\n");
    break;
    case 2: printf("Fevereiro\n");
    break;
    case 3: printf("Marco\n");
    break;
    case 4: printf("Abril\n");
    break;
    case 5: printf("Maio\n");
    break;
    case 6: printf("Junho\n");
    break;
    case 7: printf("Julho\n");
    break;
    case 8: printf("Agosto\n");
    break;
    case 9: printf("Setembro\n");
    break;
    case 10: printf("Outubro\n");
    break;
    case 11: printf("Novembro\n");
    break;
    case 12: printf("Dezembro\n");
    break;
    default:
    printf("Digite um valor entre 1 e 12\n");
        break;
    }
    system("pause");
    return 0;
}

/* 12 - Usando um comando switch, escreva um programa que leia um inteiro entre 1 e 7 e
imprima o dia da semana correspondente a esse número. Isto é, domingo, se 1, segunda-feira, se 2
e assim por diante.*/

#include<stdio.h>

int main()
{
    int dia;
    printf("Escreva um numero inteiro de 1 a 7, sendo que 1 e o numero que corresponde ao domingo: ");
    scanf("%d", &dia);
    switch(dia)
    {
        case 1: printf("Domingo\n");
        break;
        case 2: printf("Segunda\n");
        break;
        case 3: printf("Terca\n");
        break;
        case 4: printf("Quarta\n");
        break;
        case 5: printf("Quinta\n");
        break;
        case 6: printf("Sexta\n");
        break;
        case 7: printf("Sabado\n");
        break;
        default: printf("O numero digitado deve ser entre 1 e 7.\n");
        break;
    }
    system("pause");
    return 0;
}

/* 13 - Faça um programa que mostre ao usuário um menu com quatro opções de operações matématicas
(as operações básicas, por exemplo). O usuário escolhe uma das opções, e o seu programa pede
dois valores números e realiza a operação, mostrando o resultado.*/

#include<stdio.h>

int main()
{
    int op;
    float x, y;
    printf("1 - Adicao\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("Digite o numero correspondente a operacao que deseja realizar: ");
    scanf("%d", &op);
    printf("Digite dois valores a serem utilizados na operacao: ");
    scanf("%f%f", &x, &y);
    switch (op)
    {
        case 1: printf("%.2f + %.2f = %.2f\n", x, y, x+y);
        break;
        case 2: printf("%.2f - %.2f = %.2f\n", x, y, x-y);
        break;
        case 3: printf("%.2f * %.2f = %.2f\n", x, y, x*y);
        break;
        case 4: printf("%.2f / %.2f = %.2f\n", x, y, x/y);
        break;
        default: printf("Necessario digitar entre 1 e 4 para escolher a operacao a ser realizada.\n");
        break;
    }
    system("pause");
    return 0;
}

/* 14 - Faça um programa para verificar se determinado número inteiro lido é divisível por 3
ou 5, mas não simultaneamente pelos dois.*/

#include<stdio.h>

int main()
{
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    if (num%3 == 0 && num%5 == 0)
    printf("%d e divisivel por 3 e 5 simultaneamente\n", num);
    else if (num%3 == 0)
    printf("%d e divisivel por 3 e nao e divisivel por 5\n", num);
    else if (num%5 == 0)
    printf("%d e divisivel por 5 e nao e divisivel por 3\n", num);
    else
    printf("%d nao e divisivel por 3 e 5 simultaneamente\n", num);
    system("pause");
    return 0;
}

/* 15 - Faça um programa que leia os coeficientes de uma equação de segundo grau. Em seguida, calcule
e mostre as raízes dessa equação, lembrando que as raíxes são calculadas como
x = -b +- raiz de delta / 2 * a
em que delta = b² - 4 * a * c
e ax² + bx + c = 0 representa um equação de segundo grau. A variável a tem que ser diferente de zero.
Caso seja igual, imprima a mensagem "Não é equação de segundo grau. Do contrario imprima:
Se delta < 0, não existe real. Imprima a mensagem "Não existe raiz"
Se delta = 0, existe raiz real. Imprima a raiz e a mensagem "Raiz única"
Se delta > 0, existem duas raízes reais. Imprime as raízes.*/

#include<stdio.h>
#include<math.h>

int main()
{
    float a, b, c, x1, x2, delta;
    printf("ax2 + bx + c = 0 e a representacao da equacao de segundo grau.\n");
    printf("Digite os valores de a, b e c para a resolucao da equacao: ");
    scanf("%f%f%f", &a, &b, &c);
    delta = b*b - 4*a*c;
    x1 = (-b + sqrt(delta))/(2*a);
    x2 = (-b - sqrt(delta))/(2*a);
    if (a == 0)
    printf("Nao e equacao de segundo grau\n");
    else if (delta<0)
    printf("Nao existe raiz\n");
    else if (delta == 0){
    printf("Raiz unica.\n");
    printf("Raiz = %.2f\n", x1);}
    else
    printf ("As raizes da equacao sao %.2f e %.2f\n", x1, x2);
    system("pause");
    return 0;
}