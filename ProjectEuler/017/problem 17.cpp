#include<cstdio>
    int ones[] = {0, 3, 3, 5, 4, 4, 3, 5, 5, 4};
    int teens[] = {3, 6, 6, 8, 8, 7, 7, 9, 8, 8};
    int tens[] = {0, 0, 6, 6, 5, 5, 5, 7, 6, 6};
    int main()
    {
        int sum = 0;
        for(int i=1; i<1000; i++)
        {
            int t=i;
            if(i>=100 && i<1000)
            {
                sum+=ones[(int)i/100]+7;
                t=(int)i-((int)(i/100)*100);
                if(t)sum+=3;
            }
            if(t<10 && t>0)
            {
                sum+=ones[t];
            }else if(t>=10&&t<20)
            {
                sum+=teens[t%10];
            }else if(t>=20&&t<100)
            {
                sum+=ones[t%10]+tens[(int)t/10];
            }
        }
        sum += 11; 
        printf("sum: %d", sum);
        return 0;
    }