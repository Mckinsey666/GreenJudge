#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{

    int n=0;
    while(cin>>n)
    {
    vector<int>num;//sometimes i don't import the vector class but can still use it??!! does it automatically becomes an array?

    for(int i=0;i<n;++i)
        num.push_back(i+1);
    do
    {
        for(int i=0;i<n;++i)
            cout<<num[i];
        cout<<endl;
    }while(next_permutation(num.begin(),num.end()));
    }
    return 0;
}
