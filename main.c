#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 0, b = 1, num, sequencia;
    printf("Digite um numero qualquer: ");
    scanf("%d", &num);

    if (num == 0 || num == 1) {
        printf("Esse numero pertence a sequencia de Fibo.\n");
}
    else {
        sequencia = a + b;
        while (sequencia < num){
        a = b;
        b = sequencia;
        sequencia = a + b;
}
    if (num == sequencia) {
        printf("O numero digitado pertence a sequencia de Fibo\n");
}
    else {
        printf("O numero digitado nao pertence a sequencia de Fibo\n");
}
    system("pause");
    return 0;
}
}
