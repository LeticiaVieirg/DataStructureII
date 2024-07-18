# include <stdio.h>

int fibonacci (int n ) {
	if (n <= 1) {
		return n ;
  }
  else {
	  return fibonacci ( n - 1) + fibonacci ( n - 2) ;
  }
}
 
int main () {
	fibonacci (15) ;
}

/*
a) Depure o c´odigo para descobrir quantas vezes o fibonacci(5) ´e calculado (requisitado).
R:  
b) Descubra atrav´es da depura¸c˜ao, qual a maior quantidade de n´ıveis (frames) esse c´odigo alcan¸ca.
R: 
c) Depure o c´odigo at´e o momento que o primeiro fibonacci(14) ´e calculado e o execut´avel ir´a come¸car
a calcular o fibonacci(13).
R:
*/
