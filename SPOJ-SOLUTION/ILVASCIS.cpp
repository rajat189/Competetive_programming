#include <iostream>
#include<string>
using namespace std;
   void Sort(int size,int arr[],string name[])
    {
        int temp;
        string emp;
        for(int i=0;i<size;i++)
        {
            for(int j=i+1;j<size;j++)
            {
                if(arr[i] < arr[j])
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                    emp = name[i];
                    name[i] = name[j];
                     name[j] = emp;
                }
            }
 
            cout<<name[i]<<endl;
        }
    }
int main()
{
      int t,members;
        int old[100];
       string name[100];
       cin>>t;
        for(int i=0;i<t;i++){
        cin>>members;
        for(int j=0;j<members;j++){
           cin>>name[j];
            cin>>old[j];
        }
             cout<<"Case #"<<(i+1)<<":"<<endl;
        Sort(members,old,name);
        }
    return 0;
}