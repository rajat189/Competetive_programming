// https://www.hackerearth.com/code_hunt_13/algorithm/indexing-the-palindrome/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int t;
    scanf("%d\n",&t);
    
    while(t--)
    {
        int len,i,ans=1;
        char *string;
        string = (char*)malloc(sizeof(char)*100006);
        scanf("%s\n",string);
        
        len=strlen(string);
        for(i=0;i<(len/2)+1;i++)
        {
            if(string[i]==string[len-1-i])
                continue;
            if(string[i+1]==string[len-1-i] && string[i+2]==string[len-2-i])
            {
                ans=0;
                printf("%d\n",i);
                break;
            }
            else if(string[i]==string[len-2-i] && string[i+1]==string[len-3-i])
            {
                ans=0;
                printf("%d\n",len-1-i);
                break;
            }

        }
        if(ans==1)
            printf("-1\n");
        
        free(string);
    }    
    return 0;
}