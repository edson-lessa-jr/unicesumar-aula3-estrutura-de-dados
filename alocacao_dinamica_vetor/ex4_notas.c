#include <stdio.h>
#include <stdlib.h>

int ex4_notas() {
    int num_notas; // Variável para armazenar o número de notas do aluno
    printf("Digite o número de notas do aluno: ");
    scanf("%d", &num_notas); // Solicita ao usuário para digitar o número de notas

    // Alocação dinâmica de memória para armazenar as notas
    float *notas = (float *)malloc(num_notas * sizeof(float));
/**
sizeof(float): Esta parte determina o tamanho em bytes de um
 número do tipo float.  Um float é geralmente representado
 usando 4 bytes (32 bits).

num_notas * sizeof(float): Multiplica o número de notas (num_notas)
 pelo tamanho de cada nota em bytes (determinado por sizeof(float)),
 resultando no total de bytes necessário para armazenar todas as notas.

malloc(num_notas * sizeof(float)): A função malloc() é usada para
 alocar dinamicamente memória na quantidade especificada de bytes.
 Neste caso, estamos alocando memória suficiente para armazenar
 todas as notas do aluno.

(float *)malloc(...): A função malloc() retorna um ponteiro
 void * para o bloco de memória alocado. No entanto,
 como queremos armazenar valores float,
 fazemos um cast do ponteiro (converter para ponteiro)
 retornado por malloc() para float *. Isso informa
 ao compilador que o ponteiro retornado por malloc()
 será usado para armazenar valores float.

float *notas = ...: Finalmente, armazenamos o ponteiro retornado
 por malloc() na variável notas, que é declarada como um
 ponteiro para float. Notas aponta para o início do bloco de
 memória alocado dinamicamente, que pode ser usado para
 armazenar as notas do aluno.
*/
    // Verifica se a alocação de memória foi bem-sucedida
    if (notas == NULL) {
        printf("Erro! Não foi possível alocar memória.\n");
        return 1; // Termina o programa com código de erro
    }

    // Solicita ao usuário para digitar as notas
    printf("Digite as notas do aluno:\n");
    for (int i = 0; i < num_notas; i++) {
        printf("Nota %d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    // Calcula a média das notas
    float soma = 0;
    for (int i = 0; i < num_notas; i++) {
        soma += notas[i];
    }
    float media = soma / num_notas;

    // Imprime a média das notas
    printf("A média do aluno é: %.2f\n", media);

    // Libera a memória alocada dinamicamente
    free(notas);

    return 0;
}
