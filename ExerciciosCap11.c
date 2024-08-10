// Capítulo 11 - Alocação Dinâmica

/* 01 - Escreva um programa que mostre o tamanho em byte que cada tipo de dados ocupa na 
memória: char, int, float, double*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Tamanho em bytes dos tipos de dados\n\n");
    printf("Char: %d\n", sizeof(char));
    printf("Int: %d\n", sizeof(int));
    printf("Float: %d\n", sizeof(float));
    printf("Double: %d\n", sizeof(double));
    return 0;
}

/* 02 - Crie uma estrutura representado um aluno de uma disciplina. Essa estrutura deve conter
o número de matrícula do aluno, seu nome e as notas de três provas. Escreva um programa
que mostre o tamanho em byte dessa estrutura.*/

#include <stdio.h>
#include <stdlib.h>

struct disciplina
{
    char aluno[50];
    int matricula;
    float nota[3];
};

int main()
{
    printf("Tamanho em bytes da struct disciplina: %d\n", sizeof(struct disciplina));
    return 0;
}

/* 03 - Crie uma estrutura chamada Cadastro. Essa estrutura deve conter o nome, a idade e o
endereço de uma pessoa. Agora, escreva uma função que receba um inteiro positivo N e retorne
o ponteiro para um vetor de tamanho N, alocado dinamicamente, dessa estrutura. Solicite também
que o usuário digite os dados desse vetor dentro da função*/

#include <stdio.h>
#include <stdlib.h>

struct cadastro
{
    char nome[100];
    int idade;
    char endereco[200];
};

struct cadastro* criarcadastro(int n);

int main ()
{
    int n;
    printf("Digite a quantidade de cadastros: ");
    scanf("%d", &n);
}

struct cadastro* criarcadastro(int n)
{
    struct cadastro* cadastro = (struct cadastro*)malloc(n * sizeof(struct cadastro));
    if (cadastro == NULL)
    {
        printf("Erro na alocação de memoria\n");
        return NULL;
    }
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Digite o nome: ")
    }
    
    
}

    // Solicitando os dados do usuário para preencher o vetor
    for (int i = 0; i < N; i++) 
    {
        printf("Digite o nome da pessoa %d: ", i + 1);
        scanf("%c", cadastros[i].nome);

        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &cadastros[i].idade);

        printf("Digite o endereco da pessoa %d: ", i + 1);
        scanf("%c", cadastros[i].endereco);
    }

    return cadastros;
}

int main() 
{
    int N;
    printf("Digite a quantidade de cadastros desejados: ");
    scanf("%d", &N);

    // Chamando a função para criar o vetor de Cadastros
    struct Cadastro* vetorCadastro = criarCadastro(N);

    // Imprimindo os dados cadastrados
    printf("\nDados cadastrados:\n");
    for (int i = 0; i < N; i++) {
        printf("Cadastro %d:\n", i + 1);
        printf("Nome: %s\n", vetorCadastro[i].nome);
        printf("Idade: %d\n", vetorCadastro[i].idade);
        printf("Endereco: %s\n", vetorCadastro[i].endereco);
        printf("---------------------\n");
    }

    // Liberando a memória alocada
    free(vetorCadastro);

    return 0;
}


/* 04 - Elabora um programa que leia do usuário o tamanho de um vetor a ser lido. Em seguida,
faça a alocação dinâmica desse vetor. Por fim, leia o vetor do usuário e o imprima.*/

#include <stdio.h>

int main()
{
    int *vet;
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    vet = (int *) malloc(n*sizeof(int));
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Digite o valor %d do vetor: ", i);
        scanf("%d", &vet[i]);
    }
    printf("Vetor: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", vet[i]);
    }
    return 0;
}

/* 05 - Faça um programa que leia um valor inteiro N não negativo. Se o valor de N for inválido,
 o usuário deverá digita outro até que ele seja válido(ou seja, positivo). Em seguida, leia um
 vetor V contendo N posições de inteiros, em que cada valor deverá ser maior ou igual a 2.
 Esse vetor deverá ser alocado dinamicamente.*/

 #include <stdio.h>

 int main()
 {
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    printf("O vetor devera ser composto apenas de valor nao negativos.\n");
    int i;
    int vet[n];
    for (i = 0; i < n; i++)
    {
        printf("Digite o valor %d do vetor: ", i);
        scanf("%d", &vet[i]);
        while (vet[i] < 0)
        {
            printf("Valor invalido\n");
            printf("Digite novamente: ");
            scanf("%d", &vet[i]);
        }
    }
    int cont;
    cont = 0;
    for (i = 0; i < n; i++)
    {
        if (vet[i] >= 2)
        {
            cont++;
        }
    }
    int *vetv;
    vetv = (int *) malloc(cont * sizeof(int));
    int j;
    j = 0;
    for (i = 0; i < n; i++)
    {
        if (vet[i] >= 2)
        {
            vetv[j] = vet[i];
        }
    }
    printf("Vetor V:");
    for (j = 0; j < cont; j++)
    {
        printf(" %d", vetv[j]);
    }
    return 0;
}


/* 06 - Escreva um programa que aloque dinamicamente uma matriz de inteiros. As dimensões da matriz
deverão ser lidas do usuário. Em seguida, escreva uma função que receba um valor e retorne 1,
caso o valor esteja na matriz, ou retorne 0, no caso contrário.*/

#include <stdio.h>
#include <stdlib.h>

int valormatriz(int **mat, int a, int b, int valor);

int main()
{
    int a, b;
    printf("Digite a quantidade linhas: ");
    scanf("%d", &a);
    printf("Digite a quantidade de colunas: ");
    scanf("%d", &b);
    int **mat = (int **) malloc(a * sizeof(int *));
    int i, j;
    for (i = 0; i < a; i++)
    {
        mat[i] = (int *) malloc(b * sizeof(int *));
    }
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            printf("Digite o valor da linha %d coluna %d: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    int valor;
    printf("Digite o valor: ");
    scanf("%d", &valor);
    int resultado;
    resultado = valormatriz(mat, a, b, valor);
    if (resultado == 1)
    {
        printf("O valor esta na matriz.\n");
    }
    else
    {
        printf("O valor nao esta na matriz.\n");
    }
    return 0;
}

int valormatriz(int **mat, int a, int b, int valor)
{
    int i, j;
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            if (mat[i][j] == valor)
            {
                return 1;
            }   
        }
    }
    return 0;
} 


/* 07 - Faça uma função que retorne o ponteiro para um vetor de N elementos inteiros alocados 
dinamicamente. O array deve ser preenchido com valores de 0 a N - 1*/

#include <stdio.h>
#include <stdlib.h>

int* criarvetor(int x);

int main()
{
    int x;
    printf("Digite a quantidade de elementos no vetor: ");
    scanf("%d", &x);
    int *vet;
    vet = criarvetor(x);
    printf("Vetor:");
    for (int i = 0; i < x; i++)
    {
        printf(" %d", vet[i]);
    }
    return 0;
}

int* criarvetor(int x)
{
    int *vet = (int *) malloc(x * sizeof(int *));
    int i;
    for (i = 0; i < x; i++)
    {
        vet[i] = i;
    }
    return vet; 
}

/* 08 - Escreva uma função que receba um valor inteiro positivo N por parâmetro e retorne o 
ponteiro para um vetor de tamanho N alocado dinamicamente. Se N for negativo ou igual a zero,
um ponteiro nulo deverá ser retornado*/

#include <stdio.h>
#include <stdlib.h>

int* criarvetor(int x);

int main()
{
    int x;
    printf("Digite a quantidade de elementos no vetor: ");
    scanf("%d", &x);
    int *vet;
    vet = criarvetor(x);
    printf("Vetor:");
    for (int i = 0; i < x; i++)
    {
        printf(" %d", vet[i]);
    }
    return 0;
}

int* criarvetor(int x)
{
    int *vet = (int *) malloc(x * sizeof(int *));
    if (vet == NULL)
    {
        printf("Erro na alocação de memoria\n");
        exit(1);
    }
    int i;
    for (i = 0; i < x; i++)
    {
        vet[i] = i;
    }
    return vet; 
}

/* 09 - Crie uma função que receba uma string e retorne o ponteiro para essa string invertida*/

void inverterstring(char x);

int main()
{
    char palavra[50];
    fgets(palavra, 50, stdin);
    int *ponteiro;
    ponteiro = 


}

int inverterstring(char x)
{
    int cont = 0;
    for (int i = 0; i < palavra[i] != '/0'; i++)
    {
        cont++;
    }

    for (i = cont; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
    printf("\n");
}



/* 10 - Escreva uma função que receba um valor inteiro positivo N por parâmetro e retorne o 
ponteiro para um vetor de tamanho N alocado dinamicamente. Esse vetor deverá ter os seus elementos 
preenchidos com certo valor, também passado por parâmetro. Se N for negativo ou igual a zero, 
um ponteiro nulo deverá ser retornado.*/

#include<stdio.h>
#include<stdlib.h>

int criarvetor(int n);

int main()
{
    int n;
    printf("Digite um valor inteiro positivo: ");
    scanf("%d", &n);
    int *vet = criarvetor(n);
    if (vet != NULL)
    {
    printf("Vetor: ");
        for (int i = 0; i < n; i++)
        {
            printf(" %d", vet[i]);
        }
        free(vet);
    }
    else
    {
        printf("Erro na alocacao do vetor.\n");
    }
    return 0;
}

int criarvetor(int n)
{
    if (n <= 0)
    {
        return NULL;
    }
    int *vet = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {

        vet[i] = n;
    }
    return vet;
}


/* 11 - Escreva uma função que receba como parâmetro um valor N e retorne o ponteiro para uma 
matriz alocada dinamicamente contendo N linhas e N colunas. Essa matriz deve conter o valor 1 
na diagonal principal e 0 nas demais posições*/

#include <stdio.h>
#include <stdlib.h>

int**criarmatriz(int lin, int col);

int main()
{
    int lin, col;
    printf("Digite a quantidade de linhas: ");
    scanf("%d", &lin);
    printf("Digite a quantidade de colunas: ");
    scanf("%d", &col);
    int** mat;
    mat = criarmatriz(lin, col);
    printf("Matriz:\n");
    for (int i = 0; i < lin; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}

int**criarmatriz(int lin, int col)
{
    int **mat = (int **) malloc(lin * sizeof(int *));
    int i, j;
    for (i = 0; i < lin; i++)
    {
        mat[i] = (int *) malloc(col * sizeof(int *));
    }
    for (i = 0; i < lin; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (i == j)
            {
                mat[i][j] = 1;
            }
            else
            {
                mat[i][j] = 0;
            }
        }
    }
    return mat;
}

/* 12 - Escreva uma função que receba como parâmetro um valor N e retorne o ponteiro para uma 
matriz alocada dinamicamente contendo N linhas e N colunas. Essa matriz deve conter o valor 1
na diagonal secundária e 0 nas demais posições*/

#include <stdio.h>
#include <stdlib.h>

int**criarmatriz(int lin, int col);

int main()
{
    int lin, col;
    printf("Digite a quantidade de linhas: ");
    scanf("%d", &lin);
    printf("Digite a quantidade de colunas: ");
    scanf("%d", &col);
    int** mat;
    mat = criarmatriz(lin, col);
    printf("Matriz:\n");
    for (int i = 0; i < lin; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}

int**criarmatriz(int lin, int col)
{
    int **mat = (int **) malloc(lin * sizeof(int *));
    int i, j;
    for (i = 0; i < lin; i++)
    {
        mat[i] = (int *) malloc(col * sizeof(int *));
    }
    for (i = 0; i < lin; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (i + j == lin - 1)
            {
                mat[i][j] = 1;
            }
            else
            {
                mat[i][j] = 0;
            }
        }
    }
    return mat;
}

/* 13 - Escreva um programa que leia um inteiro N e crie uma matriz alocada dinamicamente contendo
N linhas e N colunas. Essa matriz deve conter o valor 0 na diagonal principal, o valor 1 nos
elementos acima da diagonal principal e o valor -1 nos elementos abaixo da diagonal principal.*/

#include <stdio.h>
#include <stdlib.h>

int**criarmatriz(int lin, int col);

int main()
{
    int lin, col;
    printf("Digite a quantidade de linhas: ");
    scanf("%d", &lin);
    printf("Digite a quantidade de colunas: ");
    scanf("%d", &col);
    int** mat;
    mat = criarmatriz(lin, col);
    printf("Matriz:\n");
    for (int i = 0; i < lin; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}

int**criarmatriz(int lin, int col)
{
    int **mat = (int **) malloc(lin * sizeof(int *));
    int i, j;
    for (i = 0; i < lin; i++)
    {
        mat[i] = (int *) malloc(col * sizeof(int *));
    }
    for (i = 0; i < lin; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (i == j)
            {
                mat[i][j] = 0;
            }
            else if (i > j)
            {
                mat[i][j] = -1
            }
            else
            {
                mat[i][j] = 1;
            }
        }
    }
    return mat;
}

/* 14 - Escreva uma função que receba como parâmetro dois vetores, A e B, de tamanho N cada. 
A função deve retornar o ponteiro para um vetor C de tamanho N alocado dinamicamente, 
em que C[i] = A[i] + B[i]*/

#include <stdio.h>
#include <stdlib.h>

int* somavetor(int *veta, int *vetb, int n);

int main()
{
    int n;
    printf("Digite a quantidade de elementos nos vetores: ");
    scanf("%d", &n);
    int veta[n];
    int vetb[n];
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Digite o valor %d do vetor A: ", i);
        scanf("%d", &veta[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("Digite o valor %d do vetor B: ", i);
        scanf("%d", &vetb[i]);
    }
    int *vetc = somavetor(veta, vetb, n);
    printf("Vetor C: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", vetc[i]);
    }
    free(vetc);
    return 0;
}

int* somavetor(int *veta, int *vetb, int n)
{
    int*vetc = (int*)malloc(n * sizeof(int*));
    int i;
    for (i = 0; i < n; i++)
    {
        vetc[i] = veta[i] + vetb[i];
    }
    return vetc;
}


/* 15 - Escreva uma função que receba como parâmetro dois vetores, A e B, de tamanho N cada. 
A função deve retornar o ponteiro para um vetor C de tamanho N alocado dinamicamente, 
em que C[i] = A[i] * B[i]*/

#include <stdio.h>
#include <stdlib.h>

int* multiplicavetor(int *veta, int *vetb, int n);

int main()
{
    int n;
    printf("Digite a quantidade de elementos nos vetores: ");
    scanf("%d", &n);
    int veta[n];
    int vetb[n];
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Digite o valor %d do vetor A: ", i);
        scanf("%d", &veta[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("Digite o valor %d do vetor B: ", i);
        scanf("%d", &vetb[i]);
    }
    int *vetc = multiplicavetor(veta, vetb, n);
    printf("Vetor C: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", vetc[i]);
    }
    free(vetc);
    return 0;
}

int* multiplicavetor(int *veta, int *vetb, int n)
{
    int*vetc = (int*)malloc(n * sizeof(int));
    int i;
    for (i = 0; i < n; i++)
    {
        vetc[i] = veta[i] * vetb[i];
    }
    return vetc;
}

/* 16 - Escreva uma função que receba como parâmetro uma matriz A contendo N linhas e N colunas, 
e um vetor B de tamanho N. A função deve retornar o ponteiro para um vetor C de tamanho N 
alocado dinamicamente, em que C é o produto da matriz A pelo vetor B*/

/* 17 - Escreva uma função que receba como parâmetro uma matriz A contendo N linhas e N colunas. 
A função deve retornar o ponteiro para um vetor B de tamanho N alocado dinamicamente, em que 
cada posição de B é a soma dos números daquela coluna da matriz.*/

#include <stdio.h>
#include <stdlib.h>

int* criarvetor(int *mat, int a, int b);

int main()
{
    int lin, col;
    printf("Digite a quantidade de linhas da matriz: ");
    scanf("%d", &lin);
    printf("Digite a quantidade de colunas da matriz: ");
    scanf("%d", &col);
    int mat[lin][col];
    for (int i = 0; i < lin; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Digite o valor da linha %d coluna %d: ", i, j);
            scanf("%d", &mat[i][j]);
        }   
    }
    int *vetor;
    *vetor = criarvetor(mat, lin, col);
    printf("Vetor: ");
    for (int i = 0; i < col; i++)
    {
        printf(" %d", vetor[i]);
    }
    free(vetor);
    return 0;
}

int* criarvetor(int *mat, int a, int b)
{
    int *vet = (int*)malloc(col * sizeof(int));
    for (int i = 0; i < count; i++)
    {
        /* code */
    }
    
}

/* 18 - Escreva uma função que receba como parâmetro duas matrizes, A e B, e seus tamanhos. 
A função deve retornar o ponteiro para uma matriz C, em que C é o produto da multiplicação da 
matriz A pela matriz B. Se a multiplicação das matrizes não for possível, retorne um ponteiro nulo.*/

#include <stdio.h>
#include <stdlib.h>

int **multmatriz(int *matA, int linA, int colA, int *matB, int linB, int colB);

int main()
{
    int linA, colA, linB, colB;
    printf("Digite a quantidade de linhas da Matriz A: ");
    scanf("%d", &linA);
    printf("Digite a quantidade de colunas da Matriz A: ");
    scanf("%d", &colA);
    printf("Digite a quantidade de linhas da Matriz B: ");
    scanf("%d", &linB);
    printf("Digite a quantidade de colunas da Matriz B: ");
    scanf("%d", &colB);

    int *matA = (int *)malloc(linA * colA * sizeof(int));
    int *matB = (int *)malloc(linB * colB * sizeof(int));
    int i, j;

    for (i = 0; i < linA; i++)
    {
        for (j = 0; j < colA; j++)
        {
            printf("Digite o valor da linha %d coluna %d da Matriz A: ", i, j);
            scanf("%d", &matA[i * colA + j]);
        }
    }
    for (i = 0; i < linB; i++)
    {
        for (j = 0; j < colB; j++)
        {
            printf("Digite o valor da linha %d coluna %d da Matriz B: ", i, j);
            scanf("%d", &matB[i * colB + j]);
        }
    }
    
    int **matC;
    matC = multmatriz(matA, linA, colA, matB, linB, colB);

    printf("Matriz C\n");
    for (i = 0; i < linA; i++)
    {
        for (j = 0; j < colB; j++)
        {
            printf("%d ", matC[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < linA; i++)
    {
        free(matC[i]);
    }

    free(matC);

    return 0;
}

int **multmatriz(int *matA, int linA, int colA, int *matB, int linB, int colB)
{
    if (colA != linB)
    {
        return NULL;
    }
    int *matC = (int *)malloc(linA * sizeof(int *));
    for (int i = 0; i < linA; i++)
    {
        matC[i] = (int *)malloc(colB * sizeof(int));
    }

    for (int i = 0; i < linA; i++)
    {
        for (int j = 0; j < colB; j++)
        {
            matC[i][j] = 0;
            for (int k = 0; k < colA; k++)
            {
                matC[i][j] = matC[i][j] + matA[i * colA + k] * matB[k * colB + j];
            }
        }
    }
    return matC;
}