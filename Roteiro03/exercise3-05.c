#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Banda
{
    char nome[30];
    char tipoMusica[10];
    int qtdIntegrantes;
    int posRanking;
}t_Banda;

t_Banda *preenche(t_Banda minhas[]);

void exibe(t_Banda minhas[]);
void exibePos(int);
void exibeTipo(char[]);
void favorita(char[]);

t_Banda minhasBandas[5];

int main()
{
    int pos = 0;
    char tipo[20];
    char nome[20];
    //Preenche a lista de bandas
    t_Banda *minhaLista = preenche(minhasBandas);

    //Exibe
    exibe(minhaLista);

    printf("   ============ ");
    printf("busque pela posição: ");
    scanf("%d",&pos);

    printf("   ============ ");
    exibePos(pos);

    printf("   ============ ");
    printf("busque pelo tipo de musica: ");
    scanf("%s",tipo);

    exibeTipo(tipo);

    printf("   ============ ");
    printf("busque por um nome: ");
    scanf("%s",nome);

    favorita(nome);

    return 0;
}

t_Banda *preenche(t_Banda minhasBandas[]){

    int i = 0;

    for(i = 0; i < 5; ++i){

        printf("Nome: ");
        scanf("%[ -~]s",minhasBandas[i].nome);
        getchar();

        printf("Tipo de Música: ");
        scanf("%[ -~]s",minhasBandas[i].tipoMusica);
        getchar();

        printf("Quantidade de integrantes: ");
        scanf("%d",&minhasBandas[i].qtdIntegrantes);
        getchar();

        printf("Ranking: ");
        scanf("%d",&minhasBandas[i].posRanking);
        getchar();
    }
    return minhasBandas;
}

void exibe(t_Banda minhas[]){
    int i = 0;

    for (i = 0; i < 5; ++i) {
        putchar('\n');
        printf("Nome: %s\n",minhas[i].nome);
        printf("Tipo de Música: %s\n",minhas[i].tipoMusica);
        printf("Quantidade de integrantes %i\n",minhas[i].qtdIntegrantes);
        printf("Ranking: %i\n",minhas[i].posRanking);
    }
}

void exibePos(int pos){
    int i = 0;
    for (i = 0; i < 5; i++) {
        if(pos == minhasBandas[i].posRanking){
            putchar('\n');
            printf("Nome: %s\n",minhasBandas[i].nome);
            printf("Tipo de Música: %s\n",minhasBandas[i].tipoMusica);
            printf("Quantidade de integrantes %i\n",minhasBandas[i].qtdIntegrantes);
            printf("Ranking: %i\n",minhasBandas[i].posRanking);
        }
    }
}

void exibeTipo(char tipo[]){
    int i = 0;
    for (i = 0; i < 5; i++) {
        if(strcmp(minhasBandas[i].tipoMusica, tipo) == 0){
            putchar('\n');
            printf("Nome: %s\n",minhasBandas[i].nome);
            printf("Tipo de Música: %s\n",minhasBandas[i].tipoMusica);
            printf("Quantidade de integrantes %i\n",minhasBandas[i].qtdIntegrantes);
            printf("Ranking: %i\n",minhasBandas[i].posRanking);
        }
    }
}

void favorita(char nome[]){
    int i = 0;
    for (i = 0; i < 5; i++) {
        if(strcmp(minhasBandas[i].nome, nome) == 0){
            putchar('\n');
            printf("Banda favorita encontrada:  %s\n",minhasBandas[i].nome);
        }
        else{
            printf("Não encontrada:  %s\n",nome);
        }
    }
}
