#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T,variable = 0;
    char *cmd = malloc(sizeof(char)*3);

    scanf("%d",&T);
    while(T--)
    {
        scanf("%s",cmd);
        if(cmd[0] == '-' || cmd[2] == '-')
            variable--;
        if(cmd[0] == '+' || cmd[2] == '+')
            variable++;
    }   

    printf("%d\n",variable);
    free(cmd);
    return 0;
}
