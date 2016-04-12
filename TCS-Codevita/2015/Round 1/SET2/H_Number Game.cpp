#include<iostream>
using namespace std;
int main()
{
  int N,a[100],i,chak,t=0,tipa=0,fh,fg;
     std::cin>>N;
 
    for(i=0;i<N;i++)
  {
      std::cin>>a[i];
  }
  for(i=0;i<N;i++)
  {
    for(chak=1;chak<N;chak++)
    {
      if(a[i]>a[chak])
      {
        tipa=a[i];
        a[i]=a[chak];
        a[chak]=tipa;
      }
    }
  }
  fg=0;
 
  for(i=0;i<N;i++)
  {
    t=a[i];
        while( a[i] != 1)
    {
      fh=1;
      for(chak=2;chak<t;chak++)
      {
        if(t%chak==0)
        {
          a[i]=t/chak;
          chak=t;
          t = a[i];
          fh=0;
        }
      }
 
      if(fh==1)
      {
        a[i]=1;
      }
      fg++;
    }	
  }
  if(fg%2==0)
  {
    std::cout<<"JASBIR";
  }
  else
  {
    std::cout<<"AMAN";
  }
  return 0;
}
