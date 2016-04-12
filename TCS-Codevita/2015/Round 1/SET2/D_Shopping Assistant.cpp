#include <iostream>
#include <string>
#include <map>
#include <cstdlib>
#include <fstream>
#include <cstdio>
using namespace std;
 
int main()
{
	string s, product, temp;
	int i;
	map<char, int> catalog;
	cin>>s;
	freopen(s.c_str(), "r",stdin);
	ifstream infile(s.c_str());
	int cost = 0, diff_hundred, diff_intra, flag=1;
	while(getline(infile, temp))
	{
		if(temp[0] == 'P')
		{
			i = atoi((temp.substr(2)).c_str());
			string no = temp.substr(2);
			if(no.find('7')!=string::npos || no.find('8')!=string::npos || no.find('9')!=string::npos)
			{
				cout<<"Invalid Input"<<endl;
 
				flag = 0;
				break;
			}
			else{
				diff_hundred = i/100;
				diff_intra  = i%100;
				i -= diff_hundred*51;
				i -= (diff_intra/10)*3;
				cout<<"Product Name: "<<temp.substr(0,2)<<endl;
				cout<<"Price: "<<i<<endl;
				catalog[temp[1]] = i;
			//cout<<catalog[temp[1]]<<endl;	
			}
 
 
		}
		if(temp[0] == 'B')
		{
			string s;
			s += temp[2];
			s += temp[3];
			i = atoi((temp.substr(4)).c_str());
			//cout<<"i "<<i<<endl;
			cost += catalog[temp[3]] * i;
			cout<<"Item purchased: "<<s<<endl; 
			cout<<"Quantity: "<<i<<endl;
		}
	}
	if(flag){
	if(cost)
		cout<<"Total Cost Incurred For Alicia: "<<cost;
 	else cout<<"No Items are Added to Cart"<<endl;
	}
	return 0;
}
