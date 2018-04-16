#include<iostream>
#include<vector>

using namespace std;
int main()
{
    int n=0;
    while(cin>>n)
    {
        int k=0;
        vector<int>nv;
        for(int i=0;i<n;++i)
            {cin>>k;
            nv.push_back(k);}

        for(int i=n-1;i>=0;--i)
            cout<<nv[i]<<" ";
        cout<<endl;
    }
    return 0;
}
