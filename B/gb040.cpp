#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//greenb040
int main()
{
    int n=0,p=0;
    while(cin>>n>>p)
    {
        int k=0;
        vector<int>products;
        for(int i=0;i<n;++i)
        {
            cin>>k;
            products.push_back(k);
        }
        sort(products.begin(),products.end());

    }
}
