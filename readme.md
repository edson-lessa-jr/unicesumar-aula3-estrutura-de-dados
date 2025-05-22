
# Aula 3 – Estrutura de Dados em C (Unicesumar)

Este repositório contém os códigos desenvolvidos na Aula 3 da disciplina de Estrutura de Dados do curso de Engenharia de Software da Unicesumar. O foco principal é a alocação dinâmica de memória em C, utilizando vetores dinâmicos.

Prof: Edson Orivaldo Lessa Junior

## 📚 Conteúdo Abordado

- Alocação dinâmica de memória com `malloc`, `calloc`, `realloc` e `free`.
- Manipulação de vetores dinâmicos.
- Boas práticas de gerenciamento de memória em C.

## 📁 Estrutura do Projeto

```
unicesumar-aula3-estrutura-de-dados/
├── alocacao_dinamica/
│   └── main.c
├── alocacao_dinamica_vetor/
│   └── main.c
├── CMakeLists.txt
└── readme.md
```

- **alocacao_dinamica/**: Exemplos básicos de alocação e liberação de memória.
- **alocacao_dinamica_vetor/**: Implementações de vetores dinâmicos com inserção e redimensionamento.

## 🛠️ Como Executar

1. Clone o repositório:

   ```bash
   git clone https://github.com/edson-lessa-jr/unicesumar-aula3-estrutura-de-dados.git
   ```

2. Acesse o diretório do projeto:

   ```bash
   cd unicesumar-aula3-estrutura-de-dados
   ```

3. Compile os programas:

   ```bash
   gcc alocacao_dinamica/main.c -o alocacao_dinamica
   gcc alocacao_dinamica_vetor/main.c -o alocacao_dinamica_vetor
   ```

4. Execute os programas:

   ```bash
   ./alocacao_dinamica
   ./alocacao_dinamica_vetor
   ```

## 🧠 Aprendizados

- Entendimento prático de como alocar e liberar memória dinamicamente em C.
- Implementação de vetores que podem crescer ou diminuir conforme necessário.
- Identificação e prevenção de vazamentos de memória.

## 📄 Licença

Este projeto está licenciado sob a [MIT License](LICENSE).

---


