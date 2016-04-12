#include<stdio.h>



int main()
{
    int i,j,k,flag1;
    int tot_stu,conn;
    int adj[50][50];   //initial
    int flag[50];
    
    for(i=0;i<50;i++)
    {
        flag[i]=5;    //random
        for(j=0;j<50;j++)
            adj[i][j]=3;
    }
    
    scanf("%d %d",&tot_stu,&conn);
    
    
    
    for(k=0;k<conn;k++)
    {
        scanf("%d %d",&i,&j);
        adj[i-1][j-1]=adj[j-1][i-1]=1;   //already friends
    }
    
    if(tot_stu==2)
    {
        printf("Yes");
        return 0;
    }
    
    for(k=0;k<tot_stu;k++)
        adj[k][k]=2;  //diagonal=2
    
    for(i=0;i<tot_stu;i++)
    {
        flag1=0;
        for(j=0;j<tot_stu;j++)
        {
            if(adj[i][j]==3)
            {
                flag1=1;
                for(k=0;k<tot_stu;k++)
                {
                    if(adj[k][j]==3)
                        adj[k][j]=4;
                }
            }
        }
        flag[i]=flag1;
    }
    
    for(i=0;i<tot_stu;i++)
    {
        for(j=0;j<tot_stu;j++)
            printf("%d \t",adj[i][j]);
        printf("\n");
    }

    for(i=0;i<50;i++)
    {
        if(flag[i]==0)
        {
            printf("No");
            return 0;
        }
    }
    
    printf("Yes");
    
    return 0;
}