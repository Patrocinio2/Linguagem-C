// Capítulo 07 - Arrays de Caracteres - Strings

// 01 - Faça um programa que leia uma string e a imprima na tela.

#include <stdio.h>
#include <stdlib.h>

 
int main()
{
    char str1[100];
    printf("Digite o nome: ");
    fgets (str1, 100, stdin);
    printf("O nome digitado foi %s.", str1);
    return 0;
}

// 02 - Faça um programa que leia uma string e imprima as quatro primeiras letras dela.

#include <stdio.h>

int main()
{
    char str[20];
    int i;
    printf("Digite qq palavra: ");
    gets(str);
    for (i = 0; i < 4; i++)
    {
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}

/* 03 - Sem usar a função strlen(), faça um programa que leia uma string e imprima 
quantos caracteres ela possui.*/

#include <stdio.h>

int main()
{
    char str[50];
    int cont, i;
    cont = 0;
    printf("Digite um palavra: ");
    fgets(str, 50, stdin);
    for ( i = 0; str[i] != '\0'; i++)
    {
        if (i!='\0')
        {
            cont++;
        }
    }
    printf("A string possui %d caracteres.\n", cont);
    return 0;
}


// 04 - Faça um programa que leia uma string e a imprima de trás para a frente.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[50];
    int i, tamanho;
    tamanho = 0;
    printf("Digite qq palavra: ");
    fgets(str, 50, stdin);
    while (str[tamanho] != '\0')
    {
        tamanho++;
    }
    
    for (i = tamanho-1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}

/* 05 - Faça um programa que leia uma string e a inverta. A string invertida deve ser
armazenada na mesma variável. Em seguida, imprima a string invertida.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[50];
    int i, tamanho;
    tamanho = 0;
    printf("Digite qq palavra: ");
    fgets(str, 50, stdin);
    while (str[tamanho] != '\0')
    {
        tamanho++;
    }
    
    for (i = tamanho-1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
    printf("\n");
    return 0;
}

/* 06 - Leia uma string do teclado e conte quantos vogais ela possui. Entre com um caractere
(vogal ou consoante) e substitua todas as vogais da palavra dada por esse caractere.
Ao final, imprima a nova string e o número de vogais que ela possui.*/

#include <stdio.h>

int main()
{
    char str[100];
    char sub;
    printf("Digite uma palavra ou frase: ");
    fgets(str, 100, stdin);
    printf("\nDigite um caractere para substituir todas as vogais: ");
    scanf("%c", &sub);
    int cont = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' ||
        str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' )
        {
            str[i] = sub;
            cont++;
        }
    }
    printf("%s\n", str);
    printf("O texto digitado possui %d vogais.\n", cont);
    return 0;
}


/* 07 - Faça um programa que leia uma string e imprima uma mensagem dizendo se ela é um
palíndromo ou não. Um palíndromo é uma palavra que tem a propriedade de poder ser lida
tanto da direita para a esquerda como da esquerda para a direita.
Exemplos: ovo, arara, rever, asa, osso.*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[30];
    printf("Digite a palavra: ");
    gets(str);
    int t = 0;
    while (str[t] != '\0')
    {
        t++;
    }
    int i, j;
    for (i = 0, j = t - 1; i <= j; i++, j--)
    {
        if (str[i] != str[j])
        {
            printf("%s nao e um palindromo.\n", str);
            return 0;
        }
    }
    printf("%s e um palindromo.\n", str);
    return 0;   
}

/* 08 - Construa um programa que leia duas strings do teclado. Imprima uma mensagem
informando se a segunda string lida está contida dentro da primeira.*/

#include <stdio.h>
#include <string.h>

int main()
{

}

/* 09 - Construa um programa que leia duas strings do teclado. Imprima uma mensagem
informando quantas vezes a segunda string lida está contida dentro da primeira.*/

/* 10 - Escreva um programa que leia uma string do teclado e converta todos os seus
caracteres em maiúscula. Dica: subtraia 32 dos caracteres cujo código ASCII está entre
97 e 122.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char str[100];
    printf("Digite com caracteres minusculos: ");
    fgets(str, 100, stdin);
    int i = 0;
    for ( i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 97 && str[i] <= 122)
        {
            str[i] = str[i] - 32;
        }
    }
    printf("%s\n", str);
}

/* 11 - Escreva um programa que leia uma string do teclado e converta todos os seus
caracteres em minúscula. Dica: some 32 dos caracteres cujo código ASCII está entre
65 e 90.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    printf("Digite com caracteres maiusculos: ");
    gets(str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 65 && str[i <= 90])
        {
            str[i] = str[i] + 32;
        }
    }
    printf("%s\n", str);
    return 0;
}

/* 12 - Escreva um programa que leia o nome e o valor de determinada mercadoria de uma loja.
Sabendo que o desconto para pagamento à vista é de 10% sobre o valor total. Calcule o valor
a ser pago à vista. Escreva o nome da mercadoria, o valor total, o valor do desconto e o
valor a ser pago à vista.*/

#include <stdio.h>

int main()
{
    char merc[50];
    float valor;
    printf("Produto: ");
    fgets(merc, 50, stdin);
    printf("Valor: ");
    scanf("%f", &valor);
    float desconto, valorpago;
    desconto = valor * 0.1;
    valorpago = valor * 0.9;
    printf("\nMercadoria: %sValor Total: %.2f\nDesconto: %.2f\nValor a ser pago: %.2f\n", \
    merc, valor, desconto, valorpago);
    return 0;
}

/* 13 - Escreva um programa que recebe uma string S e dois valores inteiros não negativos
i e j. Em seguida, imprima os caracteres contidos no segmento que vai de i a j na string S.*/

#include <stdio.h>

int main()
{
    char str[500];
    printf("Digite a frase: ");
    fgets(str, 500, stdin);
    int i, j;
    printf("Digite o primeiro valor: ");
    scanf("%d", &i);
    printf("Digite o segundo valor: ");
    scanf("%d", &j);
    for (i; i <= j; i++)
    {
        printf("%c", str[i]);
    }
    return 0;
}

/* 14 - O código de César é umas das técnicas de criptografia mais simples e conhecidas. É um
tipo de substituição no qual cada letra do texto é substituída por outra, que se apresenta n
posições após ela no alfabeto. Por exemplo, com um troca de três posições, a letra A seria
substituída pela letra D, B se tornaria E e assim por diante. Escreva um programa que faça
uso desse código de César para três posições. Entre com uma string e imprima a string codificada.
Exemplo: String: a ligeira raposa marrom saltou sobre o cachorro cansado. Nova string:
d oljhlud udsrvd pduurp vdowrx vreuh r fdfkruur fdqvdgr*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char str[100];
    int i;
    printf("Escreva o texto: ");
    gets (str);
    printf("%s\n", str);
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ')
        {
            str[i] = str[i] + 3;
        }
    }
    printf("%s\n", str);
}

/* 15 - Escreva um programa que leia duas strings e as imprima em ordem alfabética, a ordem
em que elas apareceriam em um dicionário.*/

#include <stdio.h>
#include <string.h>

int main() {
    char str1[30], str2[30];
    printf("Digite a primeira palavra: ");
    gets(str1);
    printf("Digite a segunda palavra: ");
    gets(str2);

    if (strcmp(str1, str2) < 0) 
    {
        printf("%s\n%s\n", str1, str2);
    }
    else if (strcmp(str1, str2) > 0) 
    {
        printf("%s\n%s\n", str2, str1);
    }
    else 
    {
        printf("%s\n%s\n", str1, str2);
    }

    return 0;   
}
