#include <stdio.h>
#include <stdlib.h>

// Definição do tipo Aluno
typedef struct {
    char nome[50];
    float *notas;
    int num_notas;
} Aluno;

int ex6_registro() {
    int num_alunos; // Variável para armazenar o número de alunos
    printf("Digite o numero de alunos: ");
    scanf("%d", &num_alunos); // Solicita ao usuário para digitar o número de alunos

    // Alocação dinâmica de memória para um array de alunos
    Aluno *alunos = (Aluno *) malloc(num_alunos * sizeof(Aluno));

    // Verifica se a alocação de memória foi bem-sucedida
    if (alunos == NULL) {
        printf("Erro! Nao foi possivel alocar memoria.\n");
        getchar();
        getchar();
        return 1; // Termina o programa com código de erro
    }

    // Solicita ao usuário para digitar os dados de cada aluno
    for (int i = 0; i < num_alunos; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf("%s", alunos[i].nome);
        printf("Digite o numero de notas do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].num_notas);

        // Alocação dinâmica de memória para armazenar as notas do aluno
        alunos[i].notas = (float *) malloc(alunos[i].num_notas * sizeof(float));

        // Verifica se a alocação de memória foi bem-sucedida
        if (alunos[i].notas == NULL) {
            printf("Erro! Nao foi possivel alocar memoria.\n");
            getchar();
            getchar();
            return 1; // Termina o programa com código de erro
        }

        // Solicita ao usuário para digitar as notas do aluno
        printf("Digite as notas do aluno %d:\n", i + 1);
        for (int j = 0; j < alunos[i].num_notas; j++) {
            printf("Nota %d: ", j + 1);
            scanf("%f", &alunos[i].notas[j]);
        }
    }

    // Imprime os dados dos alunos
    printf("Dados dos alunos:\n");
    for (int i = 0; i < num_alunos; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Notas: ");
        for (int j = 0; j < alunos[i].num_notas; j++) {
            printf("%.2f ", alunos[i].notas[j]);
        }
        printf("-----------\n");
    }
    getchar();
    getchar();
    // Libera a memória alocada dinamicamente
    for (int i = 0; i < num_alunos; i++) {
        free(alunos[i].notas);
    }
    free(alunos);

    return 0;
}
