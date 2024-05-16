#include <stdio.h>
#include <stdlib.h>

int ex3_realloc() {
    int *ptr; // Declaração de um ponteiro para armazenar o endereço do bloco de memória alocado

    int tamanho; // Variável para armazenar o tamanho inicial do array
    printf("Digite o tamanho inicial do array: ");
    scanf("%d", &tamanho); // Solicita ao usuário para digitar o tamanho inicial do array

    // Alocação dinâmica de memória usando malloc
    ptr = (int *)malloc(tamanho * sizeof(int));

    // Verifica se a alocação de memória foi bem-sucedida
    if (ptr == NULL) {
        printf("Erro! Não foi possível alocar memória.\n");
        return 1; // Termina o programa com código de erro
    }

    // Imprime os elementos do array inicial
    printf("Elementos do array inicial:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    int novo_tamanho; // Variável para armazenar o novo tamanho do array
    printf("Digite o novo tamanho do array: ");
    scanf("%d", &novo_tamanho); // Solicita ao usuário para digitar o novo tamanho do array

    // Realocação dinâmica de memória usando realloc
    ptr = (int *)realloc(ptr, novo_tamanho * sizeof(int));

    // Verifica se a realocação de memória foi bem-sucedida
    if (ptr == NULL) {
        printf("Erro! Não foi possível realocar memória.\n");
        return 1; // Termina o programa com código de erro
    }

    // Imprime os elementos do array após a realocação
    printf("Elementos do array após a realocação:\n");
    for (int i = 0; i < novo_tamanho; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    // Libera a memória alocada dinamicamente
    free(ptr);

    return 0;
}
