#include <bits/stdc++.h>
using namespace std;
int main()
{
     double area;
     int l;
     scanf("%d",&l);
     while(l!=0)
     {
         area = (l*l);
         area = area/(2*M_PI);
         printf("%.2lf\n",area);
         scanf("%d",&l);
     }
     return 0;
}