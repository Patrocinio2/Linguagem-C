// Capítulo 06 - Vetores e Matrizes - Arrays

// Vetores

/* 01 - Faça um programa que leia do teclado seis valores inteiros e em seguida mostre na tela
os valores lidos.*/

#include <stdio.h>

int main()
{
        int num[6], controle;
        for (controle = 0; controle < 6; controle++)
        {
                printf("Digite um valor inteiro: ");
                scanf("%d", &num[controle]);
        }
        printf("Valores lidos: ");
        for (controle = 0; controle < 6; controle++)
        {
                printf("%d ", num[controle]);
        }
}

/* 02 - Faça um programa que leia do teclado seis valores inteiros e em seguida mostre na tela
os valores lidos na ordem inversa*/

#include <stdio.h>

int main()
{
        int num[6], pos;
        for (pos=0; pos<6; pos++)
        {
                printf("Digite um valor inteiro: ");
                scanf("%d", &num[pos]);
        }
        printf("Ordem inversa dos valores lidos: ");
        for (pos=5; pos>=0; pos--)
        {
                printf("%d ", num[pos]);
        }
        return 0;
}

/* 03 - Faça um programa que leia cinco valores e os armazene em um vetor. Em seguida, mostre todos
os valores lidos juntamente com a média dos valores*/

#include <stdio.h>

int main()
{
        int vetor[5], pos;
        float soma, media;
        soma = 0;
        for (pos=0; pos<5; pos++)
        {
                printf("Digite um valor: ");
                scanf("%d", &vetor[pos]);
        }
        printf("Valores lidos: ");
        for (pos=0; pos<5; pos++)
        {
                printf("%d ", vetor[pos]);
                soma=soma+vetor[pos];
        }
        media = soma/5;
        printf("A media dos valores lidos e %.2f\n", media);
        return 0;
}

/* 04 - Faça um programa que possua um array de nome A que armazene seis números inteiros.
O programa deve executar os seguintes passos:
a) Atribua os seguintes valores a esse array: 1, 0, 5, -2, -5, 7.
b) Armazene em uma variável a soma dos valores das posições A[0], A[1] e A[5] do array e mostre
na tela essa soma.
c) Modifique o array na posição 4, atribuindo a essa posição o valor 100.
d) Mostre na tela cada valor do array A, um em cada linha*/

#include <stdio.h>

int main()
{
        int vetor[] = {1, 0, 5, -2, -5, 7};
        int soma, pos;
        soma = vetor[0] + vetor[1] + vetor[5];
        printf("Soma das posicoes 0, 1 e 5: %d\n", soma);
        vetor[4] = 100;
        printf("Array A:\n");
        for (pos=0; pos<6; pos++)
        {
                printf("%d\n", vetor[pos]);
        }
        return 0;
}

/* 05 - Faça um programa que leia um vetor de oito posições. Em seguida, leia também dois valores
X e Y quaisquer correspondentes a duas posições no vetor. Seu programa deverá exibir a soma
dos valores encontrados nas respectivas posições de X e Y.*/

#include <stdio.h>

int main()
{
        int vetor[8];
        vetor[0]=1;
        vetor[8]=9;
        printf("A soma da posicao 0 e posicao 8 e: %d", vetor[0]+vetor[8]);
        return 0;
}

/* 06 - Escreva um programa que leia do teclado um vetor de 10 posições. Escreva na tela quantos
valores pares foram armazenados nesse vetor.*/

#include <stdio.h>

int main()
{
        int vetor[10], pos, contador;
        contador = 0;
        for(pos=0; pos<10; pos++)
        {
                printf("Digite o valor: ");
                scanf("%d", &vetor[pos]);
                if (vetor[pos]%2==0)
                {
                        contador++;
                }
        }
        printf("Foram armazenados %d valores pares no vetor\n", contador);
        return 0;
}


/* 07 - Faça um programa que receba do usuário um vetor X com 10 posições. Em seguida deverão
ser impressos o maior e o menor elemento desse vetor.*/

#include <stdio.h>

int main()
{
        int vetor[10], maior, menor, pos;
        printf("Digite o valor: ");
        scanf("%d", &vetor[0]);
        maior = vetor[0];
        menor = vetor[0];
        for(pos=1; pos<10; pos++)
        {
                printf("Digite o valor: ");
                scanf("%d", &vetor[pos]);
                if (vetor[pos]>maior)
                {
                        maior = vetor[pos];
                }
                else if (vetor[pos]<menor)
                {
                        menor = vetor[pos];
                }             
        }
        printf("O maior valor do vetor e: %d\n", maior);
        printf("O menor valor do vetor e: %d\n", menor);
        return 0;
}

/* 08 - Faça um programa que preencha um vetor com 10 números reais. Em seguida, calcule
e mostre na tela a quantidade de números negativos e a soma dos números positivos desse vetor.*/

#include <stdio.h>

int main()
{
        int vetor[10], pos, qtd, soma;
        qtd = 0;
        soma = 0;
        for(pos=0; pos<10; pos++)
        {
                printf("Digite um valor: ");
                scanf("%d", &vetor[pos]);
                if (vetor[pos]<0)
                {
                        qtd++;
                }
                else if (vetor[pos]>0)
                {
                        soma = soma + vetor[pos];
                }
        }
        printf("A quantidade de numeros negativos e: %d\n", qtd);
        printf("A soma dos numeros positivos e: %d\n", soma);
        return 0;
}

/* 09 - Faça um programa que receba do usuário dois arrays, A e B, com 10 números inteiros cada.
Crie um novo array C calculando C = A - B. Mostre na tela os dados do array C.*/

#include <stdio.h>

int main()
{
        int vetorA[10], vetorB[10], vetorC[10], pos;
        for (pos = 0; pos < 10; pos++)
        {
                printf("Digite o valor para o Vetor A: ");
                scanf("%d", &vetorA[pos]);             
        }
        for (pos = 0; pos < 10; pos++)
        {
                printf("Digite o valor para o Vetor B: ");
                scanf("%d", &vetorB[pos]);
        }
        for (pos = 0; pos < 10; pos++)
        {
                vetorC[pos] = vetorA[pos]-vetorB[pos];
        }
        printf("Vetor C: ");
        for(pos = 0; pos<10; pos++)
        {
                printf("%d ", vetorC[pos]);
        }
        return 0;
}

/* 10 - Faça um programa que preencha um vetor de tamanho 100 com os 100 primeiros números naturais
que não são múltiplos de 7. Ao final, imprima esse vetor na tela.*/

#include <stdio.h>

int main()
{
        int vetor[100], pos, controle;
        controle = 1;
        for(pos=0; pos<100; controle++)
        {
                if (controle%7!=0)
                {
                        vetor[pos] = controle;
                        pos++;
                }              
        }
        printf("Valor do Vetor: ");
        for(pos=0; pos<100; pos++)
        {
                printf("%d  ", vetor[pos]);
        }
        return 0;
}

/* 11 - Leia um conjunto de números reais, armazenando-o em vetor. Em seguida, calcule o quadrado
de cada elemento desse vetor, armazenando esse resultado em outro vetor. Os conjuntos têm, no
máximo, 20 elementos. Imprima os dois conjuntos de números.*/

#include <stdio.h>

int main ()
{
        int vetorA[20], vetorB[20], pos;
        for (pos = 0; pos < 20; pos++)
        {
                printf("Digite os valores do vetor A: ");
                scanf("%d", &vetorA[pos]);
        }
        for (pos = 0; pos < 20; pos++)
        {
                vetorB[pos] = vetorA[pos]*vetorA[pos];
        }
        printf("Vetor A: ");
        for (pos = 0; pos<20; pos++)
        {
                printf("%d ", vetorA[pos]);
        }
        printf("\nVetor B: ");
        for (pos = 0; pos<20; pos++)
        {
                printf("%d ", vetorB[pos]);
        }
        return 0;
}

/* 12 - Faça um programa que leia um vetor de 10 posições. Verifique se existem valores iguais
e os escreva em tela.*/

#include <stdio.h>

int main()
{
        int vetor, pos;
        for(pos=0; pos<10; pos++)
        {
                printf("Digite o valor do vetor: ");
                scanf("%d", &vetor[pos]);
        }
}

/* 13 - Faça um programa para ler 10 número diferentes a serem armazenados em um vetor. Os números
deverão ser armazenados no vetor na ordem em que forem lidos, sendo que, caso o usuário digite 
um número que já foi digitado, o programa deverá pedir a ele para digitar outro número. Note que
cada valor digitado pelo usuário deve ser pesquisado no vetor, verificando se ele existe entre
os números que já foram fornecidos. Exiba na tela o vetor final que foi digitado.*/

#include <stdio.h>

int main()
{
        int vet[10], i, j;
        for (i = 0; i < 10; i++)
        {
                printf("Digite o valor do vetor: ");
                scanf("%d", &vet[i]);
                for (j = 0; j < i; j++)
                {
                        if (vet[i] == vet[j])
                        {
                                printf("Digite outro valor diferente de %d\n", vet[i]);
                                i--;
                        }
                }
        }
        for (i = 0; i < 10; i++)
        {
                printf("%d ", vet[i]);
        }
        return 0;
}


/* 14 - Faça um programa que calcule o desvio-padrão d de um vetor V contendo n números em que m é
a média desse vetor. Considere n = 10. O vetor v deve ser lido do teclado.
d = raiz(1/n-1 sigma n=1 i=0 (V[i])-m)*/

#include <stdio.h>
#include <math.h>

int main()
{
        int n, i;
        printf("Digite a quantidade de numeros do vetor: ");
        scanf("%d", &n);
        float vet[n], media, dp, soma;
        soma = 0;
        for ( i = 0; i < n; i++)
        {
                printf("Digite o valor %d do vetor: ", i);
                scanf("%f", &vet[i]);
        }
        for ( i = 0; i < n; i++)
        {
                soma = soma + vet[i];
        }
        media = soma/n;
        soma = 0;
        for ( i = 0; i < n; i++)
        {
                soma = soma + pow(vet[i]-media, 2);
        }
        dp = sqrt(soma/n);
        printf("Vetor: ");
        for ( i = 0; i < n; i++)
        {
                printf("%.2f ", vet[i]);
        }
        printf("\n");
        printf("O desvio padrao e de %.2f\n", dp);
        return 0;     
}


/* 15 - Leia um vetor com 10 números de ponto flutante. Em seguida, ordene os elementos desse
vetor e imprima o vetor na tela*/

#include <stdio.h>

int main() 
{
    float vetor[10];
    int i, j;
    float temp;

    // Leitura dos valores do vetor
    printf("Digite 10 numeros de ponto flutuante:\n");
    for (i = 0; i < 10; i++) {
        scanf("%f", &vetor[i]);
    }

    // Ordenação do vetor usando o algoritmo Bubble Sort
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9 - i; j++) {
            if (vetor[j] > vetor[j + 1]) {
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }

    // Impressão do vetor ordenado
    printf("Vetor ordenado:\n");
    for (i = 0; i < 10; i++) {
        printf("%.2f ", vetor[i]);
    }
    printf("\n");

    return 0;
}

#include <stdio.h>

int main() {
    float vetor[10];
    int i, j;
    float chave;

    // Leitura dos valores do vetor
    printf("Digite 10 numeros de ponto flutuante:\n");
    for (i = 0; i < 10; i++) {
        scanf("%f", &vetor[i]);
    }

    // Ordenação do vetor usando o algoritmo de inserção
    for (i = 1; i < 10; i++) 
    {
        chave = vetor[i];
        j = i - 1;

        while (j >= 0 && vetor[j] > chave) {
            vetor[j + 1] = vetor[j];
            j = j - 1;
        }

        vetor[j + 1] = chave;
    }

    // Impressão do vetor ordenado
    printf("Vetor ordenado:\n");
    for (i = 0; i < 10; i++) {
        printf("%.2f ", vetor[i]);
    }
    printf("\n");

    return 0;
}


/*
Algoritmo de ordenação por inserção
DECLARE i, j, x, n, v[n] NUMERICO;
PARA i = 1 ATE i < n FACA
INICIO
x = v[i];
j = i - 1;
ENQUANTO j >= 0 e v[j] > x FACA
INICIO
v[j+1] = v[j];
j = j-1;
FIM
v[j+1] = x;
*/



// Matrizes

/* 01 - Faça um programa que leia uma matriz de tamanho 3x3. Imprima na tela o menor valor
contido nessa matriz.*/

#include <stdio.h>

int main()
{
        int mat[3][3], i, j, menor;
        for (i = 0; i < 3; i++)
        {
                for (j = 0; j < 3; j++)
                {
                        printf("Digite o valor da Matriz [%d][%d]: ", i, j);
                        scanf("%d", &mat[i][j]);
                }
        }
        menor = mat[0][0];
        for (i = 0; i < 3; i++)
        {
                for(j = 0; j < 3; j++)
                {
                        if (mat[i][j]<menor)
                        {
                                menor = mat[i][j];
                        }
                        
                }
        }
        printf("O menor valor da Matriz e: %d\n", menor);
        return 0;
}


 
/* 02 - Faça um programa que leia uma matriz de tamanho 4x4. Imprima na tela o maior valor
contido nessa matriz e a sua localização (linha e coluna)*/

#include <stdio.h>

int main()
{
        int mat[4][4], lin, col, maiorvalor, maiorlinha, maiorcoluna;
        for (lin = 0; lin < 4; lin++)
        {
                for (col = 0; col < 4; col++)
                {
                        printf("Digite o valor valor da Matriz [%d][%d]: ", lin, col);
                        scanf("%d", &mat[lin][col]);
                }
        }
        maiorvalor = mat[0][0];
        maiorlinha = 0;
        maiorcoluna = 0;
        for (lin = 0; lin < 4; lin++)
        {
                for(col = 0; col < 4; col++)
                {
                        if (mat[lin][col] > maiorvalor)
                        {
                                maiorvalor = mat[lin][col];
                                maiorlinha = lin;
                                maiorcoluna = col;
                        }
                        
                }
        }
        printf("O maior valor da Matriz e %d e esta na linha %d e coluna %d\n", maiorvalor, maiorlinha, maiorcoluna);
        return 0;
}

/* 03 - Faça um programa que declare uma matriz de tamanho 5x5. Preencha com 1 a diagonal
principal e com 0 os demais elementos. Ao final escreva a matriz obtida em tela.*/

# include <stdio.h>

int main()
{
        int mat[5][5], lin, col, soma = 0;
        for (lin = 0; lin < 5; lin++)
        {
                for (col = 0; col < 5; col++)
                {
                        if (lin==col)
                        {
                                mat[lin][col] = 1;                
                        }
                        else
                        {
                                mat[lin][col] = 0;
                        }
                }
        }
        for (lin = 0; lin < 5; lin++)
        {
                for (col = 0; col < 5; col++)
                {
                        printf("%d ", mat[lin][col]);
                }
                printf("\n");
        }
        return 0;        
}

/* 04 - Leia uma matriz 4x4. Em seguida, conte e escreva na tela quantos valores maiores
do que 10 ela possui*/

#include <stdio.h>

int main()
{
        int mat[4][4], lin, col, contador = 0;
        for (lin = 0; lin < 4; lin++)
        {
                for (col = 0; col < 4; col++)
                {
                        printf("Digite o valor da linha %d e coluna %d: ", lin, col);
                        scanf("%d", &mat[lin][col]);
                }
        }
        for (lin = 0; lin < 4; lin++)
        {
                for (col = 0; col < 4; col++)
                {
                        if (mat[lin][col]>10)
                        {
                                contador++;
                        }
                        
                }
        }
        printf("A matriz possui %d valores maior do que 10.\n", contador);
        return 0;
}

/* 05 - Leia uma matriz 4x4. Em seguida, conte e escreva na tela quantos valores negativos
ela possui.*/

#include <stdio.h>

int main()
{
        int mat[4][4], lin, col, contador = 0;
        for (lin = 0; lin < 4; lin++)
        {
                for (col = 0; col < 4; col++)
                {
                        printf("Digite o valor da linha %d e da coluna %d da matriz: ", lin, col);
                        scanf("%d", &mat[lin][col]);
                }
        }
        for (lin = 0; lin < 4; lin++)
        {
                for (col = 0; col < 4; col++)
                {
                        if (mat[lin][col]<0)
                        {
                                contador++;
                        }
                        
                }
        }
        printf("A matriz possui %d valores negativos.\n", contador);
        return 0;
}

/* 06 - Leia uma matriz 3x3. Em seguida, imprima a soma dos valores contidos em sua
diagonal principal.*/

# include <stdio.h>

int main()
{
        int mat[3][3], lin, col, soma = 0;
        for (lin = 0; lin < 3; lin++)
        {
                for (col = 0; col < 3; col++)
                {
                        printf("Digite o valor da linha %d e coluna %d: ", lin, col);
                        scanf("%d", &mat[lin][col]);
                }
        }
        for (lin = 0; lin < 3; lin++)
        {
                for (col = 0; col < 3; col++)
                {
                        printf("%d ", mat[lin][col]);
                }
                printf("\n");
        }
        for (lin = 0; lin < 3; lin++)
        {
                for (col = 0; col < 3; col ++)
                {
                        if (lin == col)
                        {
                                soma = soma + mat[lin][col];
                        }
                }
        }
        printf("A soma dos valores da diagonal secundaria e: %d", soma);
        return 0;        
}

/* 07 - Leia uma matriz 3x3. Em seguida, imprima a soma dos valores contidos em sua
diagonal secundária.*/

/* Soma da diagonal secundaria - linha + coluna = tamanho da matriz - 1
Apesar da expressão correta ser i + j = n + 1, sendo n o tamanho da matriz, devido a matriz
comecar por zero é necessário a adaptação da expresão para i + j = n - 1*/

#include <stdio.h>

int main()
{
        int mat[3][3], lin, col, soma = 0;
        for (lin = 0; lin < 3; lin++)
        {
                for (col = 0; col < 3; col++)
                {
                        printf("Digite o valor da linha %d e coluna %d: ", lin, col);
                        scanf("%d", &mat[lin][col]);
                }
        }
        for (lin = 0; lin < 3; lin++)
        {
                for (col = 0; col < 3; col ++)
                {
                        if (lin + col == 2)
                        {
                                soma = soma + mat[lin][col];
                        }
                }
        }
        printf("A soma dos valores da diagonal secundaria e: %d", soma);
        return 0;
}

/* 08 - Calcular e imprimir na tela de uma matriz de tamanho 10x10, em que seus elementos
são da forma:
        { 2i + 7j - 2 se i < j
A[i][j] { 3i² - 1 se i = j
        { 4i³ + 5j² + 1 se i > j
*/

#include <stdio.h>
#include <math.h>

int main()
{
        int mat[10][10], i, j;
        for ( i = 0; i < 10; i++)
        {
                for (j = 0; j < 10; j++)
                {
                        if (i<j)
                        {
                                mat[i][j] = 2*i+7*j-2;
                        }
                        else if (i==j)
                        {
                                mat[i][j] = 3*pow(i, 2)-1;
                        }
                        else
                        {
                                mat[i][j] = 4*pow(i, 3)+5*pow(j, 2)+1;
                        }
                }
                
        }
        for (i = 0; i < 10; i++)
        {
                for (j = 0; j < 10; j++)
                {
                        printf("%d ", mat[i][j]);
                }
                printf("\n");
        }
        return 0;        
}

/* 09 - Faça um programa que permita ao usuário entrar com uma matriz de tamanho 3x3 de
números inteiros. Em seguida, calcule um vetor contendo três posições, em que cada posição
deverá armazenar a soma dos números de cada coluna da matriz. Exiba na tela esse array.
Por exemplo, a matriz
05 -08 10
01  02 15
25  10 07
deverá gera o vetor
31 04 32*/

#include <stdio.h>

int main ()
{
        int mat[3][3], vet[3] = {0}, i, j;
        for (i = 0; i < 3; i++)
        {
                for (j = 0; j < 3; j++)
                {
                        printf("Digite o valor da linha %d e coluna %d: ", i, j);
                        scanf("%d", &mat[i][j]);
                }
        }
        for (j = 0; j < 3; j++)
        {
                for (i = 0; i < 3; i++)
                {
                        vet[j] = vet[j] + mat[i][j];
                }
                
        }
        for (i = 0; i < 3; i++)
        {
                printf("%d ", vet[i]);
        }
        printf("\n");
        return 0;      
}



/* 10 - Leia uma matriz de tamanho 10x3 com as notas de 10 alunos em três provas.
Em seguida, calcule e escreva na tela o número de alunos cuja pior nota foi na prova 1,
o número de alunos cuja pior nota foi na prova 2 e o número de alunos cuja pior nota
foi na prova 3.*/

#include <stdio.h>

int main()
{
        int mat[10][3], i, j, nota1 = 0, nota2 = 0, nota3 = 0;
        for (i = 0; i < 10; i++)
        {
                for (j = 0; j < 3; j++)
                {
                        printf("Digite a nota da prova %d do aluno %d: ", j, i);
                        scanf("%d", &mat[i][j]);
                }
        }
        for (i = 0; i < 10; i++)
        {
                if (mat[i][0]<=mat[i][1] && mat[i][0]<=mat[i][2])
                {
                        nota1++;
                }
        }
        for (i = 0; i < 10; i++)
        {
                if (mat[i][1]<=mat[i][0] && mat[i][1]<=mat[i][2])
                {
                        nota2++;
                }
        }
        for (i = 0; i < 10; i++)
        {
                if (mat[i][2]<=mat[i][0] && mat[i][2]<=mat[i][1])
                {
                        nota3++;
                }             
        }
        printf("%d alunos tiveram a pior nota na prova 1.\n", nota1);
        printf("%d alunos tiveram a pior nota na prova 2.\n", nota2);
        printf("%d alunos tiveram a pior nota na prova 3.\n", nota3);
        return 0;        
}


/* 11 - Faça um programa que leia uma matriz de tamanho 5x5. Calcule e imprima a soma
dos elementos dessa matriz que estão acima da diagonal principal.*/

#include <stdio.h>

int main()
{
        int mat[5][5], i, j, soma = 0;
        for ( i = 0; i < 5; i++)
        {
                for (j = 0; j < 5; j++)
                {
                        printf("Digite o valor da linha %d e da coluna %d: ", i, j);
                        scanf("%d", &mat[i][j]);
                }
        }
        for ( i = 0; i < 5; i++)
        {
                for (j = 0; j < 5; j++)
                {
                        if (i<j)
                        {
                                soma = soma + mat[i][j];
                        }        
                }
        }      
        printf("A soma dos elementos acima da diagonal principal e: %d", soma);
        return 0;
}

/* 12 - Faça um programa que leia uma matriz de tamanho 6x6. Calcule e imprima a soma
dos elementos dessa matriz que estão abaixo da diagonal principal.*/

#include <stdio.h>

int main()
{
        int mat[6][6], i, j, soma = 0;
        for ( i = 0; i < 6; i++)
        {
                for (j = 0; j < 6; j++)
                {
                        printf("Digite o valor da linha %d e da coluna %d: ", i, j);
                        scanf("%d", &mat[i][j]);
                }
        }
        for ( i = 0; i < 6; i++)
        {
                for (j = 0; j < 6; j++)
                {
                        if (i>j)
                        {
                                soma = soma + mat[i][j];
                        }        
                }
        }      
        printf("A soma dos elementos abaixo da diagonal principal e: %d", soma);
        return 0;
}

/* 13 - Faça um programa que leia uma matriz de tamanho 5x5. Calcule e imprima a soma
dos elementos dessa matriz que não pertencem à diagonal principal nem à diagonal secundária.*/

#include <stdio.h>

int main()
{
        int mat[5][5], i, j, somadiag = 0, soma = 0;
        for ( i = 0; i < 5; i++)
        {
                for (j = 0; j < 5; j++)
                {
                        printf("Digite o valor da linha %d e coluna %d: ", i, j);
                        scanf("%d", &mat[i][j]);
                }
        }
        for (i = 0; i < 5; i++)
        {
                for (j = 0; j < 5; j++)
                {
                        if (i==j || i+j == 5-1)
                        {
                                somadiag = somadiag + mat[i][j];
                        }
                }        
        }
        for (i = 0; i < 5; i++)
        {
                for (j = 0; j < 5; j++)
                {
                        soma = soma + mat[i][j];
                }        
        }
        printf("A soma dos valores que não pertencem a nenhuma diagonal e %d", soma-somadiag);
        return 0;
}

#include <stdio.h>

int main()
{
        int mat[5][5], i, j, somadiag = 0, somandiag = 0;
        for ( i = 0; i < 5; i++)
        {
                for (j = 0; j < 5; j++)
                {
                        printf("Digite o valor da linha %d e coluna %d: ", i, j);
                        scanf("%d", &mat[i][j]);
                }
        }
        for (i = 0; i < 5; i++)
        {
                for (j = 0; j < 5; j++)
                {
                        if (i==j || i+j == 5-1)
                        {
                                somadiag = somadiag + mat[i][j];
                        }
                        else
                        {
                                somandiag = somandiag + mat[i][j];
                        }
                }        
        }
        printf("A soma dos valores que não pertencem a nenhuma diagonal e %d", somandiag);
        return 0;
}

/* 14 - Faça um programa que leia uma matriz de tamanho 5x5. Calcule a soma dos elementos
dessa matriz que pertencem à diagonal principal ou secundária. Calcule também a soma dos elementos
que não pertencem a nenhuma das duas diagonais. Imprima na tela a diferença entre os dois valores.*/

#include <stdio.h>

int main()
{
        int mat[5][5], i, j, somadiag = 0, somandiag = 0;
        for ( i = 0; i < 5; i++)
        {
                for (j = 0; j < 5; j++)
                {
                        printf("Digite o valor da linha %d e coluna %d: ", i, j);
                        scanf("%d", &mat[i][j]);
                }
        }
        for (i = 0; i < 5; i++)
        {
                for (j = 0; j < 5; j++)
                {
                        if (i==j || i+j == 5-1)
                        {
                                somadiag = somadiag + mat[i][j];
                        }
                        else
                        {
                                somandiag = somandiag + mat[i][j];
                        }
                }        
        }
        printf("A diferenca entre os dois valores e %d", somadiag-somandiag);
        return 0;
}

/* 15 - Faça um programa que leia uma matriz A de tamanho 5x5. Em seguida, calcule e imprima a
matriz B, sendo B = A².*/

#include <stdio.h>

int main()
{
        int matA[5][5], matB[5][5], i, j;
        for (i = 0; i < 5; i++)
        {
                for (j = 0; j < 5; j++)
                {
                        printf("Digite o valor da linha %d e coluna %d da Matriz A: ", i, j);
                        scanf("%d", &matA[i][j]);
                }        
        }
        for(i = 0; i < 5; i++)
        {
                for(j = 0; j < 5; j++)
                {
                        matB[i][j] = matA[i][0] * matA[0][j] + matA[i][1] * matA[1][j] + matA[i][2] * matA[2][j] + matA[i][3] * matA[3][j] + matA[i][4] * matA[4][j];
                }
        }
        for (i = 0; i < 5; i++)
        {
                for (j = 0; j < 5; j++)
                {
                        printf("%d ", matB[i][j]);
                }
                printf("\n");
        }        
        return 0;        
}

/*          
                        OBSERVACAO:
    * Para criar o algoritmo para multiplicação de matrizes de ordem 5
    * eu primeiro criei um algoritmo de multiplicação para matrizes de
    * ordem 2. Daí é só aproveitar o algoritmo observando o padrão e 
    * aplicar na multiplicacao de uma matriz maior.
    * 
    int i, j, b[2][2] = {{1,2},{3,4}}, A[2][2];
    for(i = 0; i < 2; i++)
        for(j = 0; j < 2; j++)
            A[i][j] = b[i][0] * b[0][j] + b[i][1] * b[1][j];
*/