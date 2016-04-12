#include <iostream>
using namespace std;
char dg[10000][10000];
int dg1[10000];
int dg11;
int dh(int, int, int, int);
int main() {
  int T,i,h,dg136,j,k,dh12dh12,dg13;
 
  //cout<<"Enter the number of test cases:";
  cin>>T;
  if(T>=1 && T<=10)
  {
  for(i=0;i<T;i++)
  {
   dg13=0;
   dh12dh12=0;
   cin>>h>>dg136;
   if(h>=1 && dg136>=1 && h<=1000 && dg136<=1000)
   {
     for(j=0;j<h;j++)
     {
        for(k=0;k<dg136;k++)
        {
          cin>>dg[j][k]; 
        }
     }
     for(j=0;j<h;j++)
     {
        for(k=0;k<dg136;k++)
        {
          if(dg[j][k]=='#')
          {
            dg13=dg13+1;
            dg11=1;
            dg1[dh12dh12]=dh(j,k,h,dg136);
            dh12dh12++;
          }
        }
     }
     cout<<dg13<<"\n";
 
     int dg1361,temp;
 
  for (i=0; i < dg13; i++)
  {
      dg1361 = i;
 
    for (int j=i+1; j < dg13; j++)
    {
 
    if (dg1[j] < dg1[dg1361])
                   dg1361=j;
    }
            if (dg1361 != i)
            {
                 temp = dg1[i];
                 dg1[i] = dg1[dg1361];
                 dg1[dg1361] = temp;
            }
  }
 
 
     for(i=0; i<dg13;i++)
      cout<<dg1[i]<<" ";
   }
   else
    cout<<"array size exceeds";
 
  }
  }
  else
   cout<<"test cases exceeds";
  return 0;
}
int dh(int dh12, int dh1, int dh12m, int dh1m)
{
  dg[dh12][dh1]='c';
  if(dh12>0)
  {
   if(dg[dh12-1][dh1]=='#')
   {
    dg11++;
    dh((dh12-1),dh1,dh12m,dh1m);
   }
  }
  if(dh1>0)
  {
   if(dg[dh12][dh1-1]=='#')
   {
   dg11++;
    dh(dh12,(dh1-1),dh12m,dh1m);
   }
  }
  if(dh12<dh12m)
  {
   if(dg[dh12+1][dh1]=='#')
   {
   dg11++;
    dh((dh12+1),dh1,dh12m,dh1m);
   }
  }
  if(dh1<dh1m)
  {
   if(dg[dh12][dh1+1]=='#')
   {
   dg11++;
    dh(dh12,(dh1+1),dh12m,dh1m);
   }
  }
  if(dh12>0 && dh1>0)
  {
   if(dg[dh12-1][dh1-1]=='#')
   {
   dg11++;
    dh((dh12-1),(dh1-1),dh12m,dh1m);
   }
  }
  if(dh12<dh12m && dh1<dh1m)
  {
   if(dg[dh12+1][dh1+1]=='#')
   {
   dg11++;
    dh((dh12+1),(dh1+1),dh12m,dh1m);
   }
  }
  if(dh12>0 && dh1<dh1m)
  {
   if(dg[dh12-1][dh1+1]=='#')
   {
   dg11++;
    dh((dh12-1),(dh1+1),dh12m,dh1m);
   }
  }
  if(dh12<dh12m && dh1>0)
  {
   if(dg[dh12+1][dh1-1]=='#')
   {
   dg11++;
    dh((dh12+1),(dh1-1),dh12m,dh1m);
   }
  }
  return dg11;
}
