#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n,m=0;
    while(cin>>n>>m)
    {
        vector<int>people(n+1,0);
        for(int i=0;i<m;++i)
        {
            int k=0;
            cin>>k;
            people[k]=1;
        }
        for(int i=1;i<n+1;++i)
            if(people[i]==0)
                cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}
