#include <stdio.h>
int dh1it(int df1);
int dh1it1(int df1);
void dh12(int i,int j);
void dh(int i,int j);
void df12345(int i,int j);
 
void df123451(int i,int j);
void df123452(int i,int j);
 
char a[100];
int main(void) 
{
int N,i,j;
scanf("%d",&N);
  scanf("%d%d",&i,&j);
  while(N--)
  {
scanf("%s",a);		
if(a[0]=='A')
  dh12(i,j);
if(a[0]=='C')
  dh(i,j);
if(a[1]=='W'&&a[2]=='\0')
df12345(i,j);
if(a[1]=='W'&&a[2]!='\0'&&a[2]!='W')
df123451(i,j);
if(a[1]=='W'&&a[2]=='W')
df123452(i,j);
 
}
 
 
  return 0;
}
int dh1it(int df1)
{
  int i,df1234=0;
  for(i=df1;i>0;i/=10)
  df1234++;
  if (df1234%2==0)
  return df1234;
  else
  return(df1234+1);
}
int dh1it1(int df1)
{
  int i,df1234=0;
int l=(int) a[2]-48;
  for(i=df1;i>0;i/=10)
{
  if(i%10==l)
  df1234++;
}
l=(int) a[1]-48;
if(df1234>=l)
return 1;
else
return 0;
}
void dh12(int i,int j)
{
  int df1,df,df12=10,l,df1234=0,flag=0;
  for(df1=i;df1<=j;df1++)
  {
    if(df1>100)
    {
      int dh1=dh1it(df1);
    df12=10;
    df1234=0;
    for (df=df1;df>0;df/=df12)
    {
      int l=(int)a[1]-48;
      if(df%10==l&&df12==10)
           df12=df12*10;
           if (df12==100)
           {
             if(df%10==l)
             df1234++;
           }
    }
    if(dh1/2==df1234)
    flag++;
  }
  }
  printf("%d",flag);
}
void dh(int i,int j)
{
  int df1,df,df12=10,l,df1234=0,flag=0,dh1;
  for(df1=i;df1<=j;df1++)
  {
      int l=(int)a[2]-48;
    for (df=df1;df>0;df/=df12)
    {
      if(df%10==l)
      {
         dh1=dh1it1(df);
          break;
           }
    }
    if(dh1)
    df1234++;
 
  }
 
  printf("\n%d",df1234);
}
void df12345(int i,int j)
{
  int df1,df,df12,df1234=0;
  for(df1=i;df1<=j;df1++)
  {
    df12=10;
    for (df=df1;df>0;df/=df12)
    {
      int l=(int)a[0]-48;
      if(df%10==l&&df/10==0&&df1>9)
      {
             df1234++;
           break;
      }
 
  }
  }
  printf("\n%d",df1234);
}
void df123451(int i,int j)
{
  int df1,df,df12,df1234=0,df123=0;
  for(df1=i;df1<=j;df1++)
  {
    df12=10;
    df123=0;
    for (df=df1;df>0;df/=df12)
    {
      int l=(int)a[0]-48;
      int m=(int)a[2]-48;
      if(df%10==l&&df1>9&&df123/10==m)
      {
          df1234++;
           break;
      }
 
     df123=(df123*10)+df%10;
      }
  }
  printf("\n%d",df1234);
}
void df123452(int i,int j)
{
  int df1,df,df12,df1234=0,df123=0;
  for(df1=i;df1<=j;df1++)
  {
    df12=10;
    df123=0;
    for (df=df1;df>0;df/=df12)
    {
      int l=(int)a[0]-48;
      if(df%10==l&&df1>99&&df/10==0)
      {
 
          df1234++;
           break;
      }
 
     df123=(df123*10)+df%10;
      }
  }
  printf("\n%d",df1234);
}
