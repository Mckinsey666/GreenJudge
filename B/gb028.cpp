#include<iostream>
#include<algorithm>

int coins[6]={1,5,10,12,16,20};
int ways[101]={};

using namespace std;

int least_coins(int n)
{
    if(ways[n])
        return ways[n];
    int m=100;
    for(int i=0;i<6&&(n-coins[i]>0);++i)
    {
        m=min(m,least_coins(n-coins[i])+1);
    }
    ways[n]=m;
    return ways[n];
}
int main()
{
    for(int i=0;i<6;++i)
        ways[coins[i]]=1;
    int n=0;
    while(cin>>n)
        cout<<least_coins(n)<<endl;
    return 0;
}
