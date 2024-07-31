## Questões: 

a) Execute o algoritmo em modo de depuracao.
b) Descubra atraves da depuracao, qual a maior profundidade de (frames) esse codigo alcança.
> (gdb) bt
> 
> #0  main () at unidade1\mat.c:29

c) Descubra o que ocorre quando um parametro e 0.

```
(gdb) set var num1=0
(gdb) c   
Continuing.
 Digite o primeiro numero : 0
 Digite o segundo numero : 3
A operacao de 0 e 3 e: 3
[Thread 12284.0x5438 exited with code 0]
[Inferior 1 (process 12284) exited normally]
```

d) Descubra o que ocorre quando os dois parˆametros apresentados s˜ao iguais e maiores que 1.
- O programa pede para que eu digite novamente os valores que eu atribui as variaveis no teminal. - Ele inicializa por meio da solicitação para digitar os valores e mostra o resultado.
```
(gdb) b main
Breakpoint 1 at 0x140001812: file unidade1\mat.c, line 19.
(gdb) r
Starting program: C:\Users\Leticia\Desktop\AEDII\main.exe 
[New Thread 23872.0x2130]

Thread 1 hit Breakpoint 1, main () at unidade1\mat.c:19
19          printf (" Digite o primeiro numero : ") ;
(gdb) set var num1=3
(gdb) set var num2=3
(gdb) c
Continuing.
 Digite o primeiro numero : 3
 Digite o segundo numero : 3
A operacao de 3 e 3 e: 3
[Thread 23872.0x2130 exited with code 0]
[Inferior 1 (process 23872) exited normally]
```

- Outro teste com valores diferentes
``` terminal 
(gdb) b main
Breakpoint 1 at 0x140001812: file unidade1\mat.c, line 19.
(gdb) r
Starting program: C:\Users\Leticia\Desktop\AEDII\main.exe
[New Thread 5804.0x239c]

Thread 1 hit Breakpoint 1, main () at unidade1\mat.c:19
19          printf (" Digite o primeiro numero : ") ;
(gdb) n
 Digite o primeiro numero : 20      scanf ("%d", & num1 ) ;
(gdb) set var num1=3
(gdb) set var num2=6
(gdb) c
Continuing.

q
 Digite o segundo numero : A operacao de 3 e 6 e: 3
[Thread 5804.0x239c exited with code 0]
Reading symbols from main...
(gdb) b main
Breakpoint 1 at 0x140001812: file unidade1\mat.c, line 19.
(gdb) r
Starting program: C:\Users\Leticia\Desktop\AEDII\main.exe
[New Thread 5804.0x239c]

Thread 1 hit Breakpoint 1, main () at unidade1\mat.c:19
19          printf (" Digite o primeiro numero : ") ;
(gdb) n
 Digite o primeiro numero : 20      scanf ("%d", & num1 ) ;
(gdb) set var num1=3
(gdb) set var num2=6
(gdb) c
Continuing.

q
 Digite o segundo numero : A operacao de 3 e 6 e: 3
[Thread 5804.0x239c exited with code 0]
Starting program: C:\Users\Leticia\Desktop\AEDII\main.exe
[New Thread 5804.0x239c]

Thread 1 hit Breakpoint 1, main () at unidade1\mat.c:19
19          printf (" Digite o primeiro numero : ") ;
(gdb) n
 Digite o primeiro numero : 20      scanf ("%d", & num1 ) ;
(gdb) set var num1=3
(gdb) set var num2=6
(gdb) c
Continuing.

q
 Digite o segundo numero : A operacao de 3 e 6 e: 3
[Thread 5804.0x239c exited with code 0]
(gdb) set var num1=3
(gdb) set var num2=6
(gdb) c
```



### Depurando o codigo
```
(gdb) b main
Breakpoint 1 at 0x140001812: file unidade1\mat.c, line 19.
(gdb) run

For help, type "help".
Type "apropos word" to search for commands related to "word"...
Reading symbols from main...
(gdb) b main
Breakpoint 1 at 0x140001812: file unidade1\mat.c, line 19.
(gdb) run
Reading symbols from main...
(gdb) b main
Breakpoint 1 at 0x140001812: file unidade1\mat.c, line 19.
(gdb) run
(gdb) b main
Breakpoint 1 at 0x140001812: file unidade1\mat.c, line 19.
(gdb) run
(gdb) run
Starting program: C:\Users\Leticia\Desktop\AEDII\main.exe
[New Thread 14708.0x5ca0]

Thread 1 hit Breakpoint 1, main () at unidade1\mat.c:19
19          printf (" Digite o primeiro numero : ") ;
(gdb) s
 Digite o primeiro numero : 20      scanf ("%d", & num1 ) ;
(gdb) n

s
22          printf (" Digite o segundo numero : ") ;
(gdb) n
 Digite o segundo numero : 23       scanf ("%d", & num2 ) ;
(gdb) s
25          int res = operacaoMatematica ( num1 , num2 ) ;
(gdb) n
27          printf ("A operacao de %d e %d e: %d\n", num1 , num2 , res ) ;
(gdb) s
A operacao de 0 e 0 e: 0
29          return 0;
(gdb) bt
#0  main () at unidade1\mat.c:29
(gdb) frame 0
#0  main () at unidade1\mat.c:29
29          return 0;
(gdb) fin
"finish" not meaningful in the outermost frame.
(gdb) p num1
$1 = 0
(gdb) p num2
$2 = 0
(gdb) l
24
25          int res = operacaoMatematica ( num1 , num2 ) ;
26
27          printf ("A operacao de %d e %d e: %d\n", num1 , num2 , res ) ;
28
29          return 0;
30      }
(gdb) set 
Argument required (expression to compute).
(gdb) set num1
warning: Expression is not an assignment (and might have no effect)
(gdb) info locals
num1 = 0
num2 = 0
res = 0
(gdb) q
```
