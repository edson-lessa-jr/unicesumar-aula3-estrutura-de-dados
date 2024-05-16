#include <stdio.h>
#include <stdlib.h>

int ex5_matriz() {
    int num_alunos, num_notas; // Variáveis para armazenar o número de alunos e de notas por aluno
    printf("Digite o número de alunos: ");
    scanf("%d", &num_alunos);
    // Solicita ao usuário para digitar o número de alunos

    printf("Digite o número de notas por aluno: ");
    scanf("%d", &num_notas);
    // Solicita ao usuário para digitar o número de notas por aluno

    // Alocação dinâmica de memória para armazenar as notas
    // dos alunos em uma matriz
    float **notas = (float **)malloc(num_alunos * sizeof(float *));
    /**
     sizeof(float *): calcula o tamanho em bytes de um ponteiro
     para float.

     num_alunos * sizeof(float *): Multiplica o número de
      alunos (num_alunos) pelo tamanho de cada ponteiro para
      float em bytes (determinado por sizeof(float *)),
      resultando no total de bytes necessário para armazenar
      todos os ponteiros para as linhas da matriz.

    malloc(num_alunos * sizeof(float *)): A função malloc()
     é usada para alocar dinamicamente memória na quantidade
     especificada de bytes. Neste caso, estamos alocando
     memória suficiente para armazenar todos os ponteiros
     para as linhas da matriz.

    (float **)malloc(...): A função malloc() retorna um
     ponteiro void * para o bloco de memória alocado.
     No entanto, como queremos armazenar ponteiros para float,
     fazemos um cast do ponteiro retornado por malloc()
     para float **. Isso informa ao compilador que o ponteiro
     retornado por malloc() será usado para armazenar
     ponteiros para float.

    float **notas = ...: Finalmente, armazenamos o ponteiro
     retornado por malloc() na variável notas, que é declarada
     como um ponteiro para ponteiro para float. Agora, notas
     aponta para o início do bloco de memória alocado
     dinamicamente, que pode ser usado para armazenar os
     ponteiros para as linhas da matriz.
     */
    for (int i = 0; i < num_alunos; i++) {
        notas[i] = (float *)malloc(num_notas * sizeof(float));
    }

    // Verifica se a alocação de memória foi bem-sucedida
    if (notas == NULL) {
        printf("Erro! Não foi possível alocar memória.\n");
        return 1; // Termina o programa com código de erro
    }

    // Solicita ao usuário para digitar as notas de cada aluno
    for (int i = 0; i < num_alunos; i++) {
        printf("Digite as notas do aluno %d:\n", i + 1);
        for (int j = 0; j < num_notas; j++) {
            printf("Nota %d: ", j + 1);
            scanf("%f", &notas[i][j]);
        }
    }

    // Imprime as notas dos alunos
    printf("Notas dos alunos:\n");
    for (int i = 0; i < num_alunos; i++) {
        printf("Aluno %d: ", i + 1);
        for (int j = 0; j < num_notas; j++) {
            printf("%.2f ", notas[i][j]);
        }
        printf("\n");
    }

    // Libera a memória alocada dinamicamente
    for (int i = 0; i < num_alunos; i++) {
        free(notas[i]);
    }
    free(notas);

    return 0;
}
