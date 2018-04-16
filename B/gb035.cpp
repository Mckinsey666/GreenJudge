#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main()
{
    int n=0;
    while(cin>>n)
    {
        vector<int>time;
        int t=0;
        for(int i=0;i<n;++i)
        {
            cin>>t;
            time.push_back(t);
        }
        sort(time.begin(),time.end());
        long long fine=0;
        for(int i=0;i<n;++i)
            fine+=time[i]*(n-1-i);

        cout<<100*fine<<endl;
    }
    return 0;
}
