# Exercicio                                                                                            18/07/2024

Considere os seguintes tempos para o algoritmo abaixo
- Chamada Recursiva: 2 ns
- Retorno de chamadas recursivas: 1 ns
- Divisão e multiplicação: 1.5 ns

```cpp
int f(int n){
  if (n==0){
    return 1;
  }
  return f(n-1) +1/f(n-1);
}
```

Modifique o código e/ou use o GDB para calcular os tempos deste algoritmo para n=20

#### Notes
```c
#include <stdio.h>

int f(int n){
  if(n == 0){
    return 1;
  }

  int x = f(n-1);
  int y = 1/f(n-1);
  return f(n -1) + 1/f(n - 1);
  return x + y;
}

int main(void){
  f(20);
  return 0;
}
```
Realizou-se a modificação por meio de acrescimos de variaveis para que seja possivel realizar o cálculo da complexidade por meio do tempo (ns). 
