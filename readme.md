
# Aula 3 – Estrutura de Dados em C (Unicesumar)

Este repositório contém os códigos desenvolvidos na Aula 3 da disciplina de Estrutura de Dados do curso de Engenharia de Software da Unicesumar. O foco principal é a alocação dinâmica de memória em C, abordando exemplos práticos e aplicações com vetores dinâmicos.

Prof: Edson Orivaldo Lessa Junior

## 📚 Conteúdo Abordado

- Alocação dinâmica de memória: `malloc`, `calloc`, `realloc` e `free`.
- Manipulação de vetores dinâmicos e matrizes.
- Uso de registros (structs) e comparação de consumo de memória.
- Boas práticas para evitar vazamento de memória em C.

## 📁 Estrutura do Projeto

```
unicesumar-aula3-estrutura-de-dados/
├── alocacao_dinamica/
│   ├── ex1_malloc.c
│   ├── ex2_calloc.c
│   └── ex3_realloc.c
├── alocacao_dinamica_vetor/
│   ├── ex4_notas.c
│   ├── ex5_matriz.c
│   ├── ex6_registro.c
│   └── ex7_comparacao_memoria.c
├── main.c
├── CMakeLists.txt
├── .gitignore
└── readme.md
```

### Detalhamento dos exemplos

- **alocacao_dinamica/**
  - `ex1_malloc.c`: Exemplo de alocação dinâmica utilizando `malloc`.
  - `ex2_calloc.c`: Exemplo de alocação dinâmica utilizando `calloc`.
  - `ex3_realloc.c`: Exemplo de realocação de memória utilizando `realloc`.

- **alocacao_dinamica_vetor/**
  - `ex4_notas.c`: Leitura e armazenamento dinâmico de notas de alunos.
  - `ex5_matriz.c`: Manipulação de matrizes alocadas dinamicamente.
  - `ex6_registro.c`: Uso de structs (registros) com alocação dinâmica.
  - `ex7_comparacao_memoria.c`: Comparação entre uso de memória estática e dinâmica.

- **main.c**: Arquivo principal do projeto (pode ser utilizado como ponto de entrada ou testes gerais).

## 🛠️ Como Executar

1. **Clone o repositório:**

   ```bash
   git clone https://github.com/edson-lessa-jr/unicesumar-aula3-estrutura-de-dados.git
   ```

2. **Acesse o diretório do projeto:**

   ```bash
   cd unicesumar-aula3-estrutura-de-dados
   ```

3. **Compile os exemplos individualmente:**

   ```bash
   gcc alocacao_dinamica/ex1_malloc.c -o ex1_malloc
   gcc alocacao_dinamica/ex2_calloc.c -o ex2_calloc
   gcc alocacao_dinamica/ex3_realloc.c -o ex3_realloc

   gcc alocacao_dinamica_vetor/ex4_notas.c -o ex4_notas
   gcc alocacao_dinamica_vetor/ex5_matriz.c -o ex5_matriz
   gcc alocacao_dinamica_vetor/ex6_registro.c -o ex6_registro
   gcc alocacao_dinamica_vetor/ex7_comparacao_memoria.c -o ex7_comparacao_memoria
   ```

4. **Execute o exemplo desejado:**

   ```bash
   ./ex1_malloc
   ./ex2_calloc
   ./ex3_realloc
   ./ex4_notas
   ./ex5_matriz
   ./ex6_registro
   ./ex7_comparacao_memoria
   ```

> Caso utilize o `CMakeLists.txt`, basta rodar:
> ```bash
> cmake .
> make
> ```

## 🧠 Aprendizados

- Aplicação prática da alocação dinâmica para otimização de memória.
- Manipulação de dados com vetores e matrizes dinâmicas.
- Uso de registros (structs) em contextos reais.
- Avaliação do impacto do uso de memória dinâmica vs. estática.

## 📄 Licença

Este projeto está licenciado sob a [MIT License](LICENSE).


