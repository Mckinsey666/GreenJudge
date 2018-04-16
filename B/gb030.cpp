#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main()
{
    int n,m=0;
    while(cin>>n>>m)
    {
        int length[101]={};
        int points[101]={};
        int content[1001]={};

        int l,p=0;
        for(int i=1;i<=n;++i)
        {
            cin>>l>>p;
            length[i]=l,points[i]=p;
        }

        for(int i=1;i<=n;++i)//Classic Knapsack problem. Case 1.
            for(int j=m;j>=0;--j)
            {
                if(j>=length[i])
                    content[j]=max(content[j],content[j-length[i]]+points[i]);
            }
        cout<<content[m]<<endl;
    }
    return 0;
}
