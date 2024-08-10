// Capítulo 08 - Tipos Definidos pelo Programador

/* 01 - Implemente um programa que leia o nome, a idade e o endereço de uma pessoa e armazene esses
dados em um estrutura. Em seguida, imprima na tela os dados da estrutura lida.*/

#include <stdio.h>

struct cadastro
{
    char nome[50];
    int idade;
    char endereco[100];
};

int main()
{
    struct cadastro a;
    printf("Nome: ");
    fgets(a.nome, 50, stdin);
    printf("Idade: ");
    scanf("%d", &a.idade);
    getchar();
    printf("Endereco: ");
    fgets(a.endereco, 100, stdin);
    printf("Nome: %sIdade: %d\nEndereco: %s", a.nome, a.idade, a.endereco);
    return 0;
}

/* 02 - Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X e Y).
Em seguida, declare e leia do teclado um ponto e exiba a distância dele até a origem das
coordenadas, isto é, posição (0,0)*/

#include <stdio.h>
#include <math.h>

struct coordenada
{
    float x, y;
};

int main()
{
    struct coordenada p;
    printf("Digite o valor de x: ");
    scanf("%f", &p.x);
    printf("Digite o valor de y: ");
    scanf("%f", &p.y);
    float d;
    d = sqrt(pow((0 - p.x), 2) + pow((0 - p.y), 2));
    printf("A distacia da coordenada (%.0f,%.0f) ate a origem e %.2f", p.x, p.y, d);
    return 0;
}

/* 03 - Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X e Y).
Em seguida, declare e leia do teclado e exiba a distância entre eles.*/

// Formula para calcular a distancia entre duas coordenadas dAB² = (xB – xA)² + (yB – yA)²

#include <stdio.h>
#include <math.h>

struct coordenada
{
    float x, y;
};

int main()
{
    struct coordenada p1, p2;
    printf("Digite o valor de x do ponto 1: ");
    scanf("%f", &p1.x);
    printf("Digite o valor de y do ponto 1: ");
    scanf("%f", &p1.y);
    printf("Digite o valor de x do ponto 2: ");
    scanf("%f", &p2.x);
    printf("Digite o valor de y do ponto 2: ");
    scanf("%f", &p2.y);
    float d;
    d = sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2));
    printf("A distancia entre (%.0f,%.0f) e (%.0f,%.0f) e de: %.2f\n", p1.x, p1.y, p2.x, p2.y, d);
    return 0;
}

/* 04 - Crie uma estrutura chamada Retângulo. Essa estrutura deverá conter o ponto superior esquerdo
e o ponto inferior direito do retângulo. Cada ponto é definido por uma estrutura Ponto, a qual
contém as posições X e Y. Faça um programa que declare e leia uma estrutura Retângulo e exiba
a área e o comprimento da diagonal e o perímetro desse retângulo.*/

#include <stdio.h>
#include <math.h>

struct ponto
{
    float x, y;
};

struct retangulo
{
    struct ponto pon;
};

int main()
{
    struct retangulo pse, psd, pie, pid;
    printf("Coordenada x do ponto superior esquerdo: ");
    scanf("%f", &pse.pon.x);
    printf("Coordenada y do ponto superior esquerdo: ");
    scanf("%f", &pse.pon.y);
    printf("Coordenada x do ponto inferior direito: ");
    scanf("%f", &pid.pon.x);
    printf("Coordenada y do ponto inferior direito: ");
    scanf("%f", &pid.pon.y);
    psd.pon.x = pid.pon.x;
    psd.pon.y = pse.pon.x;
    pie.pon.x = pse.pon.x;
    pie.pon.y = pid.pon.y;
    float b, h;
    b = sqrt((pow(pid.pon.x - pie.pon.x, 2)) + (pow(pid.pon.x - pie.pon.x, 2)));
    h = sqrt((pow(pse.pon.x - pie.pon.x, 2) + (pow(pse.pon.y - pie.pon.x, 2))));
    float area, perimetro, diagonal;
    area = b*h;
    perimetro = 2*b + 2*h;
    diagonal = sqrt((pow(pse.pon.x - pid.pon.x, 2)) + (pow(pse.pon.y - pid.pon.y, 2)));
    printf("\n\nCoordenadas do retangulo\n\nPonto Esquerdo Superior: (%.0f,%.0f)\n\
Ponto Direito Inferior (%.0f,%.0f)\nArea: %.2f\nPerimetro: %.2f\nDiagonal: %.2f\n", \
    pse.pon.x, pse.pon.y, pid.pon.x, pid.pon.y, area, perimetro, diagonal);
    return 0;
}

/* 05 - Usando a estrutura do Retângulo do exercício anterior, faça um programa que declare e leia
uma estrutura Retângulo e um Ponto, e informe se esse ponto está ou não dentro do Retângulo.*/

#include <stdio.h>
#include <math.h>

struct ponto
{
    float x, y;
};

struct retangulo
{
    struct ponto pon;
};

int main()
{
    struct retangulo pse, psd, pie, pid, p0;
    printf("Coordenada x do ponto superior esquerdo: ");
    scanf("%f", &pse.pon.x);
    printf("Coordenada y do ponto superior esquerdo: ");
    scanf("%f", &pse.pon.y);
    printf("Coordenada x do ponto inferior direito: ");
    scanf("%f", &pid.pon.x);
    printf("Coordenada y do ponto inferior direito: ");
    scanf("%f", &pid.pon.y);
    printf("Coordenada x do ponto: ");
    scanf("%f", &p0.pon.x);
    printf("Coordenada y do ponto: ");
    scanf("%f", &p0.pon.y);
    if (p0.pon.x < pse.pon.x || p0.pon.y > pse.pon.y)
    {
        printf("A coordenada (%.0f,%.0f) esta fora do retangulo.\n", p0.pon.x, p0.pon.y);
    }
    else if (p0.pon.x > pid.pon.x || p0.pon.y < pid.pon.y)
    {
        printf("A coordenada (%.0f,%.0f) esta fora do retangulo.\n", p0.pon.x, p0.pon.y);
    }
    else
    printf("A coordenada (%.0f,%.0f) esta dentro do retangulo.\n", p0.pon.x, p0.pon.y);
    return 0;
}

/* 06 - Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura deve conter
o número de matrícula do aluno, seu nome e as notas de três provas. Agora, escreva um programa 
que leia os dados de cinco alunos e os armazene nessa estrutura. Em seguida, exiba o nome e as 
notas do aluno que possui a maior média geral dentre os cinco.*/

#include <stdio.h>

struct disciplina
{
    char aluno[50];
    int matricula;
    float prova[3]
};

int main()
{
    struct disciplina aluno[5];
    int i, j;
    for (i = 0; i < 5; i++)
    {
        printf("Nome: ");
        fgets(aluno[i].aluno, 50, stdin);
        printf("Matricula: ");
        scanf("%d", &aluno[i].matricula);
        getchar();
        for (j = 0; j < 5; j++)
        {
            printf("Prova %d: ", j);
            scanf("%f", &aluno[i].prova[j]);
        }
        getchar();
        printf("\n");
    }
    float soma = 0;
    float media = 0;
    int indice = 0;
    for (i = 0; i < 5; i++)
    {
        soma = 0;
        for (j = 0; j < 5; j++)
        {
            soma = soma + aluno[i].prova[j];
        }
        if (media <= soma/3)
        {
            media = soma/3;
            indice = i;
        } 
    }
    printf("Maior Media\nAluno: %sMedia: %.2f", aluno[indice].aluno, media);
    return 0;  
}

/* 07 - Crie uma estrutura representando uma hora. Essa estrutura deve conter os campos hora,
minuto e segundo. Agora, escreva um programa que leia um vetor de cinco posições dessa estrutura
e imprima a maior hora.*/

#include <stdio.h>

struct tempo
{
    int h, min, seg;
};

int main()
{
    struct tempo vet[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Hora: ");
        scanf("%d", &vet[i].h);
        printf("Minutos: ");
        scanf("%d", &vet[i].min);
        printf("Segundos: ");
        scanf("%d", &vet[i].seg);
        printf("\n");
    }
    int maior = 0;
    for (i = 1; i < 5; i++)
    {
        if (vet[i].h > vet[maior].h || \
        vet[i].h == vet[maior].h && vet[i].min > vet[maior].min || \
        vet[i].h == vet[maior].h && vet[i].min == vet[maior].min || vet[i].seg > vet[maior].seg)
        {
            maior = i;
        }
    }
    printf("Maior hora\nHora: %d  Minutos: %d  Segundos: %d\n", \
    vet[maior].h, vet[maior].min, vet[maior].seg);
    return 0; 
}

/* 08 - Crie uma estrutura capaz de armazenar o nome e a data de nascimento de uma pessoa.
Agora, escreva um programa que leia os dados de seis pessoas. Calcule e exiba os nomes da pessoa
mais nova e mais velha.*/

#include <stdio.h>

struct cadastro
{
    char nome[50];
    int dia, mes, ano;
};

int main()
{
    struct cadastro p[6];
    int i;
    for (i = 0; i < 6; i++)
    {
        printf("Nome: ");
        fgets(p[i].nome, 50, stdin);
        printf("Data de Nascimento (DD/MM/AAAA): ");
        scanf("%d/%d/%d", &p[i].dia, &p[i].mes, &p[i].ano);
        getchar();
        printf("\n");
    }
    int nova = 0;
    for (i = 1; i < 6; i++)
    {
        if ((p[i].ano > p[nova].ano) || \
        (p[i].ano == p[nova].ano && p[i].mes > p[nova].mes) || \
        (p[i].ano ==p[nova].ano && p[i].mes == p[nova].mes && p[i].dia > p[nova].dia))
        {
            nova = i;
        }
    }
    int velha = 0;
    for (i = 1; i < 6; i++)
    {
        if ((p[i].ano < p[velha].ano) || \
        (p[i].ano == p[velha].ano && p[i].mes < p[velha].mes) || \
        (p[i].ano == p[velha].ano && p[i].mes == p[velha].mes && p[i].dia < p[velha].dia))
        {
            velha = i;
        }
    }
    printf("Pessoa mais nova: %s", p[nova].nome);
    printf("Pessoa mais velha: %s", p[velha].nome);
    return 0;
}


/*09 - Crie uma estrutura representando um atleta. Essa estrutura deve conter o nome do atleta,
seu esporte, idade e altura. Agora, escreva um programa que leia os dados de cinco atletas.
Calcule e exiba o nome do atleta mais alto e do mais velho.*/

#include <stdio.h>
#include <stdlib.h>

struct atletas
{
    char nome[50];
    char esporte[30];
    int idade;
    float altura;
};

int main()
{
    struct atletas at[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Nome: ");
        fgets(at[i].nome, 50, stdin);
        printf("Esporte: ");
        fgets(at[i].esporte, 30, stdin);
        printf("Idade: ");
        scanf("%d", &at[i].idade);
        printf("Altura: ");
        scanf("%f", &at[i].altura);
        getchar();
        printf("\n");
    }
    int h = 0;
    for (i = 0; i < 5; i++)
    {
        if (at[i].altura >= at[h].altura)
        {
            h = i;
        }
    }
    int id = 0;
    for (i = 0; i < 5; i++)
    {
        if(at[i].idade >= at[id].idade)
        {
            id = i;
        }
    }
    printf("Atleta mais alto: %s", at[h].nome);
    printf("Atleta mais velho: %s", at[id].nome);
    return 0;
}

/* 10 - Usando a estrutura "atleta" do exercício anterior, escreva um programa que leia os
dados de cinco atletas e os exiba por ordem de idade, do mais velho ao mais novo.*/

struct atletas
{
    char nome[50];
    char esporte[30];
    int idade;
    float altura;
};

int main()
{
    struct atletas a[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Nome: ");
        fgets(a[i].nome, 50, stdin);
        printf("Idade: ");
        scanf("%d", &a[i].idade);
        getchar();
        printf("\n");
    }
    // Ordenando os atletas por idade usando o algoritmo de ordenação por seleção
    for (int i = 0; i < 5 - 1; i++)
    {
        int min_idx = i;
        
        for (int j = i + 1; j < 5; j++)
        {
            if (a[j].idade > a[min_idx].idade)
            {
                min_idx = j;
            }
        }
        
        // Trocando de posição os atletas com base na idade
        struct atletas temp = a[i];
        a[i] = a[min_idx];
        a[min_idx] = temp;
    }
    
    // Imprimindo os nomes dos atletas na ordem de idade
    printf("Nomes dos atletas por ordem de idade (do mais velho para o mais novo):\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%s", a[i].nome);
    }
    
    return 0;
}

/* 11 - Escreva um programa que contenha uma estrutura representando uma data válida. Essa
estrutura deve conter os campos dia, mês e ano. Em seguida, leia duas datas e armazene nessa
estrutura. Calcule e exiba o número de dias que decorreram entre as duas datas.*/

struct data
{
    int ano, mes, dia;
};

int main()
{
    struct data d0, d1;

    printf("Digite a menor data (DD/MM/AAAA): " );
    scanf("%d/%d/%d", &d0.dia, &d0.mes, &d0.ano);
    printf("Digite a maior data (DD/MM/AAAA): ");
    scanf("%d/%d/%d", &d1.dia, &d1.mes, &d1.ano);
    int ano = d1.ano - d0.ano;
}


/* 12 - Crie uma enumeração representando os dias da semana. Agora, escreva um programa que
leia um valor inteiro do teclado e exiba o dia da semana correspodente.*/

#include <stdio.h>

enum semana 
{
    domingo = 1, segunda, terca, quarta, quinta, sexta, sabado
};

int main()
{
    int dia;
    printf("Digite o valor correspondente ao dia da semana: ");
    scanf("%d", &dia);
    switch (dia)
    {
    case domingo:
        printf("Domingo\n");
        break;
    case segunda:
        printf("Segunda\n");
        break;
    case terca:
        printf("Terca\n");
        break;
    case quarta:
        printf("Quarta\n");
        break;
    case quinta:
        printf("Quinta\n");
        break;
    case sexta:
        printf("Sexta\n");
        break;
    case sabado:
        printf("Sabado\n");
        break;
    default:
        printf("Numero invalido\n")
        break;
    }
    return 0;
}

/* 13 - Crie uma enumeração representando os meses do ano. Agora, escreva um programa que
leia um valor inteiro do teclado e exiba o nome do mês correspondente e quantos dias ele possui.*/

#include <stdio.h>

enum mes {janeiro = 1, fevereiro, marco, abril, maio, junho, julho, agosto, setembro, \
outubro, novembro, dezembro};

int main()
{
    int mes;
    printf("Digite o numero correspondente ao mes: ");
    scanf("%d", &mes);
    switch (mes)
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
    return 0;
}

/* 14 - Crie uma enumeração representando os itens de uma lista de compras. Agora, escreva um
programa que leia um valor inteiro do teclado e exiba o nome do item comprado e o seu preço.*/

#include <stdio.h>

enum compras {arroz = 1, feijao, leite, carne, ovo};

int main()
{
    int compra;
    printf("Digite o valor entre 1 e 5 para exibir o produto e preço: ");
    scanf("%d", &compra);
    switch (compra)
    {
    case arroz:
        printf("Arroz - R$ 6,00\n");
        break;
    case feijao:
        printf("Feijao - R$ 7,00\n")
        break;
    case leite:
        printf("Leite - R$ 4,50\n");
        break;
    case carne:
        printf("Carne - R$ 25,00\n");
        break;
    case ovo:
        printf("Ovo - R$ 4,00\n");
        break;
    default:
        printf("Valor invalido\n");
        break;
    }
    return 0;
}

/* 15 - Crie uma união contendo dois tipos básicos diferentes. Agora, escreva um programa
que inicialize um dos tipos dessa união e exiba em tela o valor do outro tipo.*/

#include <stdio.h>

union capitulo8
{
    short int p0;
    unsigned char p1, p2;
};

int main()
{
    union capitulo8 p;
    printf("Digite um valor inteiro: ");
    scanf("%hd", &p.p0);
    printf("%u\n%u\n", p.p1, p.p2);
    return 0;
}