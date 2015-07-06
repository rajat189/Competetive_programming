#include <cstdio>

int main()
{
    int ans=0,tmp=1;
    int n[]={31,28,31,30,31,30,31,31,30,31,30,31};
    for(int year=1901;year<=2000;year++){
        for(int month=0;month<12;month++){
            if(year%4==0&&month==1){
                for(int day=1;day<=29;day++){
                    tmp++;
                    if(tmp==7){
                        if(day==1)ans++;
                        tmp=0;
                    }
                }
            }
            else{
                for(int day=1;day<=n[month];day++){
                    tmp++;
                    if(tmp==7){
                        if(day==1)ans++;
                        tmp=0;
                    }
                }
            }
        }
    }
    printf("%d\n",ans);
return 0;
}
