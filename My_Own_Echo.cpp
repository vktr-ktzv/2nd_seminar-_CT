#include <sys/types.h>
#include <unistd.h>

#include <stdio.h>

int main (int argc, char* argv[], char* envp [])
{
    for (int i = 0; i < argc; i++)
    {
        printf("argv[%d] = %s\n", i, argv[i]);
    }

    return 0;
}