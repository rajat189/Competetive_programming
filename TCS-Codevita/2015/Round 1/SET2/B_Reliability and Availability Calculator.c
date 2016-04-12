#include<stdio.h>
 
 
int main()
    {
 
        double N,F,T;
        double fs,fd,fg;
        int c=0;
 
        //printf("\nOperation Availablity:");
        scanf("%lf",&N);
 
        while(c==0)
        {
            if(N<=0)
        {
            printf("\nInvalid input");
            c=0;
        }
        else
        {
            c=1;break;
        }
        //printf("Operation Availablity:");
        scanf("%lf",&N); 
        }
 
        c=0;
        //printf("\nFrequency:");
        scanf("%lf",&F);     
 
        while(c==0)
        {
            if(F<0)
        {
            printf("\nInvalid input");
            c=0;
        }
        else
        {
            c=1;break;
        }
        scanf("%lf",&F); 
        }
 
 
        c=0;
        //printf("\nTotal down time:");
        scanf("%lf",&T); 
 
        while(c==0)
        {
            if(T<=0)
        {
            printf("\nInvalid input");
            c=0;
        }
        else
        {
            c=1;break;
        }
        //printf("\nTotal down time:");
        scanf("%lf",&T); 
        }
 
 
        if(F==0)
        {
            //printf("\nTotal Down Time:0");
            printf("\n0");
            printf("\n0");
            printf("\n100%");
        }
        else
        {
 
            fs=(N-T)/F;
            fd=T/F;
            fg=(fs/(fs+fd))*100;
            printf("\n%d",(int)fs);
            printf("\n%d",(int)fd);
            printf("\n%d%%",(int)fg);
        }
     return 0;   
    }
