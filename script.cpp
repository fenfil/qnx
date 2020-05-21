#include<stdlib.h>
#include<stdio.h>
#include<sys/resource.h>
int main(int argc, char **argv, char **env)
{
    struct rusage rusage;
    printf("\nProcess Information:\n");
    printf("Process name=\t\t%s\n", argv[0]);
    printf("Process ID (PID)=\t<%d>\n", getpid());
    printf("Parent's process ID (PPID)=\t<%d>\n", getppid());
    printf("Process priority= \t< %d >\n", getprio(0));
    return EXIT_SUCCESS;
}
