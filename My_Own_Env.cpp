#include <sys/types.h>
#include <unistd.h>

#include <stdio.h>

int main (int argc, char* argv[], char* envp [])
{
    int n = 0;
    while(envp[n] != nullptr)
    {
        printf("envp[%d] = '%s'\n", n, envp[n]);
        n++;
    }

    return 0;

}