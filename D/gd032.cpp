#include<iostream>
#include<vector>

using namespace std;



int main()
{
    int n=0;
    while(cin>>n)
    {
        vector<int>coins(n+1,1);

        for(int i=1;i<5;++i)
            for(int j=a[i];j<n+1;++j)
                coins[j]+=coins[j-a[i]];
        cout<<coins[n]<<endl;
    }
    return 0;
}
