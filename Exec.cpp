#include <sys/types.h>
#include <unistd.h>

#include <stdio.h>

int main (int argc, char* argv[], char* envp[])
{
   

    int pid = fork();
    switch(pid)
    {
        case -1:
            printf("error\n");
            break;

        case 0:
            printf("Hello from CHILD: pid - %d, ppid - %d\n", getpid(), getppid());
            execvp (argv[1], argv + 1);
            break;

        default:
            printf ("It's a PARENT: pid - %d, ppid - %d\n", getpid(), getppid());
            for (int i = 0; i < 1001; i++)
            {
                printf("%d\n", i);
            }
        
    }
    return 0;
}