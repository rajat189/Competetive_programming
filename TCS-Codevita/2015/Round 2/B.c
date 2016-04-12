#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAX_NAME_SZ 10000
 
int main(void){
            unsigned int df = 0, c = 0, i, j = 0, k, l, df1234 = 0;
 
    char df123[50][100], str1[200], ptr1[50][100], cmdf123[500],ch[1000];
    int n,s;
    scanf("%d",&n);
 
while(n--)
{char df1[1000];
df1234=0;df=0;c=0;k=0;
 
 fgets (df1, MAX_NAME_SZ, stdin);
    if ((strlen(df1)>0) && (df1[strlen (df1) - 1] == '\n'))
        df1[strlen (df1)-1 ] = '\0';
 
 fgets (df1, MAX_NAME_SZ, stdin);
    if ((strlen(df1)>0) && (df1[strlen (df1) - 1] == '\n'))
        df1[strlen (df1)-1 ] = '\0';
 
   for (i = 0;i < strlen(df1);i++)
{
  df1[i]=(char)tolower(df1[i]);
}
 
    for (i = 0;i < strlen(df1);i++)
 
    {
        if ((df1[i] == ' '))
 
        {
 
            df1234++;
 
        }
 
    }
 
    for (i = 0, j = 0, k = 0;j < strlen(df1);j++)
 
    {
 
        if ((df1[j] == ' ')||(df1[j] == 44)||(df1[j] == 46))
 
        {
 
            df123[i][k] = '\0';
 
            i++;
 
            k = 0;
 
        }
 
        else
 
             df123[i][k++] = df1[j];
 
    }
 
    for (i = 0;i < 3;i=i+2)
 
    {
 
        for (j = i + 2;j <= df1234;j=j+2)
 
        {
 
            if ((strcmp(df123[i], df123[j]) > 0))
 
            {
 
                strcpy(cmdf123, df123[i]);
 
                strcpy(df123[i], df123[j]);
 
                strcpy(df123[j], cmdf123);
 
            }
 
        }
 
    }
    for (i = 1;i < 3;i=i+2)
 
    {
 
        for (j = i + 2;j <= df1234;j=j+2)
 
        {
 
            if ((strcmp(df123[i], df123[j]) > 0))
 
            {
 
                strcpy(cmdf123, df123[i]);
 
                strcpy(df123[i], df123[j]);
 
                strcpy(df123[j], cmdf123);
 
            }
 
        }
 
    }
 
    for (i = 0;i <= df1234;i++)
 
    {
 
        printf("%s ", df123[i]);
 
    }
printf("\n");
}
        return 0;
}
