#include<stdio.h>
#include<stdlib.h>
#define gc() getchar()
inline int readInt()
{
	int ret=0;
	bool negg=false;
	char c;
	c=gc();
	while((c<'0' || c>'9') && c!='-')
	{
		c=gc();
	}
	if(c=='-')
	{
		negg=true;
		c=gc();
	}
	while(c>='0' && c<='9')
	{
		ret=ret*10+(c-'0');
		c=gc();
	}
	if(negg)
	{
		ret=-ret;
	}
	return ret;
}//=readInt();
int bsearch1(int array[], int start, int end, int data){
        
                if(start > end)
                        return -1;

                int middle = start + end ;
                                middle = middle / 2 ;

                if(array[middle]<data)
                        return bsearch1(array,middle+1,end,data);

                if(array[middle]>data)
                        return bsearch1(array,start,middle-1,data);
                


	while((middle!=-1)&&(array[middle]==data)){

		middle--;

	}

return middle+1;        
}


int main(){

	int n,q,query;

	n=readInt();q=readInt();

	int *array = (int*) malloc (n*sizeof(int));

	int _n;

	for(_n = 0;_n<n;_n++)
		array[_n]=readInt();

	while(q>0){
		
		query=readInt();
		printf("%d\n",bsearch1(array,0,n,query));
	q--;
	}

return 0;
}


