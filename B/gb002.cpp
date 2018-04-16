#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int n=0;
    while(cin>>n)
    {
        vector<int>nv;
        int k=0;
        nv.push_back(0);
        for(int i=1;i<n+1;++i)
        {
            cin>>k;
            nv.push_back(k);
        }
        vector<int>temp=nv;
        sort(temp.begin(),temp.end());
        for(int i=1;i<n+1;++i)
            if(nv[i]==temp[n])
                cout<<i<<" "<<nv[i]<<endl;
    }
    return 0;
}
