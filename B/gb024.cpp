#include<iostream>
#include<vector>

using namespace std;

int main()
{
    long long int steps[91];
    steps[0]=0,steps[1]=1,steps[2]=2;
    for(int i=3;i<=90;++i)
        steps[i]=steps[i-1]+steps[i-2];
    int n=0;
    while(cin>>n)
    {
        cout<<steps[n]<<" "<<steps[steps[n]%n]<<endl;
    }
    return 0;
}
