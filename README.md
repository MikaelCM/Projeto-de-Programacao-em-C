# Projeto de Programação em C

Este projeto contém a resolução de uma série de exercícios de programação em C desenvolvidos como parte da NP1 da disciplina de programação em C da minha universidade. O objetivo é aplicar conceitos básicos de entrada e saída de dados, estruturas condicionais, loops, validação de dados e lógica de programação.

Todos os exercícios estão implementados em programas individuais em C, que podem ser compilados e executados separadamente.

## Estrutura do Projeto

O projeto contém 8 programas, cada um resolvendo uma questão específica da NP1.

### Questão 1 – Verificação de Aprovação em Disciplina

Descrição: Verifica se a nota final de um aluno permite aprovação.

Conceitos utilizados: float, if/else, scanf, printf.

Lógica:

Se a nota ≥ 6.0 → "Aprovado"

Caso contrário → "Reprovado"

### Questão 2 – Classificação de Bolsas de Estudo

Descrição: Classifica o tipo de bolsa de acordo com a renda familiar do aluno.

Conceitos utilizados: double, if/else if/else, scanf, printf.

Lógica:

Renda < 1500.00 → "Bolsa Integral"

Renda entre 1500.00 e 3000.00 → "Bolsa Parcial"

Renda > 3000.00 → "Sem Bolsa"

### Questão 3 – Menu de Atendimento Universitário

Descrição: Imprime a opção escolhida pelo aluno a partir de um código numérico.

Conceitos utilizados: int, if/else if/else, scanf, printf.

Lógica:

1 → Matrícula em disciplinas

2 → Consulta de histórico

3 → Solicitação de documentos

Qualquer outro código → "Opção Inválida"

### Questão 4 – Verificação de Idade para Inscrição em Evento

Descrição: Verifica se a idade do aluno permite inscrição em um evento vocacional.

Conceitos utilizados: int, if/else, scanf, printf.

Lógica:

Idade entre 18 e 25 (inclusive) → "Inscrição Permitida"

Caso contrário → "Inscrição Não Permitida"

### Questão 5 – Cálculo de Média de Notas de Alunos

Descrição: Calcula a média aritmética das notas de 10 alunos.

Conceitos utilizados: float, for, scanf, printf.

Lógica:

Loop for para ler 10 notas

Soma das notas e divisão por 10

Impressão da média final

### Questão 6 – Contagem de Alunos Aprovados e Reprovados

Descrição: Conta quantos alunos foram aprovados ou reprovados em uma disciplina.

Conceitos utilizados: float, int, for, if/else, scanf, printf.

Lógica:

Loop para 15 alunos

Nota ≥ 6.0 → incrementa contador de aprovados

Caso contrário → incrementa contador de reprovados

Ao final, imprime os totais

### Questão 7 – Tabela de Multiplicação

Descrição: Gera a tabela de multiplicação de 1 a 9 (como no exemplo).

Conceitos utilizados: int, loops for aninhados, printf.

Lógica:

Loop externo: multiplicadores de 1 a 9

Loop interno: multiplicandos de 1 a 9

Imprime "i x j = resultado" para cada combinação

### Questão 8 – Verificação de Notas Válidas em Lista de Alunos

Descrição: Soma notas válidas de 10 alunos e ignora notas inválidas.

Conceitos utilizados: float, for, if/else, scanf, printf.

Lógica:

Nota válida: 0.0 a 10.0 → adiciona à soma

Nota inválida → imprime "Nota inválida"

Ao final, imprime soma das notas válidas

## Tecnologias e Conceitos Aplicados

Linguagem: C

Entrada de dados: scanf()

Saída de dados: printf()

Estruturas condicionais: if, else if, else

Loops: for aninhados e simples

Tipos de variáveis: int, float, double

Boas práticas de programação: inicialização de variáveis, validação de dados e mensagens claras para o usuário

## Como Executar

Abra um compilador de C (ex: GCC, Code::Blocks, Dev C++, Visual Studio Code com extensão C).

Copie o código de cada questão em arquivos separados (q1.c, q2.c, … q8.c).

Compile e execute cada programa individualmente.

Siga as instruções exibidas no console para inserir dados.
