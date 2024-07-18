#include <stdio.h>

int operacaoMatematica(int a, int b){
    int r;

    while(b != 0){
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main(void){
    int num1, num2;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    int res = operacaoMatematica(num1, num2);

    printf("A operação de %d e %d é: %d\n", num1, num2, res);

    return 0;
}

/*

a) Execute o algoritmo em modo de depura¸c˜ao.

b) Descubra através da depuração, qual a maior profundidade de (frames) esse código alcança.
  
c) Descubra o que ocorre quando um parâmetro é 0.

*/
