#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
      int f;
      int b;
      int t;
      int fd;
      int bd;
      string ans;
      cin>>f>>b>>t>>fd>>bd;
      bd=bd*(-1);
      if(f>b||f<b)
      {
         int curpos=0;
         int nans=0;
         int fcount=0,bcount=0;
         int flag=0;
         while(1)
         {  if(flag==1||flag==2)break;
            for(int i=0;i<f;i++)
            {
               curpos+=1;
               nans+=t;
               //cout<<curpos<<" "<<nans<<endl;
               if(curpos==fd||curpos==bd){flag=1;break;}
            }if(flag==1)break;
            for(int i=0;i<b;i++)
            {
               curpos-=1;
               nans+=t;
               //cout<<curpos<<" "<<nans<<endl;
               if(curpos==fd||curpos==bd){flag=2;break;}
            }
         }if(flag==1){ans="F";}
         else{
               ans="B";nans=abs(nans);
             }
         cout<<nans<<" "<<ans<<endl;
      }
      else if(f==b&&fd>f)
      {
         cout<<"No Ditch\n";
      }
      else if(f==b&&fd<=f)
      {
         int nans;
         nans=fd*t;
         cout<<nans<<" "<<"F"<<endl;
      }
   }
}
 
