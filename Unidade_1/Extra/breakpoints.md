# Identificando a quantidade de breakpoints

- Sequência
GNU gdb (GDB for MinGW-W64 x86_64, built by Brecht Sanders) 12.1
Copyright (C) 2022 Free Software Foundation, Inc.
License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.
Type "show copying" and "show warranty" for details.
This GDB was configured as "x86_64-w64-mingw32".
Type "show configuration" for configuration details.
For bug reporting instructions, please see:
<https://www.gnu.org/software/gdb/bugs/>.
Find the GDB manual and other documentation resources online at:
    <http://www.gnu.org/software/gdb/documentation/>.

For help, type "help".
Type "apropos word" to search for commands related to "word"...
Reading symbols from main...
(gdb) run
Starting program: C:\Users\Leticia\Desktop\AEDII\main.exe 
[New Thread 10364.0x5ec0]
[Thread 10364.0x5ec0 exited with code 0]
[Inferior 1 (process 10364) exited normally]
(gdb) b fibonacci if x==5
No symbol "x" in current context.
(gdb) b fibonacci if n==5
Breakpoint 1 at 0x7ff634c817de: file fib.c, line 3.
(gdb) info breackpoints
Undefined info command: "breackpoints".  Try "help info".
(gdb) b 12
Breakpoint 2 at 0x7ff634c8182a: file fib.c, line 12.
(gdb) c
The program is not being run.
(gdb) run
Starting program: C:\Users\Leticia\Desktop\AEDII\main.exe
[New Thread 21516.0x1dac]

Thread 1 hit Breakpoint 1, fibonacci (n=5) at fib.c:3
3        if ( n <= 1) {
(gdb) info breackpoints
Undefined info command: "breackpoints".  Try "help info".
(gdb) info breakpoint
Num     Type           Disp Enb Address            What
1       breakpoint     keep y   0x00007ff634c817de in fibonacci at fib.c:3
        stop only if n==5
        breakpoint already hit 1 time
2       breakpoint     keep y   0x00007ff634c8182a in main at fib.c:12
(gdb) delete 2
(gdb) info breakpoints
Num     Type           Disp Enb Address            What
1       breakpoint     keep y   0x00007ff634c817de in fibonacci at fib.c:3
        stop only if n==5
        breakpoint already hit 1 time
(gdb) b main
Breakpoint 3 at 0x7ff634c8181b: file fib.c, line 11.
(gdb) b fibonacci
Note: breakpoint 1 also set at pc 0x7ff634c817de.
Breakpoint 4 at 0x7ff634c817de: file fib.c, line 3.
(gdb) info breakpoints
Num     Type           Disp Enb Address            What
1       breakpoint     keep y   0x00007ff634c817de in fibonacci at fib.c:3
        stop only if n==5
        breakpoint already hit 1 time
3       breakpoint     keep y   0x00007ff634c8181b in main at fib.c:11
4       breakpoint     keep y   0x00007ff634c817de in fibonacci at fib.c:3
(gdb) delete 1
(gdb) delete 3
(gdb) delete 4
(gdb) info breakpoints
No breakpoints or watchpoints.
(gdb) b main
Breakpoint 5 at 0x7ff634c8181b: file fib.c, line 11.
(gdb) b fibonacci
Breakpoint 6 at 0x7ff634c817de: file fib.c, line 3.
(gdb) d
Delete all breakpoints? (y or n) y
(gdb) b fibonacci if n==5
Breakpoint 7 at 0x7ff634c817de: file fib.c, line 3.
(gdb) info breakpoints
Num     Type           Disp Enb Address            What
7       breakpoint     keep y   0x00007ff634c817de in fibonacci at fib.c:3
        stop only if n==5
(gdb) ignore 1000
Second argument (specified ignore-count) is missing.
(gdb) ignore 7 1000
Will ignore next 1000 crossings of breakpoint 7.
(gdb) run
The program being debugged has been started already.
Start it from the beginning? (y or n) y
Starting program: C:\Users\Leticia\Desktop\AEDII\main.exe
[New Thread 6976.0x5d08]
[Thread 6976.0x5d08 exited with code 0]
[Inferior 1 (process 6976) exited normally]
(gdb) info breakpoints
Num     Type           Disp Enb Address            What
7       breakpoint     keep y   0x00007ff634c817de in fibonacci at fib.c:3
        stop only if n==5
        breakpoint already hit 89 times
        ignore next 911 hits
(gdb)
