#include <iostream>
    #include<vector>
    #include<algorithm>
    using namespace std;
 
    int main() {
    	// your code goes here
    	int T,N,M,x,y,max=0,sum,i,j;
    	vector<int>::iterator v;
    	cin>>T;
    	while(T--)
    	{
    		max=0;
    		cin>>N>>M;
    		vector<int> adj[N];
    		for(i=0;i<N;i++)
    		adj[i].push_back(i);
    		for(i=0;i<M;i++)
    		{
    			cin>>x>>y;
    			x--;
    			y--;
    			adj[x].push_back(y);
    			adj[y].push_back(x);
    		}
    		int ar[N];
    		for(i=0;i<N;i++)
    		cin>>ar[i];
    		for(i=0;i<N;i++)
    		{
    			sum=0;
    			v=adj[i].begin();
    			while(v!=adj[i].end())
    			{
    				sum+=ar[*v];
    				v++;
    			}
    			if(sum>max)
    			max=sum;
    		}
    		cout<<max<<"\n";
 
    	}
    	return 0;
    }