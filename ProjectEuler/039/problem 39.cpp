#include<cstdio>

int func(int n);

int main()

{
    
	int tmp,res,max=0;
    
	for (int p=12;p<=1000;++p)
    
	{
        
		tmp=func(p);
        
		if (tmp>max)
        
		{
            
			res=p;
            
			max=tmp;
        
		}
    
	}
    
	printf("%d\n",res);
    
	return 0;

}

int func(int n)

{
    
	int sum=0;
    
	for (int i=1;i<n/3;++i)
    
	for (int j=i+1;j<n/2;++j)
    
	{
        
		int k=n-i-j;
       
		if (i*i+j*j==k*k)
        
			++sum;
    
	}
    
	return sum;

}