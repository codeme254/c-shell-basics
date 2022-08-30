# c shell basics

contains everything you need to know to write your own shell in c
## PID & PPID

A process is an instance of an executing program, that has a unique process ID. This process ID is used by many functions and system calls to interact with and manipulate processes. In order to retrieve the current process’ ID, you can use the system call getpid (man 2 getpid):

## getppid()
This method returns the id of the parent process, the id of the parent process will always be the same

## shell script that prints the maximum value a process id can be
```bash
#!/bin/bash
cat /proc/sys/kernel/pid_max
```

## Arguments
The command line arguements are passed through the main function:
```c
int main(int ac, char **av)
```
__av__ is a **NULL** terminated array of strings

**ac** is the number of items in **av**

**av[0]** usually contains the name used to invoke the current program. **av[1]** is the first arguement of the program, **av[2]** the second and so on.

