cmake_minimum_required(VERSION 3.28)
project(aula3 C)

set(CMAKE_C_STANDARD 11)

add_executable(aula3 main.c
        alocacao_dinamica/ex1_malloc.c
        alocacao_dinamica/ex2_calloc.c
        alocacao_dinamica/ex3_realloc.c
        alocacao_dinamica/ex3_realloc.c
        alocacao_dinamica_vetor/ex4_notas.c
        alocacao_dinamica_vetor/ex4_notas.c
        alocacao_dinamica_vetor/ex5_matriz.c
        alocacao_dinamica_vetor/ex6_registro.c
        alocacao_dinamica_vetor/ex7_comparacao_memoria.c
)
