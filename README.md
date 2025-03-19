
# Fibonacci  🔢

**Como surgiu? 💭** 

Este programa foi desenvolvido como parte de um desafio técnico em um processo seletivo. O objetivo do desafio era criar uma solução que verificasse se um número fornecido pelo usuário pertence à sequência de Fibonacci. A sequência de Fibonacci é uma série de números onde cada número subsequente é a soma dos dois anteriores, começando com 0 e 1. Assim, os primeiros números dessa sequência são:

    0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...

O programa recebe um número como entrada do usuário e, em seguida, verifica se esse número aparece na sequência de Fibonacci. Para isso, ele realiza os cálculos necessários até alcançar o número inserido ou identificar que ele não faz parte da sequência.

**Como Funciona: 📝** 

- O programa começa com os dois primeiros números da sequência de Fibonacci, que são 0 e 1. Caso o número inserido seja 0 ou 1.
    
    ```
    int a = 0, b = 1, num, sequencia;
    printf("Digite um numero qualquer: ");

    if (num == 0 || num == 1) {
        printf("Esse numero pertence a sequencia
        de Fibo.\n");
        }
    ```
    

- Em seguida, ele gera os próximos números somando os dois anteriores, até alcançar o número inserido ou ultrapassá-lo.


    ```
    sequencia = a + b;
        while (sequencia < num){
        a = b;
        b = sequencia;
        sequencia = a + b;
    ```

- Se o número inserido for encontrado na sequência, o programa informa que ele faz parte da sequência de Fibonacci. Caso contrário, ele informa que o número não pertence à sequência.

    ```
    if (num == sequencia) {
        printf("O numero digitado 
        pertence a sequencia de Fibo\n");
        }
    ```
    
    ```
    else {
        printf("O numero digitado nao
        pertence a sequencia de Fibo\n");
        }
    ```

