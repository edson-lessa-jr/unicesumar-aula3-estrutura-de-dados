#include <stdio.h>
#include <stdlib.h>

int ex1_malloc() {
    int *ptr; // Declaração de um ponteiro para armazenar o endereço do bloco de memória alocado

    int tamanho; // Variável para armazenar o tamanho do array
    printf("Digite o tamanho do array: ");
    scanf("%d", &tamanho); // Solicita ao usuário para digitar o tamanho do array

    // Alocação dinâmica de memória usando malloc
    ptr = (int *) malloc(tamanho * sizeof(int));

    // Verifica se a alocação de memória foi bem-sucedida
    if (ptr == NULL) {
        printf("Erro! Nao foi possivel alocar memória.\n");
        getchar();
        getchar();
        return 1; // Termina o programa com código de erro
    }

    // Preenche o array alocado dinamicamente com números
    for (int i = 0; i < tamanho; i++) {
        ptr[i] = i + 10; // Preenche o array com números de 10 a tamanho
    }

    // Imprime os elementos do array
    printf("Elementos do array:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");
    getchar();
    getchar();
    // Libera a memória alocada dinamicamente
    free(ptr);

    return 0;
}
