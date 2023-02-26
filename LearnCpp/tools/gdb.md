Compile your program with debugging symbols. This can be done by passing the -g flag to gcc or g++:

```sh
gcc -g program.c -o program
```

Start gdb and load your program:

```sh
gdb program
```

Set any breakpoints that you want to use. You can set a breakpoint at a particular line in your program with the break command:
```sh
(gdb) break main.c:10
```

Start the program

```sh
(gdb) run
```

When the program hits a breakpoint, gdb will stop execution and give you a prompt. You can examine the state of the program by using various gdb commands. For example, you can print the value of a variable with the print command:

```
(gdb) print x
```

You can step through your program one line at a time with the next command:

```
(gdb) next
```

When you're done debugging, you can quit gdb with the quit command:

```sh
quit
```
