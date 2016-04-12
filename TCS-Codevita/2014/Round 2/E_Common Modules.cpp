#include <iostream>

using namespace std;

int main()
{
    int N,I,mm1,mm2,fin[1440]={1};
    int **a=new int *[5000];
    for(int i=0;i<5000;i++)
        a[i]=new int[1440];
    for(int i=0;i<5000;i++)
        for(int j=0;j<1440;j++)
            a[i][j]=1;
    char str1[6],str2[6];
    cin>>N;
    cin>>I;
    while(I!=-1)
    {
        cin>>str1;
        mm1=(((((int)str1[0])-48)*10+((int)str1[1]-48))*60)+(((int)str1[3]-48)*10+((int)str1[4]-48));
        cin>>str2;
        mm2=(((((int)str2[0])-48)*10+((int)str2[1]-48))*60)+(((int)str2[3]-48)*10+((int)str2[4]-48));
        for(int i=mm1;i<mm2;i++)
            a[I][i]=0;
        cin>>I;
    }
        int flag=0,ctr=0;
    for(int i=0;i<1440;i++)
    {
        for(int j=0;j<N;j++)
        {
            fin[i]=fin[i]*a[j][i];
        }
    }
    int ma,s,e;
    for(int i=0;i<1440;i++)
        cout<<"\t"<<fin[i];

    return 0;
}
