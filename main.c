#include <stdio.h>
#include <locale.h>

int ex1_malloc();

int ex2_calloc();

int ex3_realloc();

int ex4_notas();

int ex5_matriz();

int ex6_registro();

int ex7_comparacao_memoria();

int main(void) {
    // Define a codificação de caracteres para UTF-8
    setlocale(LC_ALL, "en_US.UTF-8");

    int opcao;

    printf("Iniciando o programa\n");

    do {
        // Exibindo o menu de opções
        printf("\nMenu:\n");
        printf("1. Exemplo Malloc\n");
        printf("2. Exemplo Calloc\n");
        printf("3. Exemplo Realloc\n");
        printf("4. Exemplo alocacao dinamica vetor (notas)\n");
        printf("5. Exemplo alocacao dinamica matriz (alunos)\n");
        printf("6. Exemplo alocacao dinamica registro (alunos)\n");
        printf("7. Exemplo camparacao de alocacao de memoria\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        // Verificando a opção escolhida e chamando a função correspondente
        switch (opcao) {
            case 1:
                ex1_malloc();
                break;
            case 2:
                ex2_calloc();
                break;
            case 3:
                ex3_realloc();
                break;
            case 4:
                ex4_notas();
                break;
            case 5:
                ex5_matriz();
                break;
            case 6:
                ex6_registro();
                break;
            case 7:
                ex7_comparacao_memoria();
                break;
            case 0:
                printf("Saindo do programa. Obrigado!\n");
                break;
            default:
                printf("Opcao invalida. Por favor, escolha uma opcao valida.\n");
        }
    } while (opcao != 0);

    return 0;
}
