# Sistema Inteligente de Monitoramento Industrial

## 1. Identificação

Kaylane da silva mariano
Programação em C
 Profa. Karla Sartin
Sistema Inteligente de Monitoramento Industrial



O objetivo do programa é monitorar temperaturas de um sistema industrial, verificando se os valores ultrapassam um limite definido pelo usuário. O programa calcula a média, a maior e a menor temperatura e encerra o monitoramento quando são registradas três temperaturas consecutivas acima do limite.



O usuário informa um limite de temperatura, que é validado pelo programa.

Em seguida, o programa realiza leituras de temperatura enquanto não ocorrerem três temperaturas consecutivas acima do limite.

Valores inválidos são tratados e uma mensagem é apresentada ao usuário solicitando uma nova entrada.

Quando uma temperatura ultrapassa o limite, o contador de temperaturas consecutivas é aumentado.

Quando uma temperatura fica dentro do limite, a contagem de temperaturas consecutivas é zerada.

O programa encerra automaticamente quando três temperaturas consecutivas ultrapassam o limite definido.

Ao final, é apresentado um relatório contendo a quantidade de leituras válidas, a média, a maior e a menor temperatura.

## 4. Estruturas de repetição utilizadas

### do...while

O `do...while` é utilizado para solicitar e validar o limite de temperatura. Dessa forma, o usuário precisa informar o limite pelo menos uma vez.

### while

O `while` é utilizado para realizar o monitoramento das temperaturas. As leituras continuam enquanto não forem registradas três temperaturas consecutivas acima do limite.

## 5. Como executar

Para compilar o programa:

```bash
gcc monitoramento.c -o monitoramento
