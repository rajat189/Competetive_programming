#include<cstdio>
#include<cstring>
#include<cmath>
 
int main()
{
    int T, l;
    long L;
    char s[16];
    int temp1[16], temp2[16];
    scanf("%d",&T);
    while(T--)
    {
        scanf("%s",s);
        l=strlen(s);
        L=pow(2,l);
        int m=-1,c;
        for(long i=0;i<L;i++)
        {
            int j;
            long n=i;
            c=0;
            for(j=0;j<l;j++)
                temp1[j]=s[j]-'0';
            j=0;
            while(n>0)
            {
                temp2[j++]=n&1;
                c+=n&1;
                n>>=1;
            }
            for(;j<l;j++)
                temp2[j]=0;
            for(j=0;j<l;j++)
            {
                if(temp2[j]==1)
                {
                    temp1[j]=1-temp1[j];
                    if(j-1>=0)
                        temp1[j-1]=1-temp1[j-1];
                    if(j+1<l)
                        temp1[j+1]=1-temp1[j+1];
                }
            }
            for(j=0;j<l;j++)
                if(temp1[j])
                    break;
            if(j==l&&(m==-1||m>c))
                m=c;
        }
        printf("%d\n",m);
    }
 
    return 0;
}