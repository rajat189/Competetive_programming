#include <ios>
using namespace std;

int main()
{
  int t,a,b,p,q,g,m;
  scanf("%d", &t);
  while(t--)
  {
    scanf("%d %d",&a,&b);
    p=q=-1;
    while(a--)
    {
      scanf("%d",&g);
      if(g>p)p=g;
    }
    while(b--)
    {
      scanf("%d",&m);
      if(m>q)q=m;
    }
    if(p>=q)printf("Godzilla\n");
    else printf("MechaGodzilla\n");
  }
  return 0;
}