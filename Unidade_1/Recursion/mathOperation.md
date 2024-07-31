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
